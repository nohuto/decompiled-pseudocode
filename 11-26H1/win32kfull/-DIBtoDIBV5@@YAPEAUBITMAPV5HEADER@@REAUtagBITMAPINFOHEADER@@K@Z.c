/*
 * XREFs of ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402CE528
 * Callers:
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402CE768 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct BITMAPV5HEADER *__fastcall DIBtoDIBV5(struct tagBITMAPINFOHEADER *volatile a1)
{
  unsigned __int64 v1; // r8
  __int64 biHeight; // rdx
  size_t v3; // rdi
  unsigned int v4; // r9d
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  size_t v7; // r14
  _OWORD *v8; // rax
  _OWORD *v9; // rbx

  if ( a1->biSize != 40 )
    return 0LL;
  v1 = a1->biBitCount * (unsigned __int64)(unsigned int)a1->biWidth;
  if ( v1 > 0xFFFFFFFF )
    return 0LL;
  biHeight = (unsigned int)-a1->biHeight;
  if ( a1->biHeight > 0 )
    biHeight = (unsigned int)a1->biHeight;
  if ( biHeight * (unsigned __int64)(((unsigned int)(v1 + 31) >> 3) & 0x1FFFFFFC) > 0xFFFFFFFF )
    return 0LL;
  v3 = SizeOfDibColorTable(a1);
  v6 = v4 + 124;
  if ( v4 + 124 < v4 )
    return 0LL;
  if ( v6 + (unsigned int)v3 < (unsigned int)v3 )
    return 0LL;
  v7 = v4;
  if ( v5 < v4 + v3 + 40 )
    return 0LL;
  v8 = (_OWORD *)Win32AllocPoolZInit(v6 + (unsigned int)v3, 1650684757LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  memset_0(v8, 0, 0x7CuLL);
  *v9 = *(_OWORD *)&a1->biSize;
  v9[1] = *(_OWORD *)&a1->biCompression;
  *((_QWORD *)v9 + 4) = *(_QWORD *)&a1->biClrUsed;
  *(_DWORD *)v9 = 124;
  *((_DWORD *)v9 + 14) = 1934772034;
  *((_DWORD *)v9 + 27) = 4;
  if ( a1->biCompression == 3 && (a1->biBitCount == 16 || a1->biBitCount == 32) )
  {
    *((_DWORD *)v9 + 10) = a1[1].biSize;
    *((_DWORD *)v9 + 11) = a1[1].biWidth;
    *((_DWORD *)v9 + 12) = a1[1].biHeight;
  }
  if ( (_DWORD)v3 )
    memmove((char *)v9 + 124, &a1[1], v3);
  memmove((char *)v9 + v3 + 124, (char *)&a1[1] + v3, v7);
  return (struct BITMAPV5HEADER *)v9;
}
