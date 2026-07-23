/*
 * XREFs of KiWakePriQueueWaiter @ 0x1403826C0
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1403EEF80 (KiActivateWaiterPriQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiRemovePrcbWaitEntry @ 0x140382CD0 (KiRemovePrcbWaitEntry.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r12
  ULONG_PTR v6; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int8 v11; // bp
  unsigned int v12; // edi
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  char v15; // cl
  int v16; // eax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  char v21; // cl
  struct _SINGLE_LIST_ENTRY *v22; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rcx
  ULONG_PTR v24; // rcx
  int v25; // eax
  char v26; // al
  int v27; // edx
  struct _KPRCB *v28; // rdx
  _QWORD *p_Next; // rcx
  char v30; // al
  unsigned int v31; // r9d
  int v32; // edx
  char v33; // al
  __int64 v34; // r8
  signed int v35; // eax
  __int64 v36; // r9
  int v37; // edx
  int v38; // eax
  unsigned int v39; // edx
  bool v41; // cc
  __int64 v42; // rcx
  char v43; // al
  int IsEnabledNoReportingNoInline; // eax
  int v45; // ecx
  int v46; // r9d
  unsigned int v47; // edx
  int v48; // ecx

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  v6 = a4;
  do
  {
    v8 = (_QWORD *)*v4;
    v9 = v4;
    v4 = v8;
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)v8[1] != v9 || (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *v10 = v8;
    v11 = 0;
    v8[1] = v10;
    v12 = 0;
    v13 = v9[3];
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v13 + 64) );
    }
    if ( *(_BYTE *)(v13 + 388) == 5 )
    {
      v14 = (unsigned __int8)*(_DWORD *)(v13 + 540);
      if ( (_DWORD)v14 != (_DWORD)v6 )
      {
        v27 = *(_DWORD *)(v13 + 540) & 0x100;
        if ( !v27 )
        {
          v42 = *(_QWORD *)(v13 + 232);
          _InterlockedDecrement((volatile signed __int32 *)(v42 + 4 * v14 + 536));
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 4 * v6 + 536));
        }
        *(_DWORD *)(v13 + 540) = v27 | (unsigned __int8)v6;
      }
      v15 = *(_BYTE *)(v13 + 112);
      v16 = v15 & 7;
      if ( v16 == 1 || v16 == 4 )
      {
        v17 = *(_QWORD *)(v13 + 232);
        if ( v17 )
        {
          if ( (*(_BYTE *)v17 & 0x7F) == 0x15 )
          {
            *(_DWORD *)(v13 + 540) = (unsigned __int8)*(_DWORD *)(v13 + 540);
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 4LL * *(unsigned int *)(v13 + 540) + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 40));
          }
        }
        KiRemovePrcbWaitEntry(v13);
        v18 = *(_BYTE *)(v13 + 388);
        if ( v18 == 1 )
        {
          *(_DWORD *)(v13 + 116) |= 2u;
        }
        else if ( v18 == 5 )
        {
          v19 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v13 + 436));
          if ( *(_BYTE *)(v13 + 391) )
            *(_QWORD *)(v13 + 1000) += v19;
          else
            *(_QWORD *)(v13 + 992) += v19;
        }
        *(_BYTE *)(v13 + 388) = 7;
        *(_QWORD *)(v13 + 216) = *(_QWORD *)(a1 + 11528);
        *(_QWORD *)(a1 + 11528) = v13 + 216;
        *(_QWORD *)(v13 + 200) = a3;
        *(_QWORD *)(v13 + 976) = 0LL;
LABEL_21:
        *(_BYTE *)(v13 + 645) = 0;
        v11 = 1;
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *(_BYTE *)(v13 + 563);
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          if ( (char)v6 < v21 )
          {
            if ( *(_BYTE *)(v13 + 793) )
            {
              v22 = (struct _SINGLE_LIST_ENTRY *)(v13 + 816);
              if ( *(_QWORD *)(v13 + 816) == 1LL )
              {
                p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-37296LL )
                {
                  v22->Next = p_AbSelfIoBoostsList->Next;
                  p_AbSelfIoBoostsList->Next = v22;
                  _InterlockedIncrement16((volatile signed __int16 *)(v13 + 868));
                  if ( !CurrentPrcb->AbDpc.DeferredContext )
                  {
                    KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->AbDpc, (__int64)CurrentPrcb, 0LL, 0LL, 0);
                    CurrentPrcb->AbDpc.DeferredContext = (PVOID)1;
                  }
                }
              }
            }
          }
        }
        else if ( (char)v6 < v21 )
        {
          if ( *(_BYTE *)(v13 + 793) )
          {
            v28 = (struct _KPRCB *)(v13 + 816);
            if ( *(_QWORD *)(v13 + 816) == 1LL )
            {
              p_Next = &CurrentPrcb->AbSelfIoBoostsList.Next;
              if ( CurrentPrcb != (struct _KPRCB *)-37296LL )
              {
                *(_QWORD *)&v28->MxCsr = *p_Next;
                *p_Next = v28;
                _InterlockedIncrement16((volatile signed __int16 *)(v13 + 868));
                AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v28);
              }
            }
          }
        }
        v24 = *(int *)(v13 + 1028);
        *(_WORD *)(v13 + 518) &= 0xF00Fu;
        *(_BYTE *)(v13 + 563) = v6;
        *(_BYTE *)(v13 + 870) = 0;
        if ( (int)v6 >= 16 )
        {
          v30 = *(_BYTE *)(v6 + v13 + 824);
          if ( v30 == -1 )
            KeBugCheckEx(0x157u, v13, v6, 1uLL, 0LL);
          *(_BYTE *)(v6 + v13 + 824) = v30 + 1;
          *(_DWORD *)(v13 + 856) |= 1 << v6;
          v25 = v6;
        }
        else
        {
          v25 = 32;
        }
        *(_DWORD *)(v13 + 1028) = v25;
        if ( (_DWORD)v24 != 32 )
        {
          v26 = *(_BYTE *)(v24 + v13 + 824);
          if ( !v26 )
            KeBugCheckEx(0x157u, v13, v24, 2uLL, 0LL);
          v43 = v26 - 1;
          *(_BYTE *)(v24 + v13 + 824) = v43;
          if ( !v43 )
            *(_DWORD *)(v13 + 856) ^= 1 << v24;
        }
        IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v24);
        v45 = *(char *)(v13 + 563);
        v34 = (unsigned int)v45;
        if ( IsEnabledNoReportingNoInline )
        {
          if ( v45 < 16 )
          {
            v32 = v45 + (*(_WORD *)(v13 + 518) & 0xF);
            if ( __OFSUB__(v32, v45) || v32 == v45 )
              v32 = v45;
            v33 = 0;
            if ( *(char *)(v13 + 870) > 0 )
              v33 = *(_BYTE *)(v13 + 870);
            v34 = (unsigned int)(v32 + v33);
            if ( (int)v34 >= 16 )
              v34 = 15LL;
            v31 = *(unsigned __int16 *)(v13 + 518);
            if ( (unsigned __int8)(v31 >> 4) > (int)v34 )
              v34 = (unsigned __int8)(v31 >> 4);
          }
          v35 = *(_DWORD *)(v13 + 856);
          if ( v35 )
          {
            _BitScanReverse((unsigned int *)&v35, v35);
            v41 = (int)v34 < v35;
LABEL_71:
            if ( v41 )
              v34 = (unsigned int)v35;
          }
        }
        else
        {
          v46 = *(char *)(v13 + 563);
          if ( v45 < 16 )
          {
            v48 = v45 + (*(_WORD *)(v13 + 518) & 0xF);
            if ( v48 <= (int)v34 )
              v48 = v34;
            v46 = *(char *)(v13 + 563) + *(char *)(v13 + 870);
            if ( v46 <= v48 )
              v46 = v48;
            v47 = *(unsigned __int16 *)(v13 + 518);
            if ( (unsigned __int8)(v47 >> 4) > v46 )
              v46 = (unsigned __int8)(v47 >> 4);
            if ( v46 >= 16 && (*(_DWORD *)(v13 + 120) & 0x400000) == 0 )
              v46 = 15;
          }
          v35 = *(_DWORD *)(v13 + 856);
          v34 = (unsigned int)v46;
          if ( v35 )
          {
            _BitScanReverse((unsigned int *)&v35, v35);
            v41 = v46 < v35;
            goto LABEL_71;
          }
        }
        if ( (_DWORD)v34 != *(char *)(v13 + 195) )
        {
          v36 = *(_QWORD *)(v13 + 72);
          v37 = *(unsigned __int8 *)(v13 + 651);
          if ( (KiVelocityFlags & 0x40000) != 0 && KiVariableQuantumEnabled )
          {
            v38 = *(unsigned __int8 *)(v13 + 516);
            if ( v38 == 4 )
            {
LABEL_60:
              v37 = 36;
            }
            else if ( v38 == 7 )
            {
LABEL_69:
              v37 = 2;
            }
            else
            {
              switch ( *(_BYTE *)(v13 + 516) )
              {
                case 0:
                case 3:
                  goto LABEL_60;
                case 1:
                  v37 = 18;
                  break;
                case 2:
                case 5:
                case 6:
                  goto LABEL_69;
                default:
                  break;
              }
            }
          }
          v39 = KiCyclesPerClockQuantum * v37;
          if ( (*(_DWORD *)(v13 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 5u);
          *(_QWORD *)(v13 + 32) = v36 + v39;
          KiSetPriorityThread(v13, 0LL, (unsigned __int64 *)v34);
        }
        goto LABEL_64;
      }
      if ( (*(_BYTE *)(v13 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v13 + 112) = v15 & 0xF8 | 2;
        *(_QWORD *)(v13 + 200) = a3;
        *(_QWORD *)(v13 + 976) = 0LL;
        *((_BYTE *)v9 + 17) = 0;
        goto LABEL_21;
      }
      if ( v16 == 5 )
      {
        *(_BYTE *)(v13 + 112) = v15 & 0xF8 | 6;
      }
      else if ( v16 == 3 )
      {
        *((_BYTE *)v9 + 17) = 2;
      }
    }
LABEL_64:
    *(_QWORD *)(v13 + 64) = 0LL;
    ++*((_BYTE *)v9 + 17);
  }
  while ( !v11 && v4 != v5 );
  return v11;
}
