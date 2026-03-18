/*
 * XREFs of VidSchSetInProcessPriorityContext @ 0x14011D4C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetInProcessPriorityContext @ 0x140045050 (VidSchiSetInProcessPriorityContext.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityContext(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 104);
  if ( !*(_BYTE *)(v3 + 212) && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0) )
    return VidSchiSetInProcessPriorityContext(a1, a2);
  WdLogSingleEntry2(3LL, v3, -1071775232LL);
  result = 3223192064LL;
  WdLogGlobalForLineNumber = 6066;
  return result;
}
