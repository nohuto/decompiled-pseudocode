/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400A4CE8
 * Callers:
 *     GreMakeBitmapStock @ 0x1400A4690 (GreMakeBitmapStock.c)
 *     GreMakeBitmapNonStock @ 0x1400A4B20 (GreMakeBitmapNonStock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2)
{
  __int16 v2; // edi^2

  v2 = WORD1(a2);
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 0LL);
  if ( *((_DWORD *)this + 2) && (*(_BYTE *)(*(_QWORD *)this + 14LL) != 5 || *(_WORD *)(*(_QWORD *)this + 12LL) != v2) )
  {
    *((_BYTE *)this + 13) = 1;
    HANDLELOCK::vUnlock(this);
  }
  return *((unsigned int *)this + 2);
}
