/*
 * XREFs of ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x1401DE3C0
 * Callers:
 *     ?DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z @ 0x1401DE368 (-DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x14024F0F4 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysic.c)
 */

void __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandlesOwnedByProcess(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  _QWORD *v6; // rcx
  unsigned int *v7; // r14
  unsigned int i; // ebx
  OPM::CMonitorPDO *v9; // rdi
  unsigned int v10; // edx

  if ( *(_DWORD *)(a1 + 8) )
  {
    v6 = *(_QWORD **)a1;
    v7 = (unsigned int *)(a1 + 12);
    if ( *v6 )
    {
      i = 0;
LABEL_6:
      v9 = 0LL;
      if ( i < *v7 && *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
        v9 = *(OPM::CMonitorPDO **)(*(_QWORD *)a1 + 8LL * i);
      if ( OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(v9, a2) )
        OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(a1, v9, i, a3);
      if ( i + 1 >= i )
      {
        v10 = i + 2;
        ++i;
        while ( i < *v7 )
        {
          if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
            goto LABEL_6;
          if ( v10 < i )
            break;
          ++i;
          ++v10;
        }
      }
    }
    else
    {
      for ( i = 1; i < *v7; ++i )
      {
        if ( v6[i] )
          goto LABEL_6;
        if ( i + 1 < i )
          break;
      }
    }
  }
}
