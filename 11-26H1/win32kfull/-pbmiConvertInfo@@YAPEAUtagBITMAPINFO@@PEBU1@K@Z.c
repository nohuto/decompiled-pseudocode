/*
 * XREFs of ?pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z @ 0x14032A0E0
 * Callers:
 *     GreSetDIBits @ 0x140336C78 (GreSetDIBits.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

struct tagBITMAPINFO *__fastcall pbmiConvertInfo(const struct tagBITMAPINFO *a1, __int64 a2, __int64 a3)
{
  int biHeight_high; // edx
  int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  WORD *p_biPlanes; // r8
  _BYTE *v10; // rax
  char v11; // cl

  biHeight_high = HIWORD(a1->bmiHeader.biHeight);
  if ( biHeight_high == 1 )
  {
    v5 = 2;
  }
  else if ( HIWORD(a1->bmiHeader.biHeight) == 4 )
  {
    v5 = 16;
  }
  else if ( HIWORD(a1->bmiHeader.biHeight) == 8 )
  {
    v5 = 256;
  }
  else
  {
    v5 = 0;
    if ( (_WORD)biHeight_high != 16 && biHeight_high != 24 && biHeight_high != 32 )
      return 0LL;
  }
  v6 = PALLOCNOZ(4 * v5 + 40, 1886221383LL, a3);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 40;
  p_biPlanes = &a1->bmiHeader.biPlanes;
  *(_DWORD *)(v6 + 4) = LOWORD(a1->bmiHeader.biWidth);
  *(_DWORD *)(v6 + 8) = HIWORD(a1->bmiHeader.biWidth);
  *(_WORD *)(v6 + 12) = a1->bmiHeader.biHeight;
  *(_WORD *)(v6 + 14) = HIWORD(a1->bmiHeader.biHeight);
  v10 = (_BYTE *)(v6 + 40);
  v7[2] = 0LL;
  v7[3] = 0LL;
  for ( v7[4] = 0LL; v5; --v5 )
  {
    v10[2] = *((_BYTE *)p_biPlanes + 2);
    v10[1] = *((_BYTE *)p_biPlanes + 1);
    v11 = *(_BYTE *)p_biPlanes;
    p_biPlanes = (WORD *)((char *)p_biPlanes + 3);
    *v10 = v11;
    v10[3] = 0;
    v10 += 4;
  }
  return (struct tagBITMAPINFO *)v7;
}
