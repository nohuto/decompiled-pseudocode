/*
 * XREFs of ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x140077804
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 */

__int64 __fastcall BLTRECORD::Src(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  char *v5; // r10
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v9; // eax

  *((_DWORD *)this + 39) = a3;
  v5 = (char *)this + 152;
  *((_DWORD *)this + 40) = a2 + a4;
  *((_DWORD *)this + 41) = a5 + a3;
  *((_DWORD *)this + 38) = a2;
  v6 = *((_QWORD *)this + 1);
  if ( (*(_BYTE *)(v6 + 32) & 0x43) == 0x43 )
    return 1;
  v9 = bCvtPts1(v6, v5);
  v7 = 0;
  if ( v9 )
    return 1;
  return v7;
}
