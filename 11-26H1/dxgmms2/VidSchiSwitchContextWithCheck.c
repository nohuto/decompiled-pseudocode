/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1400202A8
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiSwitchContext @ 0x14001FD00 (VidSchiSwitchContext.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x14002013C (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckPreemptionPolicy @ 0x140024ED0 (VidSchiCheckPreemptionPolicy.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v3; // r12d
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rcx
  union _LARGE_INTEGER v7; // rbx
  __int64 v8; // r13
  void (__fastcall *v10)(_QWORD); // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  LARGE_INTEGER v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  void (__fastcall *v17)(_QWORD); // rax
  LARGE_INTEGER v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rdx
  __int64 v23; // rcx
  __int64 **v24; // rax
  int v25; // [rsp+60h] [rbp+40h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+50h]

  v1 = *(_QWORD *)(a1 + 96);
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 24);
  if ( *(_DWORD *)(v4 + 3260) || (*(_BYTE *)(v4 + 3284) & 1) != 0 )
    goto LABEL_21;
  if ( VidSchiBlockContextOnPendingFlips(*(_QWORD *)(a1 + 656)) )
  {
    if ( !*(_QWORD *)(a1 + 48) )
    {
      v22 = (__int64 *)(a1 + 40);
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3768LL;
      v24 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3776LL);
      if ( *v24 != (__int64 *)v23 )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(a1 + 48) = v24;
      *v24 = v22;
      *(_QWORD *)(v23 + 8) = v22;
    }
    v11 = 3LL;
    v12 = 16692LL;
    goto LABEL_29;
  }
  v25 = *(_DWORD *)(v1 + 16520);
  v5 = *(_DWORD *)(a1 + 652);
  PerformanceFrequency.QuadPart = 0LL;
  if ( (v5 & 0xF) != 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
    goto LABEL_21;
  v6 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v6 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 208), 0, 0) )
    goto LABEL_21;
  if ( (unsigned int)VidSchiCheckPreemptionPolicy(a1, &PerformanceFrequency) )
  {
    v3 = 4;
    goto LABEL_20;
  }
  v7 = PerformanceFrequency;
  if ( PerformanceFrequency.QuadPart != -1 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v27 = 0LL;
    if ( is_mul_ok(v18.QuadPart, 0x989680uLL) )
      v19 = (unsigned __int64)v18.QuadPart
          * (unsigned __int128)0x989680uLL
          / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v19 = 10000000 * (v18.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
          + 10000000 * (v18.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    v20 = v19 + v7.QuadPart;
    v21 = *(_QWORD *)(v1 + 96);
    *(_QWORD *)(v1 + 136) = v21;
    *(_QWORD *)(v1 + 128) = v20;
    WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v21);
    WdLogGlobalForLineNumber = 16742;
  }
  v8 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 1576) + 1584);
  if ( v7.QuadPart == -1 && !*(_DWORD *)(v1 + 3024) && (*(_DWORD *)(v1 + 3004) > 1u || v8 && a1 != v8) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v13.QuadPart, 0x989680uLL) )
      v14 = (unsigned __int64)v13.QuadPart
          * (unsigned __int128)0x989680uLL
          / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v14 = 10000000 * (v13.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
          + 10000000 * (v13.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    v15 = v14 + *(_QWORD *)(a1 + 488);
    v16 = *(_QWORD *)(v1 + 96);
    *(_QWORD *)(v1 + 144) = v16;
    *(_QWORD *)(v1 + 128) = v15;
    WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v16);
    WdLogGlobalForLineNumber = 16769;
  }
  if ( *(int *)(v1 + 3000) > 0
    && *(_DWORD *)(v1 + 3016) < *(_DWORD *)(v4 + 252)
    && !*(_DWORD *)(v1 + 3024)
    && (!v8
     || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 24LL) + 7078LL)
     || *(_DWORD *)(v8 + 412) <= *(_DWORD *)(a1 + 412)) )
  {
LABEL_20:
    if ( v25 != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v1 + 16520) != -1 )
        {
          v10 = *(void (__fastcall **)(_QWORD))(v4 + 3328);
          if ( v10 )
            v10(*(_QWORD *)(v4 + 3368));
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) |= 0x10u;
      }
      if ( !*(_BYTE *)(v1 + 16524) )
      {
        v11 = 8LL;
        v12 = 16860LL;
LABEL_29:
        VidSchiUpdateContextStatus(a1, v11, v12);
        return 3LL;
      }
    }
LABEL_21:
    VidSchiSwitchContext(a1);
    return v3;
  }
  RtlClearBitEx(v4 + 552, *(unsigned __int16 *)(v1 + 4));
  RtlCopyBitMapEx(v4 + 504, v4 + 600, 0LL);
  RtlIntersectBitMapsEx(v4 + 600, v4 + 552);
  if ( !(unsigned __int8)RtlAreBitsClearEx(v4 + 600, 0LL, *(_QWORD *)(v4 + 600)) )
    return 3LL;
  if ( v25 != -1 && (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v1 + 16520) != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD))(v4 + 3328);
      if ( v17 )
        v17(*(_QWORD *)(v4 + 3368));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) |= 0x10u;
  }
  return 2LL;
}
