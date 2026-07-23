/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x180148114
 * Callers:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return (a1 & 2) == 0;
}
