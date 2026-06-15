/*
 * XREFs of ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180076100
 * Callers:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ @ 0x180112AD0 (-GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetUniqueStreamIdentifier(CAudioStream *this)
{
  return *((_QWORD *)this + 48);
}
