/*
 * XREFs of ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140178DF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019EA2C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall GrepDeleteDCOBJ(DC **this, unsigned int a2, int *a3)
{
  int v3; // esi
  DC *v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax

  v3 = 0;
  v5 = *this;
  v6 = a2;
  if ( (a2 & 0x2000000) != 0 )
    v6 = *((_DWORD *)v5 + 9) & 0x3C00000;
  else
    *((_DWORD *)v5 + 9) |= a2 & 0x3C00000;
  v7 = *((_DWORD *)*this + 9);
  if ( (v7 & 8) != 0 )
  {
    if ( (v6 & 0x400000) != 0 )
      *((_DWORD *)*this + 9) = v7 & 0xFFFFFFF7;
    else
      v3 = 1;
  }
  *a3 = v3;
  if ( (v6 & 0x2000000) == 0 || (unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)*this, a2) )
  {
    if ( v3 )
      XDCOBJ::bCleanDC(this, HIBYTE(v6) & 1);
    else
      XDCOBJ::vDelete((XDCOBJ *)this, v6);
    return 1LL;
  }
  else
  {
    EngSetLastError(0x139Fu);
    return 0LL;
  }
}
