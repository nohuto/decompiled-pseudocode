/*
 * XREFs of ??1_VIDSCH_SYNC_POINT@@QEAA@XZ @ 0x1400048E4
 * Callers:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x140004898 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_SYNC_POINT::~_VIDSCH_SYNC_POINT(_VIDSCH_SYNC_POINT *this)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 != (char *)this + 80 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 32) = 0;
  v3 = (char *)*((_QWORD *)this + 3);
  if ( v3 != (char *)this + 32 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 16) = 0;
}
