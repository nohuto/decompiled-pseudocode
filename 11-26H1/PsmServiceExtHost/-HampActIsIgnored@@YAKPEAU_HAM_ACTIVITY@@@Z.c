/*
 * XREFs of ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180059D50
 * Callers:
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E20C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsIgnored(struct _HAM_ACTIVITY *a1)
{
  return (*((_BYTE *)a1 + 552) & 0x48) != 0;
}
