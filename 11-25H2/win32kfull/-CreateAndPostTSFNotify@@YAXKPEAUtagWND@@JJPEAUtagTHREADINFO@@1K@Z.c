/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14026936C
 * Callers:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x14022BAC0 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DestroyNotify @ 0x1400CA3C0 (DestroyNotify.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x14015004C (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
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
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  if ( *((_QWORD *)a5 + 59) )
  {
    if ( a5 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v13, v12) + 18648) )
    {
      Notify = CreateNotify(0LL, v10, a2, a3, a4, a6, a7, 1u);
      if ( Notify )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(a5, *((struct tagQ **)a5 + 59), 0xCu, 0LL, 0, 0LL, (__int64)Notify, 0LL) )
          DestroyNotify(Notify, v15);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
      }
    }
  }
}
