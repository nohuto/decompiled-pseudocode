/*
 * XREFs of ?get_NewLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEA_K@Z @ 0x180018480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::get_NewLimit(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        unsigned __int64 *a2)
{
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_QWORD *)this + 9);
  return 0LL;
}
