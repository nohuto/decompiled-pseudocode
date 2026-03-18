/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030
 * Callers:
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x14009B954 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x14009D104 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1400E0FA8 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E1014 (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400E2790 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // esi
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 i; // r9
  __int64 v7; // rcx
  struct _RTL_BALANCED_NODE *v8; // rcx
  _QWORD *j; // rax
  _QWORD **v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  void *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v14 = &VIDMM_PARTITION::_PartitionLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v3 = *((_DWORD *)this + 1738);
    v4 = 0LL;
    v15 = 1;
LABEL_3:
    if ( (unsigned int)v4 < v3 )
    {
      v5 = 0LL;
      for ( i = 0LL; ; i += 24LL )
      {
        if ( i >= 48 )
        {
          v4 = (unsigned int)(v4 + 1);
          goto LABEL_3;
        }
        v7 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v4);
        if ( (*(_BYTE *)(i + v7 + 632) & 1) != 0 )
        {
          v8 = VIDMM_PARTITION::_PartitionTree;
          for ( j = 0LL; v8; v8 = v8->Children[0] )
            j = v8->Children;
          while ( j )
          {
            if ( *(_BYTE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + j[5] + 24)
                          + 344LL * (unsigned int)v4
                          + 136) )
              goto LABEL_24;
            v10 = (_QWORD **)j[1];
            v11 = j;
            if ( v10 )
            {
              v12 = *v10;
              for ( j = (_QWORD *)j[1]; v12; v12 = (_QWORD *)*v12 )
                j = v12;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v11 )
                  break;
                v11 = j;
              }
            }
          }
        }
        else if ( *(_BYTE *)(v5 + v7 + 800) )
        {
LABEL_24:
          DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v13);
          goto LABEL_25;
        }
        v5 += 344LL;
      }
    }
    v15 = 0;
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_25:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5639);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 24LL), 0, 0);
  }
}
