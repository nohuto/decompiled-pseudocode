/*
 * XREFs of sub_1400159B4 @ 0x1400159B4
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400159B4(__int64 a1, void *a2, ULONG a3)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  *(_QWORD *)(a1 + 104) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  *(_BYTE *)(a1 + 16) |= 1u;
  MmBuildMdlForNonPagedPool(Mdl);
  return 0LL;
}
