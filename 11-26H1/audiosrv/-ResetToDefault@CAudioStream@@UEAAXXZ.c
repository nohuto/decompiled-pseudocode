/*
 * XREFs of ?ResetToDefault@CAudioStream@@UEAAXXZ @ 0x180113400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::ResetToDefault(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 132, 0);
}
