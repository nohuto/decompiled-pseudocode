/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1401700F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MaybeEnterLeaveCrit@@QEAA@XZ @ 0x140047520 (--1MaybeEnterLeaveCrit@@QEAA@XZ.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x14004D980 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14006BDEC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     GreIsDisconnectDeviceAttached @ 0x14008E108 (GreIsDisconnectDeviceAttached.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DrvShouldTranslateQdcDatabaseToActive @ 0x1400E8DE4 (DrvShouldTranslateQdcDatabaseToActive.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400EC6F8 (_QdcSdcTranslateStatusDefault.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int DisplayConfigBufferSizesAndLeaveUserCrit; // eax
  _BYTE v12[32]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+20h] BYREF

  v13 = a1;
  v3 = 0;
  v15 = 0;
  v14 = 1;
  EnterSharedCrit(1u, 1u);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld((__int64)v12, v4);
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v5) + 32) )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection(MmUserProbeAddress, (__int64)v6)
       || !(unsigned int)UserRemoteConnectedSessionUsingXddm(v8, v7))
      && !(unsigned int)GreIsDisconnectDeviceAttached(v8) )
    {
      if ( !v12[0] || !v12[8] )
      {
        v3 = -1073741637;
        goto LABEL_13;
      }
      DrvShouldTranslateQdcDatabaseToActive(v9, &v13);
      v14 = 0;
      DisplayConfigBufferSizesAndLeaveUserCrit = DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(v13, &v15);
      v3 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizesAndLeaveUserCrit);
    }
    *a2 = v15;
  }
  else
  {
    v3 = -1073741823;
  }
LABEL_13:
  MaybeEnterLeaveCrit::~MaybeEnterLeaveCrit((MaybeEnterLeaveCrit *)&v14);
  return v3;
}
