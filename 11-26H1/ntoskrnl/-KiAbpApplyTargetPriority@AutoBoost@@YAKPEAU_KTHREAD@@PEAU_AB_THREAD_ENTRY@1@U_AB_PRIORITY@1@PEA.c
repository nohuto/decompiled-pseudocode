/*
 * XREFs of ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280
 * Callers:
 *     ?KiAbpPerformIoBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@T_AB_IO_BOOST@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376B00 (-KiAbpPerformIoBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@T_AB_IO_BOOST@1@PEAU_AB_BOOST_.c)
 *     ?KiAbpPerformCpuPriorityBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@CPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BD8 (-KiAbpPerformCpuPriorityBoostsForOwners@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@CPEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377770 (-KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC (-KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     ?KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140441E70 (-KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404AAB54 (EtwTraceAutoBoostSetFloor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall AutoBoost::KiAbpApplyTargetPriority(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v8; // r12d
  int v9; // esi
  char v10; // bl
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  _DWORD *v14; // r13
  char v15; // al
  int *v16; // r14
  int v17; // edx
  unsigned int v18; // r15d
  int v19; // ecx
  char v20; // al
  char v21; // al
  int v22; // ecx
  __int64 v23; // r15
  unsigned int v25; // r8d
  struct _SINGLE_LIST_ENTRY *v26; // r9
  _QWORD *v27; // r13
  _QWORD *v28; // r14
  unsigned int v29; // r15d
  int v30; // r12d
  struct _SINGLE_LIST_ENTRY *v31; // r9
  unsigned int ResourceSafe; // eax
  struct _SINGLE_LIST_ENTRY *v33; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v35; // [rsp+48h] [rbp-60h]
  char v36; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+54h] [rbp-54h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  char v39; // [rsp+B0h] [rbp+8h]
  AutoBoost *v40; // [rsp+B8h] [rbp+10h]

  v40 = (AutoBoost *)a2;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 1440);
  v36 = *(_BYTE *)(a1 + 195);
  v8 = 0;
  v9 = (v6 >> 9) & 7;
  v10 = a3;
  v11 = a2;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 1084);
    if ( v9 >= v13 )
      v9 = v13;
  }
  if ( v9 < 2 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1504) )
    {
      LOBYTE(v9) = 2;
    }
    else
    {
      v21 = v9;
      if ( *(_DWORD *)(a1 + 1504) )
        v21 = 2;
      LOBYTE(v9) = v21;
    }
  }
  v39 = !*(_DWORD *)(a1 + 1512) || *(_DWORD *)(a1 + 1508);
  v14 = a5;
  v37 = 0;
  *a5 = 0;
  if ( (*(_BYTE *)(a2 + 33) & 4) != 0 )
  {
    v15 = *(_BYTE *)(*(_QWORD *)(a2 - 48LL * (*(_BYTE *)(a2 + 36) & 0x7F) - 16) + 195LL);
    if ( v15 > 30 )
      v15 = 30;
  }
  else
  {
    v15 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)a2, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
    v11 = (__int64)v40;
  }
  v16 = (int *)(v11 + 40);
  if ( v15 >= v10 )
  {
    v10 = v37;
  }
  else
  {
    v17 = *v16;
    v18 = 0;
    v19 = *v16;
    LOBYTE(v37) = v10;
    *v16 = v17 ^ (v17 ^ (v19 | (1 << (v10 - 1)))) & 0x3FFFFFFF;
    a2 = *(_QWORD *)a4;
    v38 = *(_QWORD *)a4;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v20 = *(_BYTE *)(a1 + v10 + 824);
    if ( v20 == -1 )
      KeBugCheckEx(0x157u, a1, v10, 1uLL, 0LL);
    *(_BYTE *)(a1 + v10 + 824) = v20 + 1;
    *(_DWORD *)(a1 + 856) |= 1 << v10;
    if ( *(char *)(a1 + 195) < v10 )
    {
      KiSetPriorityThread(a1, v38, v10);
      v8 = 1;
    }
    v11 = (__int64)v40;
    v14 = a5;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  if ( (*v16 & 0x40000000) == 0 )
  {
    v22 = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
    if ( a2 && v22 >= *(_DWORD *)(a2 + 1084) )
    {
      v22 = *(_DWORD *)(a2 + 1084);
      v16 = (int *)(v11 + 40);
    }
    if ( v22 < SBYTE1(a3) )
    {
      PsBoostThreadIo((LegacyAutoBoost *)a1, 0LL, v11, (struct _SINGLE_LIST_ENTRY *)a4);
      _InterlockedOr(v34, 0);
      if ( !*(_DWORD *)(a1 + 860) )
      {
        if ( *(_QWORD *)(a4 + 16) )
        {
          LOBYTE(a2) = 1;
          PsBoostThreadIo((LegacyAutoBoost *)a1, a2, v11, (struct _SINGLE_LIST_ENTRY *)a4);
          if ( AutoBoost::KiAbpThreadInsertList(
                 (AutoBoost *)a1,
                 *(struct _KTHREAD **)(a4 + 16),
                 (struct _SINGLE_LIST_ENTRY *)(a1 + 816),
                 v31) )
          {
            AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)(*(_QWORD *)(a4 + 16) - 37296LL), (struct _KPRCB *)a2);
          }
          goto LABEL_36;
        }
        *v14 |= 1u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 860));
      *v16 |= 0x40000000u;
      v8 = 1;
      BYTE1(v37) = 2;
    }
  }
LABEL_36:
  if ( *v16 < 0 || (*(_DWORD *)(a1 + 1512) == 0) >= SBYTE2(a3) )
  {
    v23 = a4;
    goto LABEL_39;
  }
  PsBoostThreadIoQoS((AutoBoost *)a1, 0LL, v11, (struct _SINGLE_LIST_ENTRY *)a4);
  _InterlockedOr(v34, 0);
  v23 = a4;
  if ( !*(_DWORD *)(a1 + 864) )
  {
    if ( *(_QWORD *)(a4 + 16) )
    {
      PsBoostThreadIoQoS((AutoBoost *)a1, 1LL, v25, v26);
      if ( AutoBoost::KiAbpThreadInsertList(
             (AutoBoost *)a1,
             *(struct _KTHREAD **)(a4 + 16),
             (struct _SINGLE_LIST_ENTRY *)(a1 + 816),
             v33) )
      {
        AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)(*(_QWORD *)(a4 + 16) - 37296LL), (struct _KPRCB *)a2);
      }
LABEL_39:
      if ( !v8 )
        goto LABEL_40;
      goto LABEL_46;
    }
    *v14 |= 2u;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 864));
  *v16 |= 0x80000000;
  BYTE2(v37) = 1;
LABEL_46:
  if ( *(_QWORD *)(v23 + 8) && *(_BYTE *)(a1 + 792) )
  {
    v27 = *(_QWORD **)(v23 + 8);
    v28 = (_QWORD *)(a1 + 808);
    v29 = 0;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *v28 == 1LL )
    {
      v30 = 1;
      *v28 = *v27;
      *v27 = v28;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v30 )
      _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
  }
LABEL_40:
  if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 && v37 )
  {
    ResourceSafe = (unsigned int)AutoBoost::KiAbpEntryGetResourceSafe(v40, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
    v35 = *a5;
    EtwTraceAutoBoostSetFloor(a1, ResourceSafe, (unsigned __int8)v10, BYTE1(v37), SBYTE2(v37), v36, v9, v39);
  }
  LOBYTE(v5) = v10 != 0;
  return v5;
}
