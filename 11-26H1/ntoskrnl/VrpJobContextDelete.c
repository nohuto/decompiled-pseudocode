/*
 * XREFs of VrpJobContextDelete @ 0x140B29690
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14093BFD0 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140B296C0 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
