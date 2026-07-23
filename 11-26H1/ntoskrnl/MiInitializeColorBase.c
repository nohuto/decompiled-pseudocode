/*
 * XREFs of MiInitializeColorBase @ 0x1402A4DE8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  if ( a1 >= 0x7FFFFFFF0000LL
    && (a1 < qword_140E2DFC0 || a1 > qword_140E2DFD0)
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
