/*
 * XREFs of ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802C3AD0
 * Callers:
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x18017DD78 (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     PiiFilterCreate @ 0x18015A54C (PiiFilterCreate.c)
 */

__int64 __fastcall PiiFilter::Initialize(RtlNameValueArray **this)
{
  __int64 result; // rax

  result = PiiFilterCreate(this);
  if ( (int)result >= 0 )
    *((_DWORD *)this + 2) = 1;
  return result;
}
