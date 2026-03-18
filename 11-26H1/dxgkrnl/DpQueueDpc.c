/*
 * XREFs of DpQueueDpc @ 0x14003B410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx
  int v3; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && ((v3 = *(_DWORD *)(v2 + 20), v3 == 2) || v3 == 3) )
    {
      return KeInsertQueueDpc((PRKDPC)(v2 + 1408), 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2647;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2634;
  }
  return v1;
}
