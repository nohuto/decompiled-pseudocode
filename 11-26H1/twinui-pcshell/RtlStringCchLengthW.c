/*
 * XREFs of RtlStringCchLengthW @ 0x1801EFFF4
 * Callers:
 *     AslStringDuplicate @ 0x18015C594 (AslStringDuplicate.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1801F002C (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCchLengthW(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = RtlStringLengthWorkerW(a1, 0x7FFFFFFFLL);
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( a3 )
    *a3 = 0LL;
  return result;
}
