/*
 * XREFs of EditionPrepareHidForInputThreadMigration @ 0x14027C330
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140217664 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1402286D8 (MasterInputThreadPrepareForRitTakeover.c)
 *     EditionDeactivateMitInput @ 0x140247350 (EditionDeactivateMitInput.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x140214F78 (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x14027C45C (Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EditionPrepareHidForInputThreadMigration()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    ResetPointerDevices(0LL, v0);
    *(_QWORD *)(W32GetUserSessionState(v2, v1) + 18824) = 0LL;
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(UserSessionState + 3256));
    v8 = W32GetUserSessionState(v7, v6);
    CTouchProcessor::GenerateDeparturesForActivePointers(*(CTouchProcessor **)(v8 + 3256), 0LL);
  }
  else
  {
    ResetPointerDevices(0LL, v0);
    if ( (unsigned int)Feature_PointerMsgDataBugcheck__private_IsEnabledDeviceUsageNoInline()
      && *(_DWORD *)(W32GetUserSessionState(v12, v11) + 18744)
      && *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18824) )
    {
      v13 = W32GetUserSessionState(v12, v11);
      CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(v13 + 3256));
      *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18824) = 0LL;
    }
    v16 = W32GetUserSessionState(v12, v11);
    CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v16 + 3256));
  }
  *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19272) = 1;
  return CleanupSensorExplicitly(2LL);
}
