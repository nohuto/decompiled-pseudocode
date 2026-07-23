/*
 * XREFs of ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC
 * Callers:
 *     ExLookasideMgrsStart @ 0x140840B50 (ExLookasideMgrsStart.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1404D9630 (KeQueryNodeActiveProcessorCount.c)
 *     ?ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@@KK@Z @ 0x14084D0B8 (-ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@.c)
 *     ?ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z @ 0x140B2E800 (-ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z.c)
 */

__int64 __fastcall ExpLookasideMgrStart(struct _EXP_LOOKASIDE_MGR *a1)
{
  int v1; // eax
  unsigned __int16 i; // di
  int NodeActiveProcessorCount; // eax
  int v5; // ecx
  int v6; // eax
  __int64 Timer; // rax
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v9; // rdx

  v1 = *((_DWORD *)a1 + 4);
  if ( v1 )
  {
    if ( v1 != 1 )
      return (unsigned int)-1073741811;
    v6 = ExpLookasideMgrWorkerSetAllocate((struct _EXP_LOOKASIDE_MGR *)((char *)a1 + 600), a1, 3u, 0x80000000);
    v5 = 0;
    if ( v6 < 0 )
      v5 = v6;
  }
  else
  {
    for ( i = 0; i < *((_WORD *)a1 + 298); ++i )
    {
      NodeActiveProcessorCount = KeQueryNodeActiveProcessorCount(i);
      v5 = ExpLookasideMgrWorkerSetAllocate(
             (struct _EXP_LOOKASIDE_MGR *)((char *)a1 + 16 * i + 600),
             a1,
             (unsigned int)(*((_DWORD *)a1 + 10) + NodeActiveProcessorCount - 1) / *((_DWORD *)a1 + 10),
             i);
      if ( v5 < 0 )
        goto LABEL_10;
    }
    v5 = 0;
  }
LABEL_10:
  if ( v5 >= 0 )
  {
    Timer = ExAllocateTimer(*((_QWORD *)a1 + 1), (__int64)a1, 8u);
    *(_QWORD *)a1 = Timer;
    if ( Timer )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v9 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 8) = UnbiasedInterruptTime;
      ExpLookasideMgrSetTimer(a1, v9);
      return 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
