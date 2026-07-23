/*
 * XREFs of MiGetSecurePageState @ 0x1405343D0
 * Callers:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiIsPageSecured @ 0x140534D58 (MiIsPageSecured.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetSecurePageState(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2D8C0 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= qword_140E2D8C8;
  }
  return HIDWORD(v1);
}
