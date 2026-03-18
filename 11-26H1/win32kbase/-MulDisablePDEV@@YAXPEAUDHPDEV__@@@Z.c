/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401F2850
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall MulDisablePDEV(HDEV **pv)
{
  HDEV *v1; // rbx
  void (__fastcall *v3)(HDEV *); // rax
  __int64 v4; // rcx
  __int64 SessionState; // rax
  HDEV *v6; // rbx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi

  v1 = pv[4];
  v3 = *(void (__fastcall **)(HDEV *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(pv) + 24) + 24LL);
  if ( v3 )
    v3(v1);
  SessionState = W32GetSessionState(v4);
  v6 = *pv;
  v7 = *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88);
  while ( v6 )
  {
    PDEVOBJ::vUnreferencePdev(v6 + 7, v7);
    v6 = (HDEV *)*v6;
  }
  EngFreeMem(pv);
}
