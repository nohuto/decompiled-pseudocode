/*
 * XREFs of sub_140055F30 @ 0x140055F30
 * Callers:
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140055F30(__int64 a1)
{
  struct _MDL *v2; // rcx

  v2 = *(struct _MDL **)(a1 + 120);
  if ( v2 )
  {
    MmProtectMdlSystemAddress(v2, 4u);
    MmUnlockPages(*(PMDL *)(a1 + 120));
    IoFreeMdl(*(PMDL *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
