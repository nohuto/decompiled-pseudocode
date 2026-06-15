/*
 * XREFs of ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800737F0
 * Callers:
 *     ?GetCategory@CAudioStream@@W7EAAKXZ @ 0x180111D40 (-GetCategory@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetCategory(CAudioStream *this)
{
  return *((unsigned int *)this + 98);
}
