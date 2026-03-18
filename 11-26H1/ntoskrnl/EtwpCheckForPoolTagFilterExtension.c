/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x140A6E09C
 * Callers:
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 * Callees:
 *     EtwpUpdateTagFilter @ 0x140827634 (EtwpUpdateTagFilter.c)
 *     EtwpGetFlagExtension @ 0x140A6F278 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  _WORD *FlagExtension; // rax
  unsigned __int16 v7; // dx
  __int16 *v8; // r8
  _BYTE *v9; // rcx

  v3 = *(unsigned __int8 *)(a1 + 818);
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a2, 4LL);
  if ( !FlagExtension )
  {
    if ( !a3 )
      return 0LL;
    v7 = 0;
    v8 = &EtwpPoolTagFilter[10 * v3];
    v9 = 0LL;
LABEL_8:
    EtwpUpdateTagFilter(v9, v7, (__int64)v8);
    return 0LL;
  }
  v7 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
  if ( v7 <= 4u )
  {
    v8 = &EtwpPoolTagFilter[10 * v3];
    v9 = FlagExtension + 2;
    goto LABEL_8;
  }
  return 3221225485LL;
}
