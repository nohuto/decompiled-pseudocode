/*
 * XREFs of HalGetAdapterV2 @ 0x140786454
 * Callers:
 *     HalpGetAdapter @ 0x14078379C (HalpGetAdapter.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     HalpAddAdapterToList @ 0x14057C7D0 (HalpAddAdapterToList.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x14057C88C (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpDmaIsAutomaticDomain @ 0x14058D4E0 (HalpDmaIsAutomaticDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpGetCacheCoherency @ 0x1407838A0 (HalpGetCacheCoherency.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 */

__int64 __fastcall HalGetAdapterV2(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // cc
  char v5; // r12
  char v6; // cl
  unsigned int v7; // r13d
  char v8; // al
  BOOL v9; // ebx
  char v10; // bp
  char v11; // r14
  char v12; // al
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rbx
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  __int64 *AdapterByDeviceObject; // rax
  __int64 **v25; // rbp
  int AdapterVersion; // ebx
  bool IsAutomaticDomain; // r12
  __int64 ChildAdapterV2; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  char v33; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v35; // [rsp+A0h] [rbp+8h]
  __int64 v36; // [rsp+A8h] [rbp+10h]
  unsigned int v38; // [rsp+B8h] [rbp+20h] BYREF

  v36 = a2;
  v4 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v38) = 0;
  Mdl = 0LL;
  if ( !v4 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 4) || *(_DWORD *)(a1 + 20) == 1 && *(_DWORD *)(a1 + 16) <= 7u )
  {
    v5 = 1;
    v35 = 1;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) )
      return 0LL;
    a2 = v36;
  }
  else
  {
    v5 = 0;
    v35 = 0;
  }
  v6 = *(_BYTE *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v6 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
    *(_BYTE *)(a1 + 8) = 1;
  v8 = *(_BYTE *)(a1 + 8);
  if ( v8 || (v9 = 0, v6) )
  {
    v10 = 1;
    v33 = 1;
    v9 = v8 != 0;
  }
  else
  {
    v10 = 0;
    v33 = 0;
  }
  if ( !v5 && a2 )
  {
    HalpGetCacheCoherency(0LL, a2, &v38);
    v11 = v38;
    if ( (_BYTE)v38 )
      goto LABEL_22;
    return 0LL;
  }
  v11 = 1;
LABEL_22:
  v12 = *(_BYTE *)(a1 + 5);
  if ( v12 && v11 && ((unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v13 = 0;
    v38 = 0;
    v14 = 0;
  }
  else
  {
    if ( v9 )
    {
      v15 = 64;
      if ( v12 )
        v15 = v11 != 0 ? 512 : 64;
    }
    else
    {
      v15 = 16;
    }
    v13 = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v38 = v13;
    v16 = v13;
    if ( v13 > v15 )
    {
      v13 = v15;
      v38 = v15;
      v16 = v15;
    }
    v17 = dword_140FBD2E0;
    v14 = v16;
    if ( !v9 )
      v17 = dword_140FBD200;
    if ( !v10 )
    {
      v18 = v17 >> 13;
      if ( v16 > v18 )
      {
        v13 = v18;
        v38 = v18;
        v14 = v18;
      }
    }
  }
  if ( !v11 )
  {
    Mdl = IoAllocateMdl(0LL, v14 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v19 = *(unsigned int *)(a1 + 16);
  if ( v5 )
  {
    v20 = *(_QWORD *)(HalpDmaAdapters + 8 * v19);
    if ( v20 )
    {
      if ( v13 > *(_DWORD *)(v20 + 232) )
        *(_DWORD *)(v20 + 232) = v13;
      ObReferenceObjectByPointer((PVOID)v20, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_64;
    }
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v5 )
  {
    v20 = *(_QWORD *)(HalpDmaAdapters + 8 * v19);
    if ( v20 )
    {
      if ( v13 > *(_DWORD *)(v20 + 232) )
        *(_DWORD *)(v20 + 232) = v13;
      ObReferenceObjectByPointer((PVOID)v20, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_63;
    }
  }
  if ( v36 )
  {
    AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v36);
    v25 = (__int64 **)AdapterByDeviceObject;
    if ( AdapterByDeviceObject )
    {
      AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
      IsAutomaticDomain = HalpDmaIsAutomaticDomain(v25[64]);
      ObfDereferenceObject(v25);
      if ( AdapterVersion != 2 && !IsAutomaticDomain )
        goto LABEL_70;
      v5 = v35;
    }
  }
  LOBYTE(v23) = *(_BYTE *)(a1 + 5);
  LOBYTE(v22) = *(_BYTE *)(a1 + 11);
  LOBYTE(v21) = *(_BYTE *)(a1 + 8);
  ChildAdapterV2 = HalpDmaAllocateChildAdapterV2(v13, v21, v22, v23, *(_BYTE *)(a1 + 4), v33, v11, (__int64)&v38);
  v20 = ChildAdapterV2;
  if ( !ChildAdapterV2 )
  {
LABEL_70:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *(_BYTE *)(ChildAdapterV2 + 524) = 1;
  if ( v5 )
  {
    *(_QWORD *)(HalpDmaAdapters + 8 * v19) = ChildAdapterV2;
    v30 = guard_dispatch_icall_no_overrides(a1, v29);
    if ( v30 )
    {
      *(_QWORD *)(v20 + 432) = v30;
      ObReferenceObjectByPointer((PVOID)v20, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_59;
    }
    goto LABEL_70;
  }
LABEL_59:
  if ( v38 )
  {
    *(_DWORD *)(v20 + 232) = v38;
    v31 = 1;
  }
  else
  {
    *(_DWORD *)(v20 + 232) = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v31 = 0;
  }
  *(_BYTE *)(v20 + 440) = v31;
  *(_QWORD *)(v20 + 312) = 0LL;
LABEL_63:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_64:
  *(_BYTE *)(v20 + 444) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v20 + 444) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v20 + 232);
  *(_QWORD *)(v20 + 304) = Mdl;
  if ( v5 )
  {
    *(_DWORD *)(v20 + 380) = v19;
  }
  else
  {
    *(_QWORD *)(v20 + 528) = v36;
    HalpAddAdapterToList(v20);
  }
  return v20;
}
