/*
 * XREFs of EtwpEnableMetaProviderGuid @ 0x14044EE5C
 * Callers:
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     EtwpGetMetaProviderContext @ 0x14044EEE0 (EtwpGetMetaProviderContext.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpUpdateTagFilter @ 0x14082D874 (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpEnableMetaProviderGuid(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 MetaProviderContext; // rdi
  unsigned int i; // ecx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 *v17; // r10
  unsigned __int64 v18; // rdx
  int v19; // r9d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // ebx
  _OWORD v22[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v23[2]; // [rsp+50h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  MetaProviderContext = EtwpGetMetaProviderContext(a2);
  if ( !MetaProviderContext )
    return 3221226133LL;
  if ( !a1 || a3 > 1 || (*(_DWORD *)(a1 + 12) & 0x2000000) == 0 )
    return 3221225485LL;
  if ( (__int64 (**)[32])MetaProviderContext == &MemoryMetaProviderContext
    && a5
    && *(_QWORD *)(a1 + 1360) == EtwpHostSiloState )
  {
    for ( i = 0; i < a6; ++i )
    {
      if ( *(_DWORD *)(a5 + 16LL * i + 12) == 0x80000000 && *(_DWORD *)(a5 + 16LL * i + 8) > 0x18u )
      {
        _mm_lfence();
        v12 = *(_QWORD *)(a5 + 16LL * i);
        v13 = *(unsigned int *)(v12 + 16);
        if ( *(unsigned int *)(a5 + 16LL * i + 8) < (unsigned __int64)(v13 + 24) )
          return 2147483653LL;
        if ( *(_WORD *)v12 == 1 )
        {
          v14 = (unsigned int)v13 >> 2;
          if ( (unsigned int)v14 > 4 )
            return 3221225485LL;
          EtwpUpdateTagFilter(v12 + 24, v14, &stru_140F03830.ApcStateFill[20 * *(unsigned __int8 *)(a1 + 818) + 24]);
        }
        break;
      }
    }
  }
  v15 = -1LL;
  v22[0] = 0LL;
  if ( a4 )
    v15 = a4;
  v16 = 0;
  for ( v22[1] = 0LL; v16 < *(_DWORD *)(MetaProviderContext + 8); ++v16 )
  {
    v17 = *(__int64 **)MetaProviderContext;
    v18 = (unsigned __int64)*(unsigned int *)(*(_QWORD *)MetaProviderContext + 16LL * v16 + 8) >> 29;
    v19 = *(_DWORD *)(*(_QWORD *)MetaProviderContext + 16LL * v16 + 8) & 0x1FFFFFFF;
    *((_DWORD *)v22 + v18) |= v19;
    if ( a3 == 1 && (v15 & v17[2 * v16]) != 0 )
      *((_DWORD *)v23 + v18) |= v19;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  updated = EtwpUpdateSelectedGroupMasks(a1, v22, v23);
  KeReleaseMutant((PRKMUTANT)(a1 + 632), 1, 0, 0);
  KeLeaveCriticalRegion();
  return updated;
}
