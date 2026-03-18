/*
 * XREFs of ?_IsMonitorInMonitorPendingList@MONITOR_MGR@@QEAA_NPEAVDXGMONITOR@@@Z @ 0x14006A340
 * Callers:
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

char __fastcall MONITOR_MGR::_IsMonitorInMonitorPendingList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  char **v4; // rcx
  char v5; // bl
  char *v6; // rax
  char *v7; // rdi
  char v9; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (MONITOR_MGR *)((char *)this + 104));
  v4 = (char **)((char *)this + 56);
  v5 = 0;
  if ( a2 )
  {
    v6 = *v4;
    if ( *v4 != (char *)v4 )
    {
      v7 = (char *)a2 + 152;
      while ( v6 != v7 )
      {
        if ( v4 == (char **)v6 )
          goto LABEL_8;
        v6 = *(char **)v6;
      }
      v5 = 1;
    }
  }
LABEL_8:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
  return v5;
}
