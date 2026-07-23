/*
 * XREFs of EtwpSetQpcDeltaTracking @ 0x1404E8394
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpSetQpcDeltaTracking(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 200);
  if ( v1 == 4 || v1 == 3 )
    return 3221225659LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000000u);
  return 0LL;
}
