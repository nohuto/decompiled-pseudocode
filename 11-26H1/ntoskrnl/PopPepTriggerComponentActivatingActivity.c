/*
 * XREFs of PopPepTriggerComponentActivatingActivity @ 0x1403BB750
 * Callers:
 *     <none>
 * Callees:
 *     PopPepTriggerActivity @ 0x1403B9720 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403BB820 (PopPepGetComponentPreferedIdleState.c)
 */

void __fastcall PopPepTriggerComponentActivatingActivity(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v6; // eax
  int ComponentPreferedIdleState; // eax

  if ( a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136);
    v5 = *(_QWORD *)(a2 + 128);
    *(_DWORD *)(a2 + 152) = 0;
    if ( v5 >= v4 )
      v5 = v4;
    v6 = *(_DWORD *)(a2 + 4);
    *(_QWORD *)(a2 + 120) = v5;
    if ( (v6 & 2) == 0 )
    {
      *(_DWORD *)(a2 + 4) = v6 | 2;
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 140)) == 1
        && !*(_BYTE *)(a1 + 136)
        && !**(_DWORD **)(a1 + 72) )
      {
        PopPepTriggerActivity(a1, 0LL, 0, 0);
      }
    }
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState(a2);
    if ( ComponentPreferedIdleState != *(_DWORD *)(a2 + 176) )
      PopPepTriggerActivity(a1, a2, 1, ComponentPreferedIdleState | 0x80000000);
  }
}
