/*
 * XREFs of ?IsStreamFromGameProcess@CAudioStream@@UEAA_NXZ @ 0x180112BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsStreamFromGameProcess(CAudioStream *this)
{
  return *((_BYTE *)this + 560);
}
