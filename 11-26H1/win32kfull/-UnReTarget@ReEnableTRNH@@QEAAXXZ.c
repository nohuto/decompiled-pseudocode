/*
 * XREFs of ?UnReTarget@ReEnableTRNH@@QEAAXXZ @ 0x1400D7EFC
 * Callers:
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D7020 (NtGdiPATHOBJ_vEnumStart.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x14020AE90 (-Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z.c)
 */

void __fastcall ReEnableTRNH::UnReTarget(ReEnableTRNH *this)
{
  struct ThreadRestrictNewHandlesRegion *v1; // rdx

  v1 = (struct ThreadRestrictNewHandlesRegion *)*((_QWORD *)this + 5);
  if ( v1 )
  {
    ThreadRestrictNewHandlesRegion::Transfer(*((ThreadRestrictNewHandlesRegion **)this + 4), v1);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(*((ThreadRestrictNewHandlesRegion **)this + 4));
    Win32FreePool(*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
}
