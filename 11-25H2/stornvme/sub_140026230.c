/*
 * XREFs of sub_140026230 @ 0x140026230
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 */

__int16 __fastcall sub_140026230(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r9

  v2 = sub_140005000(a2);
  v6 = v2;
  if ( v4 )
  {
    LOWORD(v2) = *(_WORD *)(v4 + 14) & 0x1FE;
    switch ( (_WORD)v2 )
    {
      case 0x3A:
        *(_BYTE *)(v3 + 3) = 5;
        break;
      case 0x38:
        *(_BYTE *)(v3 + 3) = 0;
        *(_BYTE *)(v6 + 4225) &= ~8u;
        *(_DWORD *)(v5 + 4056) |= 1u;
        *(_QWORD *)(v5 + 4048) = v3;
        LOWORD(v2) = sub_14002510C(v5, (__int64)sub_140024E80, 0LL, v6);
        return v2;
      case 0:
        *(_QWORD *)(v5 + 4048) = v3;
        *(_BYTE *)(v3 + 3) = 0;
        *(_BYTE *)(v6 + 4225) &= ~8u;
        return v2;
      default:
        *(_BYTE *)(v3 + 3) = 4;
        break;
    }
    *(_BYTE *)(v6 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(v3 + 3) = 4;
    *(_BYTE *)(v2 + 4225) |= 8u;
  }
  return v2;
}
