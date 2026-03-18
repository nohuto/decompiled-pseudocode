/*
 * XREFs of BmlUnPinAllPathsPartialModalityFromSource @ 0x1402E0BBC
 * Callers:
 *     BmlUnPinSourceMode @ 0x1402E0A6C (BmlUnPinSourceMode.c)
 * Callees:
 *     BmlUnPinPartialPathModalityOnPath @ 0x1402E0800 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlUnPinAllPathsPartialModalityFromSource(unsigned __int8 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // esi

  v3 = a3;
  for ( i = 0; ; ++i )
  {
    if ( i >= *a1 )
      return 0LL;
    if ( *(_DWORD *)(*(_QWORD *)&a1[120 * i + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&a1[120 * v3 + 16] + 24LL) )
    {
      v8 = BmlUnPinPartialPathModalityOnPath((__int64)a1, a2, i);
      if ( v8 < 0 )
        break;
    }
  }
  WdLogSingleEntry3(3LL, a1, a2, i);
  result = (unsigned int)v8;
  WdLogGlobalForLineNumber = 3136;
  return result;
}
