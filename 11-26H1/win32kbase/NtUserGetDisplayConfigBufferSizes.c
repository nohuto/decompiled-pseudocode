/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1400FA930
 * Callers:
 *     <none>
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x14003D0E4 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     GreIsDisconnectDeviceAttached @ 0x1400587A4 (GreIsDisconnectDeviceAttached.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x1400FB568 (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400FC0B4 (_QdcSdcTranslateStatusDefault.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, volatile void *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // r14
  unsigned int DisplayConfigBufferSizesAndLeaveUserCrit; // eax
  __int64 DxgkWin32kInterface; // rax
  _BYTE v18[40]; // [rsp+40h] [rbp-28h] BYREF
  char v19; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v20 = 0;
  v19 = 1;
  EnterSharedCrit(1LL, 1LL, a3, a4);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld(v18);
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    ProbeForWrite(a2, 4uLL, 1u);
    if ( (!(unsigned int)UserIsRemoteAndNotDisconnectConnection(v9, v8, v10, v11)
       || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached(v12) )
    {
      if ( !v18[0] || !v18[8] )
      {
        v6 = -1073741637;
        goto LABEL_3;
      }
      v15 = 0;
      if ( (a1 & 7) == 4 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14, v13);
        v15 = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
      }
      if ( v15 )
        a1 = a1 & 0xEFFFFFF8 | 0x10000002;
      v19 = 0;
      DisplayConfigBufferSizesAndLeaveUserCrit = DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(a1, &v20);
      v6 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizesAndLeaveUserCrit);
    }
    RtlWriteULongToUser(a2, v20);
  }
  else
  {
    v6 = -1073741823;
  }
LABEL_3:
  MaybeEnterLeaveCritSharedOnly::~MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)&v19);
  return v6;
}
