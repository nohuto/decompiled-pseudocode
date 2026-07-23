/*
 * XREFs of PpmEstimateIdleDuration @ 0x1404F57EC
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x1404F5730 (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeEstimateClockTickDuration @ 0x1404F5AD4 (KeEstimateClockTickDuration.c)
 *     PpmGetIdleConstrainedMask @ 0x1405258A0 (PpmGetIdleConstrainedMask.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x140533AE4 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        int a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        __int64 a8,
        int *a9,
        unsigned int a10)
{
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rcx
  ULONG v25; // eax
  unsigned __int64 v26; // r13
  int IsEnabledNoReportingNoInline; // eax
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  unsigned __int64 v31; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 *result; // rax
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+62h] [rbp-9Eh]
  __int16 v40; // [rsp+66h] [rbp-9Ah]
  unsigned __int64 *v41; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v44[33]; // [rsp+88h] [rbp-78h] BYREF

  v42 = a6;
  v39 = 0;
  v40 = 0;
  v41 = a7;
  memset_0(v44, 0, 0x100uLL);
  v16 = *(_QWORD *)(a1 + 34880);
  v17 = -1LL;
  v36 = 0LL;
  v35 = 0;
  LOBYTE(v18) = *(_BYTE *)(v16 + 716);
  v19 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v19 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v19 | 4;
  LOBYTE(v15) = a3;
  LOBYTE(v14) = a2 != 0;
  KeEstimateClockTickDuration(a1, v18, v14, v15, a2 == 2, a4, (__int64)&v36, a8);
  v22 = v36;
  v23 = 1;
  if ( v36 >= a5 )
    v22 = a5;
  if ( !a2 )
  {
    v21 = *(unsigned int *)(a1 + 11684);
    if ( (_DWORD)v21 )
    {
      v24 = (unsigned int)(v21 + 1);
      v25 = KeMaximumIncrement / (unsigned int)v24;
      if ( !(KeMaximumIncrement / (unsigned int)v24) )
        v25 = 1;
      v26 = v25;
      v17 = v25;
      IsEnabledNoReportingNoInline = Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(
                                       v24,
                                       KeMaximumIncrement % (unsigned int)v24);
      v21 = 0LL;
      if ( IsEnabledNoReportingNoInline && PpmIdleDynamicHintAdjustEnabled )
      {
        v28 = *(_DWORD *)(a1 + 11684);
        v21 = v28 + PpmIdleMaxUnexpectedInterrupt;
        v29 = *(_DWORD *)(a1 + 34368) - *(_DWORD *)(a1 + 11680);
        if ( v29 > (unsigned int)v21 )
        {
          v23 = 4097;
          v20 = (KeMaximumIncrement - a10) % v29;
          v17 = (KeMaximumIncrement - a10) / v29;
        }
        else
        {
          if ( v29 >= v28 )
            v29 = *(_DWORD *)(a1 + 11684);
          HIDWORD(v20) = 0;
          v30 = v28 - v29 + 1;
          LODWORD(v20) = a10 % v30;
          v21 = a10 / v30;
          if ( v21 > v26 )
            v17 = (unsigned int)v21;
          v23 = v26 < a10 / v30 ? 4097 : 1;
        }
      }
    }
  }
  if ( v22 <= v17 )
  {
    v17 = v22;
  }
  else
  {
    if ( !(unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(v21, v20) )
      v23 = 1;
    *a9 |= v23;
  }
  v43 = 2097153LL;
  memset_0(v44, 0, 0x100uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( (unsigned __int8)PpmGetIdleConstrainedMask(&v43) )
      {
        v37[1] = (unsigned __int16 *)v44[0];
        v38 = 0;
        v37[0] = (unsigned __int16 *)&v43;
        v31 = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v35, v37) )
        {
          do
          {
            Prcb = KeGetPrcb(v35);
            v33 = *(_QWORD *)(Prcb + 34944);
            if ( v33 != -1LL && v33 > v31 )
              v31 = *(_QWORD *)(Prcb + 34944);
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, v37) );
          if ( v31 && v22 + a4 > v31 )
          {
            *a9 |= 0x2000u;
            if ( v31 > a4 )
              v22 = (unsigned int)(v31 - a4);
            else
              v22 = 1LL;
            if ( v22 < v17 )
              v17 = v22;
          }
        }
      }
    }
  }
  *v41 = v22;
  result = v42;
  *v42 = v17;
  return result;
}
