/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140326E38
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D3608 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x140326D50 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  __int64 v4; // r9
  int v5; // eax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ(this);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 8) = 3;
  v5 = PushThreadGuardedObject((char *)this + 72, this, XFERDCOBJ::ThreadCleanup, v4);
  *((_DWORD *)this + 26) = v5;
  if ( v5 )
    XDCOBJ::vLock(this, a2);
  if ( *(_QWORD *)this && *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
  {
    v7[2] = 0;
    v7[1] = 1;
    v7[0] = 51368611;
    RtlLogUnexpectedCodepath(v7);
    if ( *(_QWORD *)this )
      XDCOBJ::vUnlockFast(this);
    *(_QWORD *)this = 0LL;
    PopThreadGuardedObject((char *)this + 72);
    *((_DWORD *)this + 26) = 0;
  }
  return this;
}
