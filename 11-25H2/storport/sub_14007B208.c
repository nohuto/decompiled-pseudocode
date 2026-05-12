/*
 * XREFs of sub_14007B208 @ 0x14007B208
 * Callers:
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_14007B208(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v7; // ebx
  __int64 v8; // rax

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  switch ( a2 )
  {
    case 2:
      goto LABEL_13;
    case 23:
      v4 = 96;
      break;
    case 37:
      v4 = 98;
      break;
    case 38:
    case 39:
    case 42:
    case 43:
LABEL_13:
      v7 = 152;
      goto LABEL_14;
    case 45:
      v4 = 69;
      break;
    default:
      return v2;
  }
  v3 = 1;
  v7 = 176;
  v5 = 16;
LABEL_14:
  v8 = sub_1400143E0(64LL, v7, 1918067026LL, a1);
  v2 = v8;
  if ( v8 )
  {
    *(_WORD *)v8 = 8;
    *(_BYTE *)(v8 + 2) = 40;
    *(_DWORD *)(v8 + 8) = 1397899864;
    *(_DWORD *)(v8 + 12) = 1;
    *(_DWORD *)(v8 + 16) = v7;
    *(_DWORD *)(v8 + 20) = a2;
    *(_WORD *)(v8 + 36) = 2;
    *(_DWORD *)(v8 + 52) = 128;
    *(_DWORD *)(v8 + 56) = v3;
    *(_WORD *)(v8 + 128) = 2;
    *(_DWORD *)(v8 + 132) = 16;
    if ( v3 )
    {
      *(_DWORD *)(v8 + 120) = 152;
      *(_DWORD *)(v8 + 152) = v4;
      *(_DWORD *)(v8 + 156) = v5;
    }
  }
  return v2;
}
