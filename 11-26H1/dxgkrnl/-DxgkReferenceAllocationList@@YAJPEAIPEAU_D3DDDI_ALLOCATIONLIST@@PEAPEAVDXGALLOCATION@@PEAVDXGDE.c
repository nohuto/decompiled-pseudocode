/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1402997C0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     DxgkRender @ 0x14029AD60 (DxgkRender.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct DXGPROCESS *Current; // r13
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // edi
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v11; // edx
  int v12; // r8d
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned int v17; // [rsp+54h] [rbp-64h]
  _BYTE v18[80]; // [rsp+68h] [rbp-50h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, (struct _KTHREAD **)Current);
  v7 = *a1;
  v17 = *a1;
  v8 = 0;
  for ( i = 0; i < v7; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( a2->hAllocation )
    {
      v11 = (hAllocation >> 6) & 0xFFFFFF;
      if ( !(v11 < *((_DWORD *)Current + 74)
          && (v12 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v11 + 8),
              ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v11 + 8) & 0x60))
          && (v12 & 0x2000) == 0
          && (v12 & 0x1F) != 0) )
        goto LABEL_21;
      v14 = *((_QWORD *)Current + 35);
      if ( (*(_BYTE *)(v14 + 16LL * v11 + 8) & 0x1F) != 5 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_21:
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 14266;
        v8 = -1071775468;
        break;
      }
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * v11);
      if ( !v15 )
        goto LABEL_21;
      if ( a4 && *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) != *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 16LL) )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 14288;
        v8 = -1071775467;
        break;
      }
      if ( !ExAcquireRundownProtection(v15 + 11) )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v15, 0LL, 0LL);
        WdLogGlobalForLineNumber = 14148;
      }
      a3[i] = (struct DXGALLOCATION *)v15;
      v7 = v17;
    }
    ++a2;
  }
  *a1 = i;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18);
  return v8;
}
