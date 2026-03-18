/*
 * XREFs of ACPIFanValidateImpactZoneSupport @ 0x1400B0BC0
 * Callers:
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x140033F50 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_dddqss @ 0x140060C38 (WPP_RECORDER_SF_dddqss.c)
 */

char __fastcall ACPIFanValidateImpactZoneSupport(__int64 a1, __int64 a2, const char *a3)
{
  char v3; // di
  const char *v4; // rsi
  __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // rcx
  unsigned __int16 v9; // r9
  unsigned int i; // r14d
  unsigned int v11; // ecx
  int v12; // edx
  char v13; // r10
  unsigned int v14; // r13d
  const char *v15; // rdx
  __int64 v16; // rax
  char v17; // r10
  const char *v18; // rax
  __int64 v19; // rcx
  int v21; // [rsp+20h] [rbp-68h]

  v3 = 0;
  v4 = byte_140075A82;
  LODWORD(v6) = 0;
  if ( *(_DWORD *)(a1 + 324) )
  {
    for ( i = 0; i < 4; ++i )
    {
      v11 = *(_DWORD *)(a1 + 4LL * i + 328);
      if ( (unsigned int)v6 > v11 )
      {
        v17 = 0;
        v18 = byte_140075A82;
        if ( a1 )
        {
          a3 = *(const char **)(a1 + 8);
          v17 = a1;
          if ( ((unsigned __int64)a3 & 0x200000000000LL) != 0 )
          {
            v4 = *(const char **)(a1 + 608);
            if ( ((unsigned __int64)a3 & 0x400000000000LL) != 0 )
              v18 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            (__int64)a3,
            0x2Eu,
            v21,
            v6,
            i,
            v11,
            v17,
            v4,
            v18);
        return v3;
      }
      v12 = v11 % *(_DWORD *)(a1 + 324);
      if ( v12 )
      {
        v13 = 0;
        v14 = v11 - v12;
        a3 = byte_140075A82;
        v15 = byte_140075A82;
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 8);
          v13 = a1;
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            a3 = *(const char **)(a1 + 608);
            if ( (v16 & 0x400000000000LL) != 0 )
              v15 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            (__int64)a3,
            0x2Fu,
            v21,
            i,
            v11,
            v14,
            v13,
            a3,
            v15);
        v11 = v14;
        *(_DWORD *)(a1 + 4LL * i + 328) = v14;
      }
      LODWORD(v6) = v11;
    }
    if ( *(_DWORD *)(a1 + 340) )
    {
      return 1;
    }
    else
    {
      LOBYTE(v6) = 0;
      v7 = byte_140075A82;
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 8);
        LOBYTE(v6) = a1;
        if ( (v19 & 0x200000000000LL) != 0 )
        {
          v4 = *(const char **)(a1 + 608);
          if ( (v19 & 0x400000000000LL) != 0 )
            v7 = *(const char **)(a1 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 48;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v7 = byte_140075A82;
    if ( a1 )
    {
      v6 = a1;
      v8 = *(_QWORD *)(a1 + 8);
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(v6 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(v6 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 45;
LABEL_8:
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        v9,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        0,
        v6,
        v4,
        v7);
    }
  }
  return v3;
}
