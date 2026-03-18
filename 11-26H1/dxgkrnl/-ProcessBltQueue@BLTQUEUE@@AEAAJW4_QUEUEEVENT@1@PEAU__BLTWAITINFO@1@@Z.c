/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1402FEDE4 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x140386EEC (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403B7F94 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403C2A34 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1403C2D54 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403C5374 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1403D3C54 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403FC694 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403FC814 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  int v5; // edi
  int v8; // eax
  struct _LIST_ENTRY *v9; // rax
  int v10; // r15d
  struct _LIST_ENTRY **v11; // rax
  __int64 v12; // rbp
  _DWORD *v13; // rbx
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rax
  char v17; // cl
  char v18; // al
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  struct _KEVENT *v22; // [rsp+90h] [rbp+8h]
  char v23; // [rsp+90h] [rbp+8h]
  unsigned int v24; // [rsp+90h] [rbp+8h]

  v3 = 0;
  v5 = a2;
  if ( *(int *)(a1 + 1076) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 1076);
  }
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 520);
    if ( v8 )
      *(_DWORD *)(a1 + 520) = v8 - 1;
  }
  v9 = (struct _LIST_ENTRY *)(a1 + 216);
  v10 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 520) )
      *(_DWORD *)a3 |= 2u;
    v11 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v9);
    v12 = (__int64)v11;
    if ( !v11 )
      break;
    v13 = v11 + 65;
    if ( v5 == 2 )
    {
      *v13 |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v11);
    }
    if ( (*v13 & 1) == 0 )
    {
      v22 = *(struct _KEVENT **)(v12 + 40);
      if ( KeReadStateEvent(v22) )
      {
        *v13 |= 1u;
LABEL_19:
        BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v12);
        goto LABEL_20;
      }
      *(_DWORD *)a3 |= 1u;
      *(_QWORD *)(a3 + 8) = v22;
      if ( ++*(_DWORD *)(v12 + 524) > (unsigned int)(5 * *(_DWORD *)(a1 + 384)) / *(_DWORD *)(a1 + 388) )
      {
        *v13 |= 1u;
        *v13 |= 2u;
        *(_DWORD *)(a1 + 1072) |= 4u;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3796;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"BLTQUEUE 0x%I64x : rendering timeout hit",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)a3 &= ~1u;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( v5 != 1 && (*v13 & 1) != 0 && !*(_DWORD *)(a1 + 520) && *(_DWORD *)(v12 + 56) && !*(_BYTE *)(a1 + 352) )
      *(_DWORD *)a3 |= 2u;
    if ( (*(_DWORD *)a3 & 3) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, (__int64 *)(a1 + 216), v12);
      goto LABEL_65;
    }
    KeWaitForSingleObject((PVOID)(a1 + 264), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)v12, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, (__int64 *)(a1 + 216), v12);
      KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
      return (unsigned int)v3;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 111) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2840), Executive, 0, 0, 0LL);
      v3 = BLTENTRY::IndirectBlt((LARGE_INTEGER *)v12);
      KeReleaseMutex((PRKMUTEX)(a1 + 2840), 0);
    }
    else
    {
      v3 = BLTENTRY::Blt((BLTENTRY *)v12);
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v12, 1);
    }
    if ( v3 >= 0 )
    {
      v14 = *(_BYTE *)(a1 + 352) == 0;
      *(_DWORD *)(a1 + 516) = *(_DWORD *)(v12 + 56);
      if ( v14 )
        v15 = *(_DWORD *)(v12 + 56);
      else
        v15 = 0;
      *(_DWORD *)(a1 + 520) = v15;
    }
    DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)(v12 + 32));
    BLTQUEUE::InsertQueueTail(a1, a1 + 232, v12);
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((PVOID)(a1 + 600), Executive, 0, 0, 0LL);
      v16 = *(_QWORD *)(a1 + 676);
      *(_DWORD *)(a1 + 676) &= ~0x40u;
      v23 = v16;
      KeReleaseMutex((PRKMUTEX)(a1 + 600), 0);
      if ( (v23 & 0x40) == 0 )
        goto LABEL_43;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 662) )
        goto LABEL_43;
      *(_BYTE *)(a1 + 662) = 0;
    }
    BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
LABEL_43:
    KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
    if ( v3 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 1076) = v3;
      return (unsigned int)v3;
    }
    v5 = -1;
    v9 = (struct _LIST_ENTRY *)(a1 + 216);
  }
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((PVOID)(a1 + 600), Executive, 0, 0, 0LL);
    v20 = *(_QWORD *)(a1 + 676);
    *(_DWORD *)(a1 + 676) &= 0xFFFFFF9F;
    v24 = v20;
    KeReleaseMutex((PRKMUTEX)(a1 + 600), 0);
    if ( ((v24 >> 5) & 1) != 0 )
    {
      if ( (v24 & 0x40) != 0 )
        goto LABEL_62;
    }
    else if ( (v24 & 0x40) == 0 )
    {
      goto LABEL_65;
    }
    v10 = 0;
LABEL_62:
    *(_DWORD *)(a1 + 1064) = v10 | *(_DWORD *)(a1 + 1064) & 0xFFFFFFFD;
    if ( ((v24 >> 5) & 1) != 0 )
    {
      v21 = *(unsigned int *)(a1 + 976);
      *(LARGE_INTEGER *)(a1 + 40 * v21 + 992) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 40 * v21 + 1000) = v5;
    }
LABEL_64:
    BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
    goto LABEL_65;
  }
  v17 = *(_BYTE *)(a1 + 661);
  v18 = *(_BYTE *)(a1 + 662);
  if ( v17 )
  {
    if ( !v18 )
      goto LABEL_53;
LABEL_54:
    *(_DWORD *)(a1 + 1064) = v10 | *(_DWORD *)(a1 + 1064) & 0xFFFFFFFD;
    if ( v17 )
    {
      v19 = *(unsigned int *)(a1 + 976);
      *(LARGE_INTEGER *)(a1 + 40 * v19 + 992) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 40 * v19 + 1000) = v5;
    }
    *(_WORD *)(a1 + 661) = 0;
    goto LABEL_64;
  }
  if ( v18 )
  {
LABEL_53:
    v10 = 0;
    goto LABEL_54;
  }
LABEL_65:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v3;
}
