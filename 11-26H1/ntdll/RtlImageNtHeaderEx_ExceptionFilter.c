/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x180148264
 * Callers:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return (a1 & 2) == 0;
}
