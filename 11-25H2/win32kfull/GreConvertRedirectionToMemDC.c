/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x140333098
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1401DB604 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  if ( v6[0] )
  {
    if ( !*(_DWORD *)(v6[0] + 32LL) )
    {
      v4 = *(_QWORD *)(v6[0] + 48LL);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 2112) & 0x400) != 0 )
        {
          *(_DWORD *)(v6[0] + 36LL) &= ~0x4000u;
          v3 = 1;
          *(_DWORD *)(v6[0] + 36LL) &= ~1u;
          *(_DWORD *)(v6[0] + 32LL) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v6[0] + 496LL) + 112LL) &= ~0x800u;
        }
      }
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v6);
  return v3;
}
