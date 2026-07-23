/*
 * XREFs of PnpRebalance @ 0x1407B6FF8
 * Callers:
 *     PnpProcessRebalance @ 0x1405DFC7C (PnpProcessRebalance.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopMarkDeviceToBeReset @ 0x1407A53A0 (IopMarkDeviceToBeReset.c)
 *     PnpFindBestConfiguration @ 0x1407A6064 (PnpFindBestConfiguration.c)
 *     PnpTraceRebalanceResult @ 0x1407B4D08 (PnpTraceRebalanceResult.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407B6398 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceSubtree @ 0x1407B6BC8 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x1407B6BFC (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x1407B73A4 (PnpStopDeviceSubtree.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     IopCommitConfiguration @ 0x140B51038 (IopCommitConfiguration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  void *v6; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v10; // r14
  int BestConfiguration; // edi
  unsigned int v12; // r13d
  __int64 i; // r12
  unsigned int j; // edx
  _OWORD *v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-95h]
  _QWORD v19[2]; // [rsp+38h] [rbp-91h] BYREF
  void *v20; // [rsp+48h] [rbp-81h]
  __int128 v21; // [rsp+50h] [rbp-79h] BYREF
  __int128 v22; // [rsp+60h] [rbp-69h]
  __int128 v23; // [rsp+70h] [rbp-59h]
  __int128 v24; // [rsp+80h] [rbp-49h]
  _OWORD v25[2]; // [rsp+90h] [rbp-39h]
  __int64 v26; // [rsp+B0h] [rbp-19h]

  v4 = a3;
  v19[1] = v19;
  v6 = *(void **)(a1 + 712);
  v19[0] = v19;
  v20 = a2;
  if ( v6 )
    memset_0(v6, 0, 0x68uLL);
  memset_0(&v21, 0, 0x80uLL);
  *(_QWORD *)&v24 = IopRootDeviceNode;
  *((_QWORD *)&v22 + 1) = IopRootDeviceNode;
  *(_QWORD *)&v23 = IopRootDeviceNode;
  DWORD2(v24) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v4 )
      memmove(Pool2, a2, v4 << 6);
    v12 = 0;
    BestConfiguration = 0;
    v17 = 0;
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      DWORD2(v21) = i;
      *((_QWORD *)v25 + i) = MEMORY[0xFFFFF78000000008];
      v18 = v12;
      PnpFindRebalanceCandidates(i, a1, (_DWORD)v10 + ((_DWORD)v4 << 6), &v17, a4, (__int64)&v21);
      v12 = v17;
      if ( !(_DWORD)v4 && (a4 & 2) == 0 && (a4 & 1) == 0 )
      {
        for ( j = 0; j < v17; ++j )
        {
          if ( v10[8 * (unsigned __int64)j] == *(_QWORD *)(a1 + 32) )
            goto LABEL_15;
        }
        BestConfiguration = -1073741823;
        *((_DWORD *)&v22 + i) = 4 - (*(_DWORD *)(a1 + 300) != 779);
        goto LABEL_26;
      }
LABEL_15:
      if ( v18 == v17 )
      {
        if ( (a4 & 2) != 0 )
          break;
        if ( !*((_DWORD *)&v22 + i) )
          *((_DWORD *)&v22 + i) = 5;
        if ( BestConfiguration != -1073739512 )
          BestConfiguration = -1073741823;
      }
      else
      {
        BestConfiguration = PnpFindBestConfiguration((__int64)v10, (unsigned int)v4 + v17, (__int64)v19);
        if ( BestConfiguration >= 0 )
          goto LABEL_34;
        if ( !*((_DWORD *)&v22 + i) )
          *((_DWORD *)&v22 + i) = 6;
      }
    }
    if ( BestConfiguration < 0 )
    {
LABEL_26:
      PnpCancelStopDeviceSubtree((ULONG_PTR)IopRootDeviceNode);
      goto LABEL_27;
    }
LABEL_34:
    PnpStopDeviceSubtree(IopRootDeviceNode);
    if ( (a4 & 2) != 0 && *(_DWORD *)(a1 + 300) == 780 )
    {
      PipSetDevNodeProblem(a1, 54LL, 0LL);
      if ( (int)IopMarkDeviceToBeReset(*(_QWORD *)(a1 + 32)) < 0 )
        PnpRequestDeviceRemoval(a1, 0LL, 54LL);
      else
        PipClearDevNodeProblem(a1);
    }
    IopCommitConfiguration(v19);
    if ( (_DWORD)v4 )
      PnpBuildCmResourceLists((unsigned __int64)v10, (unsigned __int64)&v10[8 * v4], 0);
    PnpBuildCmResourceLists(
      (unsigned __int64)&v10[8 * v4],
      (unsigned __int64)&v10[8 * (unsigned __int64)((unsigned int)v4 + v12)],
      1);
    if ( (_DWORD)v4 )
      memmove(v20, v10, v4 << 6);
LABEL_27:
    PnpFreeResourceRequirementsForAssignTable(
      (unsigned __int64)&v10[8 * v4],
      (unsigned __int64)&v10[8 * (unsigned __int64)((unsigned int)v4 + v12)]);
    ExFreePoolWithTag(v10, 0x30706E50u);
  }
  else
  {
    LODWORD(v22) = 2;
    BestConfiguration = -1073741670;
  }
  PnpTraceRebalanceResult(0, BestConfiguration, (__int64)&v21);
  if ( DWORD2(v21) == 1 )
    PnpTraceRebalanceResult(1u, BestConfiguration, (__int64)&v21);
  v15 = *(_OWORD **)(a1 + 712);
  if ( BestConfiguration >= 0 )
  {
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( v15 )
  {
    *v15 = v21;
    v15[1] = v22;
    v15[2] = v23;
    v15[3] = v24;
    v15[4] = v25[0];
    v15[5] = v25[1];
    *((_QWORD *)v15 + 12) = v26;
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, (unsigned __int16 *)(a1 + 40), BestConfiguration);
  return (unsigned int)BestConfiguration;
}
