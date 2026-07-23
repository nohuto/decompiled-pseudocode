/*
 * XREFs of MiIssueHardFaultIo @ 0x140390800
 * Callers:
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403A1CC0 (MiPfIssueCoalesceCandidates.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiTransferFileExtent @ 0x1404FDB1C (MiTransferFileExtent.c)
 *     MiCopyImageExtentContents @ 0x1406FE164 (MiCopyImageExtentContents.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v5; // r8d
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  struct _KEVENT *v10; // rsi
  NTSTATUS *v11; // r14
  unsigned __int64 v12; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  int v16; // esi
  char v17; // bl
  _KPROCESS *Process; // rdx
  signed __int32 Value; // eax
  struct _FILE_OBJECT *v20; // rcx
  __int64 v21; // rcx
  __int64 SubsectionFromPte; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  signed __int32 v26; // ett
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 188);
  v5 = a2;
  if ( (v3 & 0x400) != 0 )
  {
    v7 = a1 + 272;
    v8 = (a1 + 272) | 1;
    if ( (v3 & 0x20) == 0 )
      v8 = v7;
    v9 = v8;
    if ( (a3 & 1) != 0 )
    {
      v25 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v25 == 1 && (*(_DWORD *)(v25 + 80) & 0x800) != 0 )
        v9 = v8 | 2;
    }
    v10 = (struct _KEVENT *)(a1 + 32);
    v11 = (NTSTATUS *)(a1 + 80);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL);
    v29 = *(_DWORD *)(a1 + 96);
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((v12 >> 43) & 0x3FF)) + 256LL) + 24LL),
            (unsigned int)&v29,
            v9,
            (int)a1 + 32,
            a1 + 80);
LABEL_6:
    v14 = v13;
    if ( v13 < 0 )
    {
      *v11 = v13;
      *(_QWORD *)(a1 + 88) = 0LL;
      KeSetEvent(v10, 0, 0);
    }
    return v14;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(**(_QWORD **)(a1 + 192) + 56LL) & 0x30000000) != 0x20000000 )
    {
LABEL_11:
      v16 = ((v3 & 0x20) != 0 ? 4 : 0) | 1;
      if ( (v3 & 0x80000) == 0 )
        v16 = (v3 & 0x20) != 0 ? 4 : 0;
      if ( (v3 & 0x20) != 0 )
      {
        v17 = v16 | 2;
      }
      else
      {
        v17 = v16;
        if ( !v5 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 232)) == 7 )
          v17 = v16 | 2;
        Process = KeGetCurrentThread()->Process;
        Value = Process[3].StackCount.Value;
        while ( Value )
        {
          v26 = Value;
          Value = _InterlockedCompareExchange(&Process[3].StackCount.Value, Value - 1, Value);
          if ( v26 == Value )
          {
            v17 |= 8u;
            break;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
        v20 = *(struct _FILE_OBJECT **)(*(_QWORD *)(a1 + 192) + 24LL);
      else
        v20 = *(struct _FILE_OBJECT **)(a1 + 200);
      v10 = (struct _KEVENT *)(a1 + 32);
      v11 = (NTSTATUS *)(a1 + 80);
      v13 = IoPageReadEx(v20, a1 + 272, (_QWORD *)(a1 + 96), a1 + 32, a1 + 80, v17, 0LL);
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
      v27 = 0LL;
    else
      v27 = *(_QWORD *)(a1 + 208);
    v28 = a1 + 272;
    if ( v27 )
      v28 = v27;
    MiCopyImageExtentContents(a1, v28);
    *(_QWORD *)(a1 + 88) = *(unsigned int *)(v28 + 40);
    *(_DWORD *)(a1 + 80) = 0;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 256);
    if ( *(__int64 *)(v21 + 40) >= 0 )
      goto LABEL_11;
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      goto LABEL_11;
    SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(v21 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x30000000) != 0x20000000 )
      goto LABEL_11;
    if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
      v23 = 0LL;
    else
      v23 = *(_QWORD *)(a1 + 208);
    v24 = a1 + 272;
    if ( v23 )
      v24 = v23;
    MiTransferFileExtent(v24, SubsectionFromPte, *(_QWORD *)(a1 + 96), 0LL, a1 + 80);
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return *(unsigned int *)(a1 + 80);
  }
}
