/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x14013DF50
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     SetKeyboardInputRoutingPolicy @ 0x14013E69C (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( IsInputThread(a1, a2, a3) && IsInputProcessingActivated(v5, v4, v6) )
    return SetKeyboardInputRoutingPolicy(a1);
  else
    return 3221225506LL;
}
