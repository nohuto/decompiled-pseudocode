/*
 * XREFs of HeapFree @ 0x14000C1E0
 * Callers:
 *     PreserveWriteObj @ 0x140001010 (PreserveWriteObj.c)
 *     WriteFieldObj @ 0x1400038F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x140004180 (ReadFieldObj.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     RunContext @ 0x140009490 (RunContext.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     FreeObjOwner @ 0x14000C7F0 (FreeObjOwner.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     WriteFieldLoop @ 0x14000DDB0 (WriteFieldLoop.c)
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     WriteCookAccess @ 0x14000F370 (WriteCookAccess.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     ProcessDivide @ 0x140015B20 (ProcessDivide.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 *     ProcessEvalObj @ 0x140039FF0 (ProcessEvalObj.c)
 *     ProcessSleep @ 0x14003D6B0 (ProcessSleep.c)
 *     FindNSObjMainNoLock @ 0x14003F584 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 *     ParseLoad @ 0x140052DE0 (ParseLoad.c)
 *     ProcessWait @ 0x140053EA0 (ProcessWait.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     ParseNestedContext @ 0x1400707F0 (ParseNestedContext.c)
 *     ParseUnload @ 0x1400708B0 (ParseUnload.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v1 = a1 - 2;
  *((_DWORD *)a1 - 4) = 0;
  byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v3 = v1[1];
  v4 = *(_QWORD **)(v3 + 40);
  for ( i = (_QWORD *)(v3 + 40); v4 != i; v4 = (_QWORD *)*v4 )
  {
    if ( a1 < v4 )
      break;
  }
  v6 = (_QWORD *)v4[1];
  if ( (_QWORD *)*v6 != v4 )
    goto LABEL_10;
  a1[1] = v6;
  *a1 = v4;
  *v6 = a1;
  v4[1] = a1;
  v7 = (_QWORD *)*a1;
  v8 = *a1 - 16LL;
  if ( (_QWORD *)*a1 != i )
  {
    v14 = *((unsigned int *)v1 + 1);
    if ( (_QWORD *)v8 == (_QWORD *)((char *)v1 + v14) )
    {
      *((_DWORD *)v1 + 1) = v14 + *(_DWORD *)(v8 + 4);
      v15 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_10;
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v16 != v7 )
        goto LABEL_10;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  v9 = (_QWORD *)v1[3];
  v10 = v9 - 2;
  if ( v9 != i )
  {
    v17 = *((unsigned int *)v10 + 1);
    if ( v1 == (_QWORD *)((char *)v10 + v17) )
    {
      *((_DWORD *)v10 + 1) = *((_DWORD *)v1 + 1) + v17;
      v18 = *a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 )
        goto LABEL_10;
      v19 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v19 != a1 )
        goto LABEL_10;
      *v19 = v18;
      v1 = v10;
      *(_QWORD *)(v18 + 8) = v19;
    }
  }
  if ( *(_QWORD *)(v3 + 32) <= (unsigned __int64)v1 + *((unsigned int *)v1 + 1) )
  {
    *(_QWORD *)(v3 + 32) = v1;
    v11 = v1 + 2;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_9;
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_9:
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
}
