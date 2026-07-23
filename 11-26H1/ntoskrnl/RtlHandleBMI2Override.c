/*
 * XREFs of RtlHandleBMI2Override @ 0x140C051A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlHandleBMI2Override(__int64 a1, _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 4) == 1 && *(_DWORD *)(a1 + 8) < 0x19u )
    *a2 = 0;
}
