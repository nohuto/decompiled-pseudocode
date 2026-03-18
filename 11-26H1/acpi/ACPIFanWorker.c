/*
 * XREFs of ACPIFanWorker @ 0x140047900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qDDqss @ 0x14004B118 (WPP_RECORDER_SF_qDDqss.c)
 *     ACPIFanSetTripPoints @ 0x1400A8500 (ACPIFanSetTripPoints.c)
 */

int __fastcall ACPIFanWorker(__int64 a1, __int16 a2)
{
  const char *v2; // r10
  const char *v3; // r8
  char v6; // r11
  __int64 v7; // rax
  KIRQL v8; // r10
  _QWORD *v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  int v16; // r8d
  _QWORD *v17; // r14
  _QWORD **v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // r13
  _QWORD *v21; // r15
  __int64 v22; // rcx
  _QWORD *v23; // rax
  const char *v24; // rdx
  const char *v25; // rax
  __int64 v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-78h]
  _QWORD *v29; // [rsp+60h] [rbp-38h] BYREF
  _QWORD **v30; // [rsp+68h] [rbp-30h]
  unsigned int v31; // [rsp+A8h] [rbp+10h]

  v2 = byte_140075A82;
  v3 = byte_140075A82;
  v6 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v6 = a1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(a1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v3 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x20u,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a2,
      v6,
      v2,
      v3);
  v30 = &v29;
  v29 = &v29;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( (a2 & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(a1 + 232);
    while ( v9 != (_QWORD *)(a1 + 232) )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      if ( (_QWORD *)v9[1] != v10 )
        goto LABEL_37;
      v11 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v11 != v10 )
        goto LABEL_37;
      *v11 = v9;
      v9[1] = v11;
      if ( (a2 & 0x200) == 0 )
      {
        v12 = (_DWORD *)*(v10 - 18);
        *(_DWORD *)(a1 + 316) = *v12;
        *(_DWORD *)(a1 + 312) = v12[1];
      }
      v13 = v30;
      if ( *v30 != &v29 )
LABEL_37:
        __fastfail(3u);
      v10[1] = v30;
      *v10 = &v29;
      *v13 = v10;
      v30 = (_QWORD **)v10;
    }
  }
  v14 = *(_DWORD *)(a1 + 312);
  v15 = *(_DWORD *)(a1 + 316);
  v31 = v14;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v8);
  v17 = v29;
  v18 = &v29;
  if ( v29 != &v29 )
  {
    do
    {
      v19 = v17 - 21;
      v20 = v17[2];
      v21 = v17;
      v17 = (_QWORD *)*v17;
      if ( _InterlockedExchange64(v19 + 13, 0LL) )
      {
        if ( *(_DWORD *)(v20 + 24) == 2720328 )
        {
          if ( (a2 & 0x200) != 0 )
            *((_DWORD *)v19 + 12) = 0;
          else
            *((_DWORD *)v19 + 12) = ACPIFanSetTripPoints(a1, *(unsigned int *)v19[3], *(unsigned int *)(v19[3] + 4LL));
          v19[7] = 0LL;
        }
        v22 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 )
          goto LABEL_37;
        v23 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v23 != v21 )
          goto LABEL_37;
        *v23 = v22;
        v24 = byte_140075A82;
        *(_QWORD *)(v22 + 8) = v23;
        v25 = byte_140075A82;
        v26 = *(_QWORD *)(a1 + 8);
        if ( (v26 & 0x200000000000LL) != 0 )
        {
          v24 = *(const char **)(a1 + 608);
          if ( (v26 & 0x400000000000LL) != 0 )
            v25 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v24,
            v16,
            33,
            v28,
            (char)v19,
            *(_DWORD *)(v20 + 24),
            *((_DWORD *)v19 + 12),
            a1,
            (__int64)v24,
            (__int64)v25);
        IofCompleteRequest((PIRP)v19, 0);
      }
      v18 = &v29;
    }
    while ( v17 != &v29 );
    v14 = v31;
  }
  if ( (a2 & 0x400) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
      return (int)v18;
LABEL_39:
    LODWORD(v18) = KeSetEvent((PRKEVENT)(a1 + 344), 0, 0);
    return (int)v18;
  }
  if ( (a2 & 0x200) != 0 )
    goto LABEL_39;
  LODWORD(v18) = ACPIFanSetTripPoints(a1, v15, v14);
  return (int)v18;
}
