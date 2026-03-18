/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401AE044
 * Callers:
 *     GreGetHwndUpdateIds @ 0x1403450D8 (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x140345514 (GreSetHwndPresentFlags.c)
 * Callees:
 *     <none>
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, void *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // rbp
  struct W32_PUSH_LOCK *v6; // rbx
  _QWORD *v7; // rax
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    Buffer[1] = 0LL;
    a3 = 0LL;
    Buffer[0] = a2;
    v5 = Gre::Base::Globals(this);
    v6 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v5 + 28) + 72LL);
    if ( *((_QWORD *)v5 + 28) != -72LL )
      GreAcquirePushLockExclusive(v6);
    v7 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v5 + 28), Buffer);
    if ( v7 )
      a3 = (void *)v7[1];
    if ( v6 )
      GreReleasePushLockExclusive(v6);
  }
  if ( a3 )
  {
    v8 = Gre::Base::Globals(this);
    LOBYTE(v9) = 15;
    *(_QWORD *)this = HmgShareLock(v8, a3, v9, 0LL);
  }
  return this;
}
