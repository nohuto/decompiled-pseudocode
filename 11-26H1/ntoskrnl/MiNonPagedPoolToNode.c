/*
 * XREFs of MiNonPagedPoolToNode @ 0x1404C7FA0
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1402A3998 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  for ( result = 0LL; ; result = (unsigned int)(result + 1) )
  {
    if ( (unsigned int)result >= (unsigned __int16)KeNumberNodes )
      KeBugCheckEx(0x1Au, 0x5309uLL, BugCheckParameter2, 0LL, 0LL);
    if ( BugCheckParameter2 >= *(_QWORD *)(384 * result + qword_140E2D838 + 104)
      && BugCheckParameter2 < *(_QWORD *)(384 * result + qword_140E2D838 + 112) )
    {
      break;
    }
  }
  return result;
}
