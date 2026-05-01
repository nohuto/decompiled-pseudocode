/*
 * XREFs of ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802CC4F4
 * Callers:
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x1800B0AC8 (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x18031A538 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     PiiFilterCreate @ 0x18013A97C (PiiFilterCreate.c)
 */

__int64 __fastcall PiiFilter::Initialize(RtlNameValueArray **this)
{
  __int64 result; // rax

  result = PiiFilterCreate(this);
  if ( (int)result >= 0 )
    *((_DWORD *)this + 2) = 1;
  return result;
}
