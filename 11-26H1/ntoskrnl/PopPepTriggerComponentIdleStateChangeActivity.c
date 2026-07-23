/*
 * XREFs of PopPepTriggerComponentIdleStateChangeActivity @ 0x140485D60
 * Callers:
 *     <none>
 * Callees:
 *     PopPepTriggerActivity @ 0x1403B9720 (PopPepTriggerActivity.c)
 */

void __fastcall PopPepTriggerComponentIdleStateChangeActivity(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  __int64 v6; // rax

  if ( a2 )
  {
    if ( a3 < 0 )
    {
      v5 = *(_DWORD *)(a2 + 4);
      if ( (v5 & 2) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v5 | 2;
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 140)) == 1
          && !*(_BYTE *)(a1 + 136)
          && !**(_DWORD **)(a1 + 72) )
        {
          PopPepTriggerActivity(a1, 0LL, 0, 0);
        }
      }
    }
    v6 = *(_QWORD *)(a2 + 64);
    if ( *(_DWORD *)(a2 + 176) )
      *(_DWORD *)(v6 + 4) = 0;
    else
      *(_DWORD *)(v6 + 4) = a3 & 0x7FFFFFFF;
  }
}
