/*
 * XREFs of GreGetRgnBox @ 0x140013370
 * Callers:
 *     NtGdiGetRgnBox @ 0x1401009B0 (NtGdiGetRgnBox.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  const struct REGION_CORE *v3; // rdx
  unsigned int v4; // edi
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1, 0);
  if ( a2 && v6[0] )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 52LL);
    v4 = RGNOBJ::iComplexity((RGNOBJ *)v6, v3);
    if ( v4 == 1 )
    {
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  return v4;
}
