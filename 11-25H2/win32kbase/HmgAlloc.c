/*
 * XREFs of HmgAlloc @ 0x140177200
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140178AA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140178B78 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 */

__int64 __fastcall HmgAlloc(__int64 a1)
{
  unsigned int v1; // esi
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return HmgAllocFast(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v1);
}
