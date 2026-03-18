/*
 * XREFs of ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x14020E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x140210728 (-VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

char __fastcall DXGVAILOBJECT::NotifyVailSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  int v3; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  DXGSESSIONDATA *SessionData; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v12; // [rsp+58h] [rbp-20h]

  v3 = 0;
  if ( a2 )
    return 1;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 123),
              a3,
              (struct _KPROCESS **)&Object) >= 0 )
  {
    v12 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
    v7 = DXGGLOBAL::GetGlobal();
    SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)v7 + 123));
    LOBYTE(v3) = a1 != 0;
    DXGSESSIONDATA::VailSendWnfToDwm(SessionData, v3);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    ObfDereferenceObject(Object);
  }
  return 0;
}
