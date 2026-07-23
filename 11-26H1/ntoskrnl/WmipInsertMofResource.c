/*
 * XREFs of WmipInsertMofResource @ 0x140B1C6AC
 * Callers:
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipInsertMofResource(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int i; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // r15d
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  size_t v14; // r12
  char *Pool2; // rax
  char *v16; // rbp
  __int64 v17; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v4 = *(unsigned int *)(a1 + 64);
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v7 = *(_QWORD *)(a1 + 72);
    v8 = *(_QWORD *)(v7 + 8LL * i);
    if ( v8 == a2 )
      return v2;
    if ( !v8 )
    {
      *(_QWORD *)(v7 + 8LL * i) = a2;
LABEL_7:
      WmipReferenceEntry(a2);
      return v2;
    }
  }
  if ( i != (_DWORD)v4 )
    goto LABEL_7;
  v10 = v4 + 4;
  v17 = *(_QWORD *)(a1 + 72);
  v11 = 8 * v4;
  v12 = -1;
  if ( (unsigned __int64)(8 * v4) <= 0xFFFFFFFF )
    v12 = 8 * v4;
  v13 = 8LL * v10;
  if ( v13 > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v14 = (unsigned int)v13;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v16 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v14);
      memmove(v16, *(const void **)(a1 + 72), v12);
      if ( v17 != a1 + 80 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      *(_QWORD *)(a1 + 72) = v16;
      *(_QWORD *)&v16[v11] = a2;
      *(_DWORD *)(a1 + 64) = v10;
      goto LABEL_7;
    }
    return (unsigned int)-1073741670;
  }
}
