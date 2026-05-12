/*
 * XREFs of StorpRequestTimer @ 0x140001980
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpRequestTimer(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v7; // r9
  int **v9; // rax
  int *v10; // rbp
  int *v11; // r14
  int v12; // edx
  int *v13; // rax
  __int64 v15; // rbx
  ULONG v16; // r15d
  PSLIST_ENTRY v17; // rax
  PSLIST_ENTRY v18; // rax
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // rdx

  v7 = a1;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(WPP_GLOBAL_Control->AttachedDevice, 75LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, a1, a2, a3);
    }
    return 3238002694LL;
  }
  v9 = *(int ***)(a1 - 16);
  v10 = 0LL;
  v11 = 0LL;
  if ( !v9 || !*v9 )
    goto LABEL_38;
  v12 = **v9;
  if ( ((_DWORD)v9[31] & 1) == 0 )
  {
    if ( v12 == 1094997074 )
    {
      v10 = *v9;
      goto LABEL_11;
    }
LABEL_38:
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v20 = 76LL;
    goto LABEL_37;
  }
  if ( v12 != 1314275652 )
    goto LABEL_38;
  v11 = *v9;
LABEL_11:
  v13 = *(int **)a2;
  if ( !*(_QWORD *)a2 || *v13 != 1094997074 && *v13 != 1314275652 )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v20 = 77LL;
    v7 = a2;
LABEL_37:
    WPP_SF_q(v19->AttachedDevice, v20, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v7);
    return 3238002694LL;
  }
  if ( a5 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 136), a3, 0LL) )
    {
      v15 = -10 * a5;
      *(_QWORD *)(a2 + 144) = a4;
      v16 = a6 / 0x3E8 + 1;
      if ( a6 == 1000 * (a6 / 0x3E8) )
        v16 = a6 / 0x3E8;
      if ( KeGetCurrentIrql() <= 2u )
      {
        KeSetCoalescableTimer((PKTIMER)(a2 + 8), (LARGE_INTEGER)v15, 0, v16, (PKDPC)(a2 + 72));
        return 0LL;
      }
      if ( v10 )
      {
        v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v10 + 72);
        if ( v17 )
        {
          LODWORD(v17[1].Next) = 134684674;
          LODWORD(v17[2].Next) = 11;
          *((_QWORD *)&v17[2].Next + 1) = a2;
          v17[3].Next = (_SLIST_ENTRY *)v15;
          *((_DWORD *)&v17[3].Next + 2) = v16;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v10 + 73, v17);
          KeInsertQueueDpc((PRKDPC)(v10 + 270), v10 + 268, 0LL);
          return 0LL;
        }
        _InterlockedIncrement(&RaidUnloggedErrors);
      }
      else
      {
        v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 44);
        if ( v18 )
        {
          LODWORD(v18[1].Next) = 134684674;
          LODWORD(v18[2].Next) = 1;
          *((_QWORD *)&v18[2].Next + 1) = a2;
          v18[3].Next = (_SLIST_ENTRY *)v15;
          *((_DWORD *)&v18[3].Next + 2) = v16;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v11 + 45, v18);
          KeInsertQueueDpc((PRKDPC)(v11 + 158), v11 + 156, 0LL);
          return 0LL;
        }
      }
      return 3238002691LL;
    }
    return 3238002700LL;
  }
  else if ( (v13 == v10 || v13 == v11) && a3 == *(_QWORD *)(a2 + 136) )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
    KeCancelTimer((PKTIMER)(a2 + 8));
    return 0LL;
  }
  else
  {
    return 3238002694LL;
  }
}
