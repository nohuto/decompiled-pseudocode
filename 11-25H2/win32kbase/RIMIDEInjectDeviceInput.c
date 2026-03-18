/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x140124E3C
 * Callers:
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1401E8390 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1401EA5A0 (RIMIDESetLinkCollectionUsageValues.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rax
  char v8; // bp
  __int64 v9; // rdi
  int v11; // esi
  int v12; // r14d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  char v18; // r14
  __int64 v19; // r9
  char v20; // r14
  __int64 v21; // r9
  int v22; // ecx
  char v23; // r15
  char v24; // r12
  __int64 v25; // rcx
  char v26; // bl
  bool v27; // r14
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  char v32; // bl
  bool v33; // di
  __int64 UserSessionState; // rax
  int v35; // r8d
  int v36; // edx
  int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+64h] [rbp-54h] BYREF
  int v41; // [rsp+68h] [rbp-50h]
  int *v42; // [rsp+70h] [rbp-48h]
  __int64 v43; // [rsp+78h] [rbp-40h]
  unsigned __int16 v44; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp+18h]

  v45 = a3;
  v4 = *(_QWORD *)(a1 + 392);
  v5 = 0;
  v44 = 0;
  v6 = *(_QWORD *)(a1 + 440);
  v40 = 0;
  v8 = 1;
  v42 = 0LL;
  v9 = (a1 + 72) & -(__int64)(a1 != 0);
  v39 = 1;
  v11 = 0;
  v12 = 0;
  v41 = 1;
  if ( !*(_DWORD *)(v6 + 16) )
    *(_DWORD *)(v6 + 16) = 1;
  v43 = v4 + 104;
  RIMLockExclusive(v4 + 104);
  InputTraceLogging::RIM::InjectInput(v9, a4, 1LL);
  if ( *(_BYTE *)(v4 + 81) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        57,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    }
    v11 = -1073741637;
  }
  else
  {
    v14 = *(_DWORD *)(v9 + 184);
    if ( (v14 & 0x10) != 0 || (v14 & 8) != 0 )
      v42 = &v40;
    memset(*(void **)(*(_QWORD *)(v9 + 440) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v9 + 440) + 44LL));
    while ( v5 < v45 )
    {
      v15 = a2 + 12LL * v5;
      if ( !(unsigned int)RIMIDEInjectionIndexToLinkIndex(
                            (struct RIMDEV *)v9,
                            *(unsigned __int16 *)(v15 + 8),
                            &v44,
                            v39) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 19336);
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v20,
            v21,
            2u,
            v38,
            0x37u,
            (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
        }
        goto LABEL_26;
      }
      v16 = *(_DWORD *)(v9 + 184);
      if ( ((v16 & 0x10) != 0 || (v16 & 8) != 0) && *(_WORD *)v15 == 13 && *(_WORD *)(v15 + 2) == 84 )
        v41 = *(_DWORD *)(v15 + 4);
      v12 = RIMIDESetLinkCollectionUsageValues(v9, 0, (unsigned int)a2 + 12 * v5, v44, (__int64)v42);
      if ( !v12 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v17) + 19336);
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v18,
            v19,
            2u,
            v38,
            0x36u,
            (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
        }
        goto LABEL_26;
      }
      if ( *(_WORD *)(a2 + 12LL * v5 + 8) )
        v39 = 0;
      ++v5;
    }
    if ( !v12 )
    {
LABEL_26:
      v11 = -1073741668;
      goto LABEL_56;
    }
    v22 = *(_DWORD *)(v9 + 184);
    if ( (v22 & 8) == 0 && (v22 & 0x10) == 0 )
      goto LABEL_47;
    v23 = v40;
    v24 = v41;
    if ( v41 == v40 )
    {
      LODWORD(v25) = v22 & 0xFFFFFFF7;
    }
    else
    {
      v25 = v22 | 8u;
      v11 = -1073741436;
      *(_DWORD *)(v9 + 184) = v25;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(v25, WPP_GLOBAL_Control);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 19336),
          2,
          1,
          56,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v24,
          v23);
        LODWORD(v25) = *(_DWORD *)(v9 + 184);
      }
    }
    *(_DWORD *)(v9 + 184) = v25 & 0xFFFFFFEF;
    if ( v11 >= 0 )
    {
LABEL_47:
      RIMLockExclusive(v4 + 760);
      v31 = *(_QWORD *)(v9 + 440);
      *(_DWORD *)(v9 + 240) = 0;
      *(_QWORD *)(v9 + 248) = *(unsigned __int16 *)(v31 + 44);
      rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v4, (struct RIMDEV *)v9);
      RIMUnlockExclusive(v4 + 760);
    }
  }
LABEL_56:
  RIMUnlockExclusive(v43);
  return (unsigned int)v11;
}
