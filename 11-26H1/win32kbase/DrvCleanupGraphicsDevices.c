/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1401F654C
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x140008524 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14002CB60 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14002CC70 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 */

__int64 __fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  __int64 v3; // r14
  unsigned int v4; // r15d
  unsigned int v5; // edx
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // r8d
  _QWORD *i; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = (*(_QWORD *)(v3 + 1184) != *(_QWORD *)(v3 + 1280)) + 1;
  v5 = (*(_QWORD *)(v3 + 1184) != *(_QWORD *)(v3 + 1280)) + 3;
  v16 = v5;
  do
  {
    v6 = 0LL;
    v7 = *(_QWORD *)(v3 + 8LL * !(v4 & 1) + 1272);
    *(_QWORD *)(v3 + 1184) = v7;
    *(_QWORD *)(v3 + 1192) = *(_QWORD *)(v3 + 8LL * !(v4 & 1) + 1288);
    if ( v7 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 128);
        if ( v1 && v1 == *(_QWORD *)(v7 + 144) )
        {
          GreAcquireSemaphore<19,>((struct _ERESOURCE **)v3, v5, v2);
          for ( i = *(_QWORD **)(v3 + 3952); i; i = (_QWORD *)*i )
          {
            if ( i[321] == v7 )
              i[321] = 0LL;
          }
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *(_QWORD *)v3,
            v9);
          if ( v7 == *(_QWORD *)(v3 + 1184) )
          {
            *(_QWORD *)(v3 + 1184) = v8;
          }
          else if ( v6 )
          {
            *(_QWORD *)(v6 + 128) = v8;
          }
          if ( v7 == *(_QWORD *)(v3 + 1192) )
            *(_QWORD *)(v3 + 1192) = v6;
          if ( (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 3728LL);
            OPM::CMutex::Lock((void **)(v12 + 56));
            OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
              v12 + 24,
              (_DWORD *)(v7 + 240),
              v12 + 48);
            OPM::CMutex::Unlock((struct _KMUTANT **)(v12 + 56));
            DrvRemoveAdapterLuid(*(struct _LUID *)(v7 + 240));
            v1 = a1;
          }
          DrvCleanupOneGraphicsDevice((PVOID)v7);
          v7 = v6;
        }
        v6 = v7;
        v7 = v8;
      }
      while ( v8 );
      v5 = v16;
    }
    result = *(_QWORD *)(v3 + 1184);
    v14 = *(_QWORD *)(v3 + 1192);
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 1272) = result;
      *(_QWORD *)(v3 + 1288) = v14;
    }
    else
    {
      *(_QWORD *)(v3 + 1280) = result;
      *(_QWORD *)(v3 + 1296) = v14;
    }
    ++v4;
  }
  while ( v4 < v5 );
  return result;
}
