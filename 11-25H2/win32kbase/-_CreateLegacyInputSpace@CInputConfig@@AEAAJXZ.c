/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8
 * Callers:
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F819C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F8B7C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x140108A10 (DrvGetWDDMAdapterInfo.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14012FAE4 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14013493C (--0CInputSpace@@QEAA@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1401349E0 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140135068 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14014EDA8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1401F7918 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F832C (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rcx
  int v13; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v15; // rsi
  CInputConfig *v16; // rcx
  struct CInputSpaceRegion *v17; // rcx
  _OWORD *v18; // r8
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  struct CInputSpaceRegion *v33[3]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v34[3]; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v35; // [rsp+68h] [rbp-A0h]
  __int16 v36; // [rsp+6Ch] [rbp-9Ch]
  __int16 v37; // [rsp+6Eh] [rbp-9Ah]
  _BYTE v38[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v39[688]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+328h] [rbp+220h] BYREF
  int v41; // [rsp+330h] [rbp+228h]

  if ( !CInputConfig::LockExclusivelyHeld((__int64)this, a2) )
  {
    LODWORD(v33[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 496);
  }
  CInputSpace::CInputSpace((CInputSpace *)&v40, 1);
  v40 = 0xFFFFFFFE00000000uLL;
  *(_OWORD *)&v33[1] = 0LL;
  v41 = 0;
  v3 = RIMGetQDCActivePathsData((unsigned int *)&v33[1]);
  v6 = *(_QWORD **)(W32GetUserSessionState(v5, v4) + 56968);
  if ( *(_DWORD *)*v6 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, *v6) + 56968) + 112LL); i; i = *(_QWORD *)(i + 56) )
    {
      v8 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v8 + 24) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v34[1]);
        *(_OWORD *)&v34[1] = *(_OWORD *)(v8 + 28);
        v35 = i == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 104LL);
        v11 = *(_WORD *)(i + 72);
        v36 = *(_WORD *)(*(_QWORD *)(i + 40) + 60LL);
        v12 = *(_QWORD *)(i + 88);
        v37 = v11;
        DrvGetWDDMAdapterInfo(v12, 1, (__int64)v38, (__int64)v39);
        v13 = CInputSpace::AddRegion((CInputSpace *)&v40, (const struct CInputSpaceRegion *)&v34[1], 0LL);
        if ( v13 < 0 )
          goto LABEL_20;
      }
    }
  }
  if ( v3 )
  {
    for ( j = 0; j < *v3; ++j )
    {
      v15 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*((_QWORD *)v3 + 1) + 216LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v15);
      v33[0] = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v16,
             v15,
             (const struct CInputSpace *)&v40,
             (const struct tagQDC_DATA *)v3,
             v33) )
      {
        v17 = v33[0];
        if ( *((_BYTE *)v33[0] + 488) )
        {
          v18 = &v34[1];
          v19 = 5LL;
          do
          {
            v20 = *(_OWORD *)v17;
            v21 = *((_OWORD *)v17 + 1);
            v17 = (struct CInputSpaceRegion *)((char *)v17 + 128);
            *v18 = v20;
            v22 = *((_OWORD *)v17 - 6);
            v18[1] = v21;
            v23 = *((_OWORD *)v17 - 5);
            v18[2] = v22;
            v24 = *((_OWORD *)v17 - 4);
            v18[3] = v23;
            v25 = *((_OWORD *)v17 - 3);
            v18[4] = v24;
            v26 = *((_OWORD *)v17 - 2);
            v18[5] = v25;
            v27 = *((_OWORD *)v17 - 1);
            v18[6] = v26;
            v18 += 8;
            *(v18 - 1) = v27;
            --v19;
          }
          while ( v19 );
          v28 = *((_QWORD *)v17 + 8);
          v29 = *((_OWORD *)v17 + 1);
          *v18 = *(_OWORD *)v17;
          v30 = *((_OWORD *)v17 + 2);
          v18[1] = v29;
          v31 = *((_OWORD *)v17 + 3);
          v18[2] = v30;
          v18[3] = v31;
          *((_QWORD *)v18 + 8) = v28;
          CInputSpace::AddRegion((CInputSpace *)&v40, (const struct CInputSpaceRegion *)&v34[1], v33);
          v17 = v33[0];
        }
        if ( v17 )
          CInputSpaceRegion::MapToDisplayPath(v17, v15);
      }
    }
  }
  v13 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v40);
LABEL_20:
  RIMFreeQDCActivePathsData((__int64)v3);
  if ( v13 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v40);
  return 0LL;
}
