/*
 * XREFs of NtUserSetInteractiveCtrlRotationAngle @ 0x14029F400
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402E0B0C (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 */

__int64 __fastcall NtUserSetInteractiveCtrlRotationAngle(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v8; // rdx
  struct InteractiveControlManager *v9; // rax
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v12, 1LL);
  v8 = a2 - 1;
  v13 = a3;
  if ( (unsigned int)v8 > 7 )
    a2 = 3;
  v9 = InteractiveControlManager::Instance(3LL, v8);
  InteractiveControlManager::SetDeviceComponentResolution(v9, a1, a2, a4, &v13);
  UserSessionSwitchLeaveCrit(v10);
  return 1LL;
}
