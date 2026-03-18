/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x140326CD8
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this)
{
  unsigned int i; // r10d
  int v3; // r10d
  __int64 v4; // r11
  struct PFF *result; // rax
  struct PFF *v6; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 24LL); i = v3 + 1 )
  {
    PFT::PffBucket(*(_QWORD *)this, (PffIterator *)&v6, i);
    while ( 1 )
    {
      result = v6;
      if ( !v6 )
        break;
      if ( v4 == *((_QWORD *)v6 + 11) )
        return result;
      PffIterator::operator++((__int64 *)&v6);
    }
  }
  return 0LL;
}
