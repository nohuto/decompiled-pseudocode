/*
 * XREFs of MmMdlPageContentsState @ 0x140477C60
 * Callers:
 *     MdlInvariantPostProcessing1 @ 0x140646724 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140646934 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // ax
  __int16 v5; // cx
  __int16 v6; // ax

  if ( a2 == 2 )
    return (*(unsigned __int16 *)(a1 + 10) >> 14) & 1;
  v4 = *(_WORD *)(a1 + 10);
  v5 = v4 | 0x4000;
  v6 = v4 & 0xBFFF;
  if ( a2 != 1 )
    v5 = v6;
  result = a2;
  *(_WORD *)(a1 + 10) = v5;
  return result;
}
