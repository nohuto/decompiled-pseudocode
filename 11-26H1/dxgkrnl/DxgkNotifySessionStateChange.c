/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1403FDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z @ 0x1402030EC (-InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x140330590 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403FDED8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiSessionCreateCallback @ 0x1403FE19C (DpiSessionCreateCallback.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Session; // ebp
  DXGSESSIONMGR *v3; // r14
  __int64 HostSilo; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  struct _EJOB *v14; // rdx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall *v17)(_QWORD); // [rsp+60h] [rbp+18h] BYREF

  Session = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  HostSilo = PsGetHostSilo();
  v5 = 1;
  v7 = PsAttachSiloToCurrentThread(HostSilo);
  if ( a1 )
  {
    v5 = 2;
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(v3, v6, v8, v9);
    }
    else
    {
      v5 = 3;
      if ( a1 != 2 )
      {
        if ( a1 == 3 )
        {
          v5 = 7;
        }
        else
        {
          v5 = 0;
          if ( a1 == 4 )
            v5 = 8;
        }
      }
    }
  }
  else
  {
    Session = DXGSESSIONMGR::CreateSession(v3);
    if ( Session >= 0 )
      Session = DpiSessionCreateCallback();
  }
  v16 = 0LL;
  DxgkLogCodePointPacket(0x6Du, v5, 0, 0, 0LL);
  if ( v7 )
  {
    v17 = (__int64 (__fastcall *)(_QWORD))PsDetachSiloFromCurrentThread;
    v16 = v7;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(&v17, &v16);
  }
  if ( Session >= 0 && !a1 )
  {
    SessionData = DXGSESSIONMGR::GetSessionData(v3, v10, v11, v12);
    if ( *((_BYTE *)SessionData + 18502) )
      DXGSESSIONDATA::InitializeContainerData(SessionData, v14);
  }
  return (unsigned int)Session;
}
