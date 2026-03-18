/*
 * XREFs of ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ @ 0x1401023EC
 * Callers:
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 * Callees:
 *     <none>
 */

struct ThreadRestrictNewHandlesRegion *__fastcall ThreadRestrictNewHandlesRegion::Get(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  v5 = v4 + 8;
  v6 = -v4;
  if ( (v5 & -(__int64)(v6 != 0)) != 0 )
    return *(struct ThreadRestrictNewHandlesRegion **)((v5 & -(__int64)(v6 != 0)) + 0x148);
  return (struct ThreadRestrictNewHandlesRegion *)v3;
}
