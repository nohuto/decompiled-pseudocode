/*
 * XREFs of KeIsTraceCallbackAllowed @ 0x1404A2AE4
 * Callers:
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     KiTrackSystemCallEntry @ 0x1407BE930 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsTraceCallbackAllowed(char a1)
{
  unsigned int v1; // r8d
  _KPROCESS_SECURE_STATE v2; // rax

  v1 = 0;
  if ( (KiDynamicTraceEnabled & 2) != 0 )
    return 1LL;
  if ( (KiDynamicTraceEnabled & 1) == 0 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v2.EntireField = (unsigned __int64)KeGetCurrentThread()->Process->SecureState;
  if ( (v2.EntireField & 1) != 0 )
    return 0LL;
  LOBYTE(v1) = (v2.EntireField & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  return v1;
}
