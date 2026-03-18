/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x14008DD70
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct CInputSpaceRegion *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r9d
  _QWORD **v16; // r13
  __int64 UserSessionState; // r14
  _QWORD *i; // r15
  _DWORD *v19; // rdi
  int v20; // ecx
  struct _ERESOURCE *v21; // rcx
  unsigned int v23; // [rsp+6Ch] [rbp+14h]
  unsigned int v24; // [rsp+80h] [rbp+28h]

  if ( !CInputConfig::LockExclusivelyHeld() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 623LL);
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  v13 = 0;
  v14 = *((_DWORD *)a2 + 6);
  v15 = *(_DWORD *)a4;
  *a5 = 0LL;
  v23 = HIDWORD(v12);
  v24 = v14;
  while ( v13 < v15 )
  {
    v8 = *((_QWORD *)a4 + 1);
    v9 = 216LL * v13;
    if ( *(_DWORD *)(v9 + v8 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v9 + v8 + 120) == *((_DWORD *)a2 + 30) )
    {
      v12 = *(_QWORD *)(v9 + v8 + 16);
      v23 = HIDWORD(v12);
      v24 = *(_DWORD *)(v9 + v8 + 24);
      break;
    }
    ++v13;
  }
  v16 = (_QWORD **)((char *)a3 + 1456);
  UserSessionState = W32GetUserSessionState(v9, v8, v13);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  for ( i = *v16; ; i = (_QWORD *)*i )
  {
    v19 = 0LL;
    if ( i != v16 )
      v19 = i + 2;
    if ( !v19 )
      break;
    if ( !CInputConfig::LockExclusivelyHeld() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 139LL);
    v20 = v19[6];
    if ( *((_DWORD *)a2 + 4) == v20 && *((_DWORD *)a2 + 5) == v19[7] && *((_DWORD *)a2 + 6) == v19[8] )
    {
      v21 = *(struct _ERESOURCE **)(UserSessionState + 18688);
      *a5 = (struct CInputSpaceRegion *)v19;
      ExReleaseResourceAndLeaveCriticalRegion(v21);
      return 1;
    }
    if ( (_DWORD)v12 == v20 && __PAIR64__(v24, v23) == *(_QWORD *)(v19 + 7) )
      v11 = (struct CInputSpaceRegion *)v19;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  if ( v11 )
  {
    *a5 = v11;
    return 1;
  }
  return 0;
}
