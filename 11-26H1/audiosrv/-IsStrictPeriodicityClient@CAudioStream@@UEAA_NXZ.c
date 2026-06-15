/*
 * XREFs of ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18007A0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsStrictPeriodicityClient(CAudioStream *this)
{
  return *((_DWORD *)this + 102) == 1;
}
