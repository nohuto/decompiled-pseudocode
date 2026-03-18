/*
 * XREFs of ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x14020AE90
 * Callers:
 *     ?UnReTarget@ReEnableTRNH@@QEAAXXZ @ 0x1400D7EFC (-UnReTarget@ReEnableTRNH@@QEAAXXZ.c)
 *     ?ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z @ 0x14020AE18 (-ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall ThreadRestrictNewHandlesRegion::Transfer(
        ThreadRestrictNewHandlesRegion *this,
        struct ThreadRestrictNewHandlesRegion *a2)
{
  char *v3; // rax
  char *v4; // rcx

  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 3);
  v3 = (char *)this + 48;
  v4 = (char *)*((_QWORD *)this + 5);
  if ( v4 == v3 )
  {
    memmove((char *)a2 + 48, v3, 4LL * *((_QWORD *)this + 3));
  }
  else
  {
    *((_QWORD *)a2 + 5) = v4;
    *((_QWORD *)this + 5) = v3;
  }
  *((_QWORD *)this + 3) = 0LL;
}
