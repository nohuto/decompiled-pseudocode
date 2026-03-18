/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14028CB58
 * Callers:
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x140044B4C (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     DestroyNotify @ 0x14013BFF0 (DestroyNotify.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x14016F020 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall CreateAndPostTSFNotify(
        __int64 a1,
        struct tagWND *a2,
        int a3,
        int a4,
        struct tagTHREADINFO *a5,
        PETHREAD *a6,
        unsigned int a7)
{
  unsigned int v10; // r14d
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagNOTIFY *Notify; // rbx
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+40h] [rbp-18h] BYREF

  v10 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  if ( *((_QWORD *)a5 + 58) )
  {
    if ( a5 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v13, v12) + 18696) )
    {
      Notify = CreateNotify(0LL, v10, a2, a3, a4, a6, a7, 1u);
      if ( Notify )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(a5, *((struct tagQ **)a5 + 58), 0xCu, 0LL, 0, 0LL, (__int64)Notify, 0LL) )
          DestroyNotify(Notify, v15);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
      }
    }
  }
}
