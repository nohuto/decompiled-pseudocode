/*
 * XREFs of ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x140077378
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 * Callees:
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 */

__int64 __fastcall BLTRECORD::Trg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  char *v5; // r10
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v9; // eax

  *((_DWORD *)this + 33) = a3;
  v5 = (char *)this + 128;
  *((_DWORD *)this + 34) = a2 + a4;
  *((_DWORD *)this + 35) = a5 + a3;
  *((_DWORD *)this + 32) = a2;
  v6 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v6 + 32) & 0x43) == 0x43 )
    return 1;
  v9 = bCvtPts1(v6, v5);
  v7 = 0;
  if ( v9 )
    return 1;
  return v7;
}
