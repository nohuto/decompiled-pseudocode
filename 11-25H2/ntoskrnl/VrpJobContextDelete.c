/*
 * XREFs of VrpJobContextDelete @ 0x140A9A800
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x140947388 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140AA61E8 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
