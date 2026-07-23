/*
 * XREFs of XmLongJump @ 0x1404A0E10
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmLongJump(__int64 a1)
{
  int v2; // ecx

  if ( *(_BYTE *)(a1 + 138) )
    v2 = XmGetLongImmediate() + *(_DWORD *)(a1 + 20);
  else
    v2 = (unsigned __int16)(*(_WORD *)(a1 + 20) + XmGetWordImmediate());
  *(_DWORD *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
