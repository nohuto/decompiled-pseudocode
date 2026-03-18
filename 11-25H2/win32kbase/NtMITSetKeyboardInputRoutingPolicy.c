/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1400BD170
 * Callers:
 *     <none>
 * Callees:
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140216BA0 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned __int8)IsInputThread() && IsInputProcessingActivated(v3, v2) )
    return SetKeyboardInputRoutingPolicy(a1);
  else
    return 3221225506LL;
}
