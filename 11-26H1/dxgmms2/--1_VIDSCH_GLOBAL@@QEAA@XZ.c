/*
 * XREFs of ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004ACC8
 * Callers:
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(_VIDSCH_GLOBAL *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)*((_QWORD *)this + 447);
  if ( v2 != (char *)this + 3584 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 447) = 0LL;
  *((_DWORD *)this + 936) = 0;
  v3 = (char *)*((_QWORD *)this + 356);
  if ( v3 != (char *)this + 2856 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 356) = 0LL;
  *((_DWORD *)this + 722) = 0;
  v4 = (char *)*((_QWORD *)this + 87);
  if ( v4 != (char *)this + 704 && v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 192) = 0;
  v5 = (char *)*((_QWORD *)this + 83);
  if ( v5 != (char *)this + 672 && v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 172) = 0;
  v6 = (char *)*((_QWORD *)this + 77);
  if ( v6 != (char *)this + 624 && v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 160) = 0;
  v7 = (char *)*((_QWORD *)this + 71);
  if ( v7 != (char *)this + 576 && v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 71) = 0LL;
  *((_DWORD *)this + 148) = 0;
  v8 = (char *)*((_QWORD *)this + 65);
  if ( v8 != (char *)this + 528 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 136) = 0;
  HwQueueStagingList::~HwQueueStagingList((struct _KEVENT **)this + 35);
}
