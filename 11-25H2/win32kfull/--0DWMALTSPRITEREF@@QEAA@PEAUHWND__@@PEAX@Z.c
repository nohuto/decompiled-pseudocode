/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140179800
 * Callers:
 *     GreGetHwndUpdateIds @ 0x140322ED8 (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x1403232F8 (GreSetHwndPresentFlags.c)
 * Callees:
 *     <none>
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, void *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // rbp
  struct W32_PUSH_LOCK *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    Buffer[1] = 0LL;
    a3 = 0LL;
    Buffer[0] = a2;
    v5 = Gre::Base::Globals(this);
    v6 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v5 + 17) + 72LL);
    if ( *((_QWORD *)v5 + 17) != -72LL )
      GreAcquirePushLockExclusive(v6);
    v7 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v5 + 17), Buffer);
    if ( v7 )
      a3 = (void *)v7[1];
    if ( v6 )
      GreReleasePushLockExclusive(v6);
  }
  if ( a3 )
  {
    Gre::Base::Globals(this);
    LOBYTE(v8) = 15;
    *(_QWORD *)this = HmgShareLockCheck(a3, v8);
  }
  return this;
}
