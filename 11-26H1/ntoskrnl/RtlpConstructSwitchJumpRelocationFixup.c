/*
 * XREFs of RtlpConstructSwitchJumpRelocationFixup @ 0x1404FE32C
 * Callers:
 *     RtlApplySwitchJumpRelocationToPage @ 0x1404FE258 (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToImage @ 0x1407254F0 (RtlApplySwitchJumpRelocationToImage.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpConstructSwitchJumpRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // r11
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx

  v6 = 0LL;
  *(_WORD *)a6 = 0;
  *(_QWORD *)(a6 + 2) = 0xCCCCCCCCCCCCCCCCuLL;
  *(_DWORD *)(a6 + 10) = -858993460;
  v8 = (unsigned __int16)*a4;
  if ( a5 )
  {
    v9 = *(_DWORD *)(a3 + 4 * (v8 >> 12)) - (a1 + 5);
    v10 = *(_DWORD *)(a2 + 48);
    *(_WORD *)a6 = 63;
    v11 = v9 + v10;
    *(_WORD *)(a6 + 3) = v11;
    v12 = HIWORD(v11);
    *(_BYTE *)(a6 + 6) = HIBYTE(v11);
    *(_BYTE *)(a6 + 2) = -24;
    *(_BYTE *)(a6 + 5) = BYTE2(v11);
    *(_BYTE *)(a6 + 7) = -52;
  }
  else
  {
    v13 = 0LL;
    if ( (v8 & 0xF000) >= 0x8000 )
    {
      v6 = 1LL;
      *(_BYTE *)(a6 + 2) = 65;
      v13 = 1LL;
    }
    *(_BYTE *)(v13 + a6 + 2) = -1;
    LOWORD(v12) = *a4 >> 12;
    LOBYTE(v12) = v12 & 7 | 0xE0;
    *(_BYTE *)(v6 + a6 + 3) = v12;
    *(_WORD *)a6 = 63;
  }
  return v12;
}
