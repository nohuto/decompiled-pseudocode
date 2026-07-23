/*
 * XREFs of KscpReadULong64FromUserSmap @ 0x140C64B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadULong64FromUserSmap(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = *(_QWORD *)a1;
  __asm { clac }
  return result;
}
