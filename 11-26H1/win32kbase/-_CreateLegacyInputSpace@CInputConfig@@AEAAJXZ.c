/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C
 * Callers:
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x14008055C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x14008F0A8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x14008D4C4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x14008D9F4 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x14008DD70 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14008E9DC (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14008F0FC (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140148E9C (DrvGetAdapterInfoFromGraphicsDevice.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140175474 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int *v5; // rsi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _QWORD *v9; // rcx
  int v10; // r8d
  __int64 i; // rbx
  __int64 v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int16 v16; // cx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v24; // rdi
  CInputConfig *v25; // rcx
  struct CInputSpaceRegion *v26; // rcx
  __int128 *v27; // r8
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  struct CInputSpaceRegion *v42; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+40h] [rbp-C8h]
  __int128 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v46; // [rsp+68h] [rbp-A0h]
  __int16 v47; // [rsp+6Ch] [rbp-9Ch]
  __int16 v48; // [rsp+6Eh] [rbp-9Ah]
  _BYTE v49[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v50[688]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v51; // [rsp+328h] [rbp+220h] BYREF
  int v52; // [rsp+330h] [rbp+228h]
  __int64 v53; // [rsp+338h] [rbp+230h]
  _BYTE v54[712]; // [rsp+340h] [rbp+238h] BYREF
  _BYTE v55[716]; // [rsp+608h] [rbp+500h] BYREF
  int v56; // [rsp+8D4h] [rbp+7CCh]
  _QWORD v57[2]; // [rsp+8D8h] [rbp+7D0h] BYREF

  if ( !CInputConfig::LockExclusivelyHeld() )
  {
    LODWORD(v42) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 496LL);
  }
  v53 = 0LL;
  v42 = 0LL;
  v43 = 0;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)v54);
  CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)v55);
  v55[712] = 1;
  v56 = 0;
  v57[1] = v57;
  v52 = 0;
  v57[0] = v57;
  v51 = 0xFFFFFFFE00000000uLL;
  v44 = 0LL;
  v5 = RIMGetQDCActivePathsData((unsigned int *)&v44, v2, v3, v4);
  v9 = *(_QWORD **)(W32GetUserSessionState(v7, v6, v8) + 56968);
  if ( *(_DWORD *)*v9 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)v9, *v9, v10) + 56968) + 104LL);
          i;
          i = *(_QWORD *)(i + 56) )
    {
      v12 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v45);
        v45 = *(_OWORD *)(v12 + 28);
        v46 = i == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 56968) + 96LL);
        v16 = *(_WORD *)(*(_QWORD *)(i + 40) + 60LL);
        v48 = *(_WORD *)(i + 72);
        v17 = *(_QWORD *)(i + 88);
        v47 = v16;
        if ( v17 )
        {
          if ( (*(_DWORD *)(v17 + 40) & 0x20000) == 0 )
          {
            v18 = *(_QWORD *)(v17 + 2568);
            if ( v18 )
            {
              if ( v18 != -4 && (*(_DWORD *)(v18 + 160) & 0x800000) != 0 )
                DrvGetAdapterInfoFromGraphicsDevice(v18, v49, v50);
            }
          }
        }
        v20 = CInputSpace::AddRegion((CInputSpace *)&v51, (const struct CInputSpaceRegion *)&v45, 0LL);
        if ( v20 < 0 )
          goto LABEL_26;
      }
    }
  }
  if ( v5 )
  {
    for ( j = 0; j < *v5; ++j )
    {
      v24 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*((_QWORD *)v5 + 1) + 216LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v24);
      v42 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v25,
             v24,
             (const struct CInputSpace *)&v51,
             (const struct tagQDC_DATA *)v5,
             &v42) )
      {
        v26 = v42;
        if ( *((_BYTE *)v42 + 488) )
        {
          v27 = &v45;
          v28 = 5LL;
          do
          {
            v29 = *(_OWORD *)v26;
            v30 = *((_OWORD *)v26 + 1);
            v26 = (struct CInputSpaceRegion *)((char *)v26 + 128);
            *v27 = v29;
            v31 = *((_OWORD *)v26 - 6);
            v27[1] = v30;
            v32 = *((_OWORD *)v26 - 5);
            v27[2] = v31;
            v33 = *((_OWORD *)v26 - 4);
            v27[3] = v32;
            v34 = *((_OWORD *)v26 - 3);
            v27[4] = v33;
            v35 = *((_OWORD *)v26 - 2);
            v27[5] = v34;
            v36 = *((_OWORD *)v26 - 1);
            v27[6] = v35;
            v27 += 8;
            *(v27 - 1) = v36;
            --v28;
          }
          while ( v28 );
          v37 = *((_QWORD *)v26 + 8);
          v38 = *((_OWORD *)v26 + 1);
          *v27 = *(_OWORD *)v26;
          v39 = *((_OWORD *)v26 + 2);
          v27[1] = v38;
          v40 = *((_OWORD *)v26 + 3);
          v27[2] = v39;
          v27[3] = v40;
          *((_QWORD *)v27 + 8) = v37;
          CInputSpace::AddRegion((CInputSpace *)&v51, (const struct CInputSpaceRegion *)&v45, &v42);
          v26 = v42;
        }
        if ( v26 )
          CInputSpaceRegion::MapToDisplayPath(v26, v24);
      }
    }
  }
  v20 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v51);
LABEL_26:
  RIMFreeQDCActivePathsData((__int64)v5, v19, v21, v22);
  if ( v20 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v51);
  return 0LL;
}
