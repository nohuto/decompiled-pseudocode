/*
 * XREFs of MiPagefileMaximumChangePrepare @ 0x1406FDBD4
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x1406FD33C (MiAttemptChangePagingFileMaximum.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 * Callees:
 *     MiReleasePageHash @ 0x140714BDC (MiReleasePageHash.c)
 *     MiReservePageHash @ 0x140714C3C (MiReservePageHash.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1408713F8 (MiCreatePageFileSpaceBitmaps.c)
 */

__int64 __fastcall MiPagefileMaximumChangePrepare(unsigned int a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rdi
  unsigned int v8; // ebx
  __int64 PageFileSpaceBitmaps; // rax

  v4 = 0LL;
  if ( !a2 || (v4 = MiReservePageHash()) != 0 )
  {
    PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(a1);
    if ( PageFileSpaceBitmaps )
    {
      *a4 = PageFileSpaceBitmaps;
      v8 = 0;
      *a3 = v4;
    }
    else
    {
      v8 = -1073741670;
      if ( v4 )
        MiReleasePageHash(v4, a1);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
