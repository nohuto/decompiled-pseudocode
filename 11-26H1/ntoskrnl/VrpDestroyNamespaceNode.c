/*
 * XREFs of VrpDestroyNamespaceNode @ 0x140939B04
 * Callers:
 *     VrpDestroyNamespaceNodeList @ 0x140939C68 (VrpDestroyNamespaceNodeList.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     VrpPostUnloadKey @ 0x140B63F7C (VrpPostUnloadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VrpFindExactNamespaceNode @ 0x14093979C (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(size_t *a1, __int64 a2)
{
  unsigned int v2; // r12d
  ULONGLONG v5; // r9
  ULONGLONG v6; // rcx
  unsigned __int64 v7; // r10
  ULONGLONG v8; // rax
  unsigned __int64 v9; // r8
  char *v10; // r14
  int v11; // eax
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  size_t v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  ULONGLONG v20; // rcx
  ULONGLONG v21; // rdx
  ULONGLONG v22; // r14
  void *v23; // r15
  PVOID v24; // rax
  void *v25; // rsi
  size_t v26; // r13
  PVOID PoolWithTag; // rax
  size_t v28; // r8
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+50h] BYREF

  NumberOfBytes = 0LL;
  v2 = 0;
  if ( VrpFindExactNamespaceNode((int)a1, a2, (int)&NumberOfBytes) != a2 )
    goto LABEL_5;
  v5 = a1[6];
  v2 = 1;
  v6 = NumberOfBytes;
  if ( NumberOfBytes >= v5 )
    goto LABEL_5;
  v7 = a1[5];
  v8 = v7 * NumberOfBytes;
  NumberOfBytes = 0LL;
  if ( !is_mul_ok(v7, v6) )
    goto LABEL_5;
  v9 = a1[9];
  v10 = (char *)(v9 + v8);
  if ( v9 + v8 < v9 )
    goto LABEL_5;
  v17 = v5 + ~v6;
  if ( v17 )
  {
    NumberOfBytes = 0LL;
    v17 *= v7;
    if ( !is_mul_ok(v5 + ~v6, v7) )
      goto LABEL_5;
    NumberOfBytes = 0LL;
    v18 = v7 * (v6 + 1);
    if ( !is_mul_ok(v7, v6 + 1) || v9 + v18 < v9 )
      goto LABEL_5;
    memmove(v10, (const void *)(v9 + v18), v17);
  }
  memset_0(&v10[v17], 0, a1[5]);
  v19 = a1[6] - 1;
  a1[6] = v19;
  if ( v19 <= 0x10 )
    goto LABEL_5;
  v20 = a1[7];
  v21 = a1[5];
  if ( v21 * v20 < 0x400 )
    goto LABEL_5;
  if ( v19 >= v20 >> 2 )
    goto LABEL_5;
  pullResult = 0LL;
  v22 = v20 >> 1;
  NumberOfBytes = 0LL;
  if ( ULongLongMult(v20, v21, &pullResult) < 0 || ULongLongMult(v22, a1[5], &NumberOfBytes) < 0 )
    goto LABEL_5;
  v23 = (void *)a1[9];
  if ( v23 )
  {
    v26 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_5;
    memset_0(PoolWithTag, 0, v26);
    v28 = pullResult;
    if ( pullResult >= v26 )
      v28 = v26;
    memmove(v25, v23, v28);
    ExFreePoolWithTag(v23, 0x72615452u);
LABEL_34:
    a1[9] = (size_t)v25;
    a1[7] = v22;
    goto LABEL_5;
  }
  v24 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
  v25 = v24;
  if ( v24 )
    memset_0(v24, 0, NumberOfBytes);
  if ( v25 )
    goto LABEL_34;
LABEL_5:
  v11 = *(_DWORD *)(a2 + 56);
  if ( (v11 & 0x40000000) != 0 && v11 < 0 )
  {
    NumberOfBytes = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 40);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&NumberOfBytes, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey((HANDLE)NumberOfBytes);
      ZwClose((HANDLE)NumberOfBytes);
    }
  }
  v12 = *(void **)(a2 + 16);
  if ( v12 )
    ObDereferenceObjectDeferDeleteWithTag(v12, 0x67655256u);
  v13 = *(void **)(a2 + 8);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x67655256u);
  v14 = *(void **)(a2 + 32);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x67655256u);
  v15 = *(void **)(a2 + 48);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v2;
}
