/*
 * XREFs of ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ @ 0x1400C0A18
 * Callers:
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

struct ThreadRestrictNewHandlesRegion *ThreadRestrictNewHandlesRegion::Get(void)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v1 = 0LL;
  if ( CurrentThreadNonPaged )
    v2 = *CurrentThreadNonPaged;
  else
    v2 = 0LL;
  v3 = v2 + 8;
  v4 = -v2;
  if ( (v3 & -(__int64)(v4 != 0)) != 0 )
    return *(struct ThreadRestrictNewHandlesRegion **)((v3 & -(__int64)(v4 != 0)) + 0x150);
  return (struct ThreadRestrictNewHandlesRegion *)v1;
}
