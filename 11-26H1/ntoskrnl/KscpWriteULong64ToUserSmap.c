/*
 * XREFs of KscpWriteULong64ToUserSmap @ 0x140C64B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteULong64ToUserSmap(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  *(_QWORD *)a1 = a2;
  __asm { clac }
  return result;
}
