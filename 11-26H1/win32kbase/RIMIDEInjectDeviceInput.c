/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x140154A10
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x14020653C (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1402070F4 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x140209680 (RIMIDESetLinkCollectionUsageValues.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct RawInputManagerObject *v6; // rcx
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rdi
  int v11; // esi
  int v12; // r15d
  int *v13; // r12
  int v14; // r8d
  int v15; // eax
  unsigned int i; // ebx
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  bool v20; // r15
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // ecx
  char v25; // r15
  __int64 v26; // rax
  char v27; // r12
  unsigned int v28; // ecx
  char v29; // bl
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rax
  struct RawInputManagerObject *v35; // r14
  char *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rax
  char v40; // bl
  bool v41; // di
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  int v46; // [rsp+60h] [rbp-58h]
  int v47; // [rsp+64h] [rbp-54h] BYREF
  int v48; // [rsp+68h] [rbp-50h]
  struct RawInputManagerObject *v49; // [rsp+70h] [rbp-48h]
  __int64 v50; // [rsp+78h] [rbp-40h]
  unsigned __int16 v51; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v52; // [rsp+D0h] [rbp+18h]

  v52 = a3;
  v6 = *(struct RawInputManagerObject **)(a1 + 392);
  v49 = v6;
  v51 = 0;
  v7 = *(_QWORD *)(a1 + 440);
  v47 = 0;
  v8 = 1;
  v9 = (a1 + 72) & -(__int64)(a1 != 0);
  v46 = 1;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v48 = 1;
  if ( !*(_DWORD *)(v7 + 16) )
    *(_DWORD *)(v7 + 16) = 1;
  v50 = (__int64)v6 + 104;
  RIMLockExclusive((__int64)v6 + 104);
  InputTraceLogging::RIM::InjectInput(v9, a4, 1LL);
  if ( *((_BYTE *)v49 + 81) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v40 = 0;
    }
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v14);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        57,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
    }
    v11 = -1073741637;
  }
  else
  {
    v15 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8);
    if ( (v15 & 0x10) != 0 || (v15 & 8) != 0 )
      v13 = &v47;
    memset(*(void **)(*(_QWORD *)(v9 + 440) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v9 + 440) + 44LL));
    for ( i = 0; i < v52; ++i )
    {
      if ( !(unsigned int)RIMIDEInjectionIndexToLinkIndex(
                            (struct RIMDEV *)v9,
                            *(unsigned __int16 *)(a2 + 12LL * i + 8),
                            &v51,
                            v46) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_QWORD *)(W32GetUserSessionState(3 * i, 0, v17) + 19368);
LABEL_26:
          LOBYTE(v22) = v20;
          LOBYTE(v21) = v8;
          WPP_RECORDER_AND_TRACE_SF_dDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v21, v22, v23, 2);
        }
LABEL_27:
        v11 = -1073741668;
        goto LABEL_63;
      }
      v18 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8);
      if ( ((v18 & 0x10) != 0 || (v18 & 8) != 0)
        && *(_WORD *)(a2 + 12LL * i) == 13
        && *(_WORD *)(a2 + 12LL * i + 2) == 84 )
      {
        v48 = *(_DWORD *)(a2 + 12LL * i + 4);
      }
      v12 = RIMIDESetLinkCollectionUsageValues(v9, 0, (unsigned int)a2 + 12 * i, v51, (__int64)v13);
      if ( !v12 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_QWORD *)(W32GetUserSessionState(3 * i, v19, 0) + 19368);
          goto LABEL_26;
        }
        goto LABEL_27;
      }
      if ( *(_WORD *)(a2 + 12LL * i + 8) )
        v46 = 0;
    }
    if ( !v12 )
      goto LABEL_27;
    v24 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8);
    if ( (v24 & 8) == 0 && (v24 & 0x10) == 0 )
      goto LABEL_52;
    v25 = v47;
    v26 = a1 + 256;
    v27 = v48;
    if ( !a1 )
      v26 = 184LL;
    if ( v48 == v47 )
    {
      v28 = v24 & 0xFFFFFFF7;
    }
    else
    {
      v28 = v24 | 8;
      v11 = -1073741436;
      *(_DWORD *)v26 = v28;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(v28, (_DWORD)WPP_GLOBAL_Control, 0);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 19368),
          2,
          1,
          56,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v27,
          v25);
        v34 = a1 + 256;
        if ( !a1 )
          v34 = 184LL;
        v28 = *(_DWORD *)v34;
      }
    }
    *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) = v28 & 0xFFFFFFEF;
    if ( v11 >= 0 )
    {
LABEL_52:
      v35 = v49;
      v36 = (char *)v49 + 760;
      RIMLockExclusive((__int64)v49 + 760);
      v37 = *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1B8);
      *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xF0) = 0;
      v38 = *(unsigned __int16 *)(v37 + 44);
      v39 = a1 + 320;
      if ( !a1 )
        v39 = 248LL;
      *(_QWORD *)v39 = v38;
      rimProcessDeviceBufferAndStartRead(v35, (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)), 1);
      RIMUnlockExclusive((__int64)v36);
    }
  }
LABEL_63:
  RIMUnlockExclusive(v50);
  return (unsigned int)v11;
}
