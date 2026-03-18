/*
 * XREFs of MiGetSecurePageState @ 0x140531F30
 * Callers:
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x1403C3010 (MiFreeSecureKernelPage.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiIsPageSecured @ 0x1405328B8 (MiIsPageSecured.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetSecurePageState(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2D740 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= qword_140E2D748;
  }
  return HIDWORD(v1);
}
