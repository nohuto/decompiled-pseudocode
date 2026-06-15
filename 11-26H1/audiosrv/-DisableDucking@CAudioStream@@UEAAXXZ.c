/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x1801116D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 132, 1);
}
