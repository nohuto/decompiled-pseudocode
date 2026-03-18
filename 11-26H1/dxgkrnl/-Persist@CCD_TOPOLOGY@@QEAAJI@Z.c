/*
 * XREFs of ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkPersistPathsModality @ 0x1403494E0 (DxgkPersistPathsModality.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x140192610 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1402698F8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x140339E1C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033A268 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14033BAC4 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14033CF38 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14034A144 (DxgkInvalidateQdcCacheOnlyDatabase.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x14040F438 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  struct CCD_BTL *v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  unsigned int v16; // edx
  struct CCD_BTL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  struct CCD_BTL *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  int v27; // eax
  struct _STRING *v28; // rax
  struct D3DKMT_GETPATHSMODALITY *v29; // r8
  struct _STRING *ConnectedSetStr; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // edi
  struct CCD_BTL *v34; // rax
  int v35; // eax
  struct _STRING v36; // [rsp+30h] [rbp-50h] BYREF
  int v37; // [rsp+40h] [rbp-40h] BYREF
  __int128 v38; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+58h] [rbp-28h]
  __int16 v40; // [rsp+60h] [rbp-20h]
  __int128 v41; // [rsp+68h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 0LL;
    WdLogGlobalForLineNumber = 3152;
    return result;
  }
  if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
  {
    WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
    WdLogGlobalForLineNumber = 3165;
    DxgkLogCodePointPacket(0x3Fu, 0, v3, 0xC0000001, 0LL);
    return 3221225473LL;
  }
  v37 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v40 = 0;
  v5 = CCD_BTL::Global();
  v6 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v5)(v5, &v37);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v37) )
    {
      WdLogSingleEntry3(3LL, -1073741266LL, this[8], v3);
      v8 = 2;
      WdLogGlobalForLineNumber = 3191;
LABEL_9:
      DxgkLogCodePointPacket(0x3Fu, v8, v3, 0xC000022E, 0LL);
      v7 = -1073741266;
      goto LABEL_38;
    }
    if ( (v3 & 0x40000000) == 0 )
    {
      v9 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v37);
      v7 = v9;
      if ( v9 == -1073741266 )
      {
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v3);
        v8 = 3;
        WdLogGlobalForLineNumber = 3205;
        goto LABEL_9;
      }
      if ( v9 < 0 )
      {
        WdLogSingleEntry3(2LL, v9, this[8], v3);
        v10 = 3;
        WdLogGlobalForLineNumber = 3215;
LABEL_15:
        DxgkLogCodePointPacket(0x3Fu, v10, v3, v7, 0LL);
        goto LABEL_38;
      }
    }
    if ( (int)v3 < 0 )
    {
      v10 = 4;
      goto LABEL_15;
    }
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v12, v13, v14);
    if ( SessionData && *((_BYTE *)SessionData + 18498) )
    {
      v16 = 9;
LABEL_37:
      DxgkLogCodePointPacket(0x3Fu, v16, v3, v7, 0LL);
      DxgkInvalidateQdcCacheOnlyDatabase();
      goto LABEL_38;
    }
    v17 = CCD_BTL::Global();
    if ( *((struct CCD_BTL **)v17 + 17) != (struct CCD_BTL *)((char *)v17 + 136) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
      v20[3] = v3;
      LODWORD(v3) = v3 | 1;
      v20[4] = this;
      v20[5] = this[8];
      WdLogGlobalForLineNumber = 3245;
      v21 = CCD_BTL::Global();
      CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v21 + 112));
    }
    if ( (v3 & 1) == 0 )
    {
      v22 = CCD_STORE::ForTopology(
              (const struct CCD_SET_STRING_ID *)this,
              anonymous_namespace_::_UpdateTimestampTopologySetCallback,
              this,
              0);
      v25 = v22;
      if ( v22 >= 0 )
      {
LABEL_31:
        if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v37) )
        {
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v37);
          v32 = CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
                  v31,
                  ConnectedSetStr,
                  (int (__fastcall *)(_BYTE *, __int64))anonymous_namespace_::_UpdateConnectedSetCallback,
                  (__int64)this);
          v33 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry4(2LL, v32, &v38, this, this[8]);
            WdLogGlobalForLineNumber = 3311;
            DxgkLogCodePointPacket(0x3Fu, 6u, v3, v33, 0LL);
          }
        }
        v34 = CCD_BTL::Global();
        v35 = CCD_TOPOLOGY::CopyInheritScope((struct CCD_BTL *)((char *)v34 + 8), (const struct CCD_TOPOLOGY *)this);
        v7 = v35;
        if ( v35 < 0 )
        {
          WdLogSingleEntry3(2LL, v35, this, this[8]);
          WdLogGlobalForLineNumber = 3327;
          DxgkLogCodePointPacket(0x3Fu, 7u, v3, v7, 0LL);
          v7 = 0;
        }
        v16 = 8;
        goto LABEL_37;
      }
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      v26[3] = v25;
      v26[4] = this;
      v26[5] = this[8];
      WdLogGlobalForLineNumber = 3267;
    }
    v27 = CCD_STORE::ForTopology(
            (const struct CCD_SET_STRING_ID *)this,
            (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))anonymous_namespace_::_SaveTopologySetCallback,
            this,
            1);
    v7 = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry3(2LL, v27, this, this[8]);
      WdLogGlobalForLineNumber = 3279;
      DxgkLogCodePointPacket(0x3Fu, 5u, v3, v7, 0LL);
      goto LABEL_38;
    }
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1360) )
    {
      v28 = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v37);
      v29 = this[8];
      v36 = *v28;
      LogCddDatabaseAccessPacket(0, v7, v29, &v36, 0);
    }
    goto LABEL_31;
  }
  WdLogSingleEntry3(2LL, v6, this, this[8]);
  WdLogGlobalForLineNumber = 3178;
  DxgkLogCodePointPacket(0x3Fu, 1u, v3, v7, 0LL);
LABEL_38:
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v37);
  return v7;
}
