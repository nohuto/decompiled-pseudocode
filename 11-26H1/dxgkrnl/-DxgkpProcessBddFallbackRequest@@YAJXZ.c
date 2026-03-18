/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x14006E5C8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006E688 (_DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_ @ 0x14019689C (_lambda_2fbe1e6675968e3c1c931614a5d80f9c_--_lambda_2fbe1e6675968e3c1c931614a5d80f9c_.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x140198854 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1403195B8 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1403ADEB8 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 DxgkpProcessBddFallbackRequest(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int128 *v2; // rax
  __int128 v3; // xmm1
  unsigned int v4; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rax
  struct DXGGLOBAL *v9; // rax
  unsigned int v10; // ebx
  __int128 *v11; // r15
  int v12; // [rsp+50h] [rbp-69h] BYREF
  struct _LUID v13; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 *v15; // [rsp+68h] [rbp-51h]
  __int128 v16[2]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v17[112]; // [rsp+A0h] [rbp-19h] BYREF
  bool v18; // [rsp+128h] [rbp+6Fh] BYREF
  int v19; // [rsp+130h] [rbp+77h] BYREF
  int v20; // [rsp+138h] [rbp+7Fh] BYREF

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304898)
    && !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304896)
    && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13280;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Investigate why DWM failed to initialize, contact basevid",
      13280LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v0 = -1073741823;
    v19 = 1;
    v20 = -1073741823;
    v12 = 0;
    v1 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
    v18 = v1 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 125);
    v2 = (__int128 *)lambda_2fbe1e6675968e3c1c931614a5d80f9c_::_lambda_2fbe1e6675968e3c1c931614a5d80f9c_(
                       (unsigned int)v14,
                       (unsigned int)&v20,
                       (unsigned int)&v19,
                       (unsigned int)&v18,
                       (__int64)&v12);
    v3 = v2[1];
    v16[0] = *v2;
    v16[1] = v3;
    DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v17, v16);
    if ( ((dword_140169440 - 10) & 0xFFFFFFF9) == 0 && dword_140169440 != 12 )
    {
      v19 = 2;
      v4 = -1073741637;
LABEL_21:
      v20 = v4;
      goto LABEL_22;
    }
    if ( !(unsigned int)DxgIsRemoteSession() )
    {
      v12 = 1;
LABEL_9:
      v0 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v19);
LABEL_10:
      v20 = v0;
      DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v17);
      return v0;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    {
      v12 = 2;
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
        *((_BYTE *)SessionData + 18505) = 0;
      v8 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 124);
      if ( !v8 )
      {
        v19 = 2;
LABEL_20:
        v4 = -1073741275;
        goto LABEL_21;
      }
      v13 = *(struct _LUID *)(v8 + 412);
      v15 = v16;
      v14[0] = 0;
      v14[1] = 1;
      v9 = DXGGLOBAL::GetGlobal();
      v20 = DXGGLOBAL::IterateAdaptersWithCallback(v9, DxgkpAdapterRefCallback, v14, 4LL);
      if ( v20 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13365;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"As we do not support more than one remote ID adapter we would not expect the search to fail",
          13365LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v19 = 4;
        v4 = v20;
LABEL_22:
        DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v17);
        return v4;
      }
      if ( !v14[0] )
      {
        v19 = 6;
        goto LABEL_20;
      }
      v10 = 0;
      do
      {
        v11 = v15;
        v20 = DxgkSetIndirectDisplayRenderAdapter(*(struct DXGADAPTER **)&v15[v10], &v13);
        DXGADAPTER::ReleaseReference(*(DXGADAPTER **)&v11[v10++]);
      }
      while ( v10 < v14[0] );
    }
    else
    {
      v12 = 3;
      if ( v18 )
        goto LABEL_9;
    }
    v19 = 7;
    goto LABEL_10;
  }
  return 0LL;
}
