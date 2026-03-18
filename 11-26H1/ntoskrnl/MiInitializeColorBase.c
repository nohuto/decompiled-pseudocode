/*
 * XREFs of MiInitializeColorBase @ 0x1402A5898
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  if ( a1 >= 0x7FFFFFFF0000LL
    && (a1 < qword_140E2DE40 || a1 > qword_140E2DE50)
    && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    p_Blink = 0LL;
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  }
  return MiInitializePageColorBase(p_Blink, 3LL, a2, a3);
}
