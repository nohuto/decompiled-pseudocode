/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x1403A1CC0
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1404C5220 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  v3 = 0;
  if ( *a1 != a1[1] )
  {
    v10 = (_QWORD *)MiPfIssueCoalescedSupport();
    if ( !v10 )
    {
      v3 = -1073741670;
      goto LABEL_2;
    }
    v11 = *(_QWORD **)(a3 + 8);
    if ( *v11 == a3 )
    {
      *v10 = a3;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(a3 + 8) = v10;
      goto LABEL_2;
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_2:
  while ( 1 )
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      return v3;
    if ( (_QWORD *)v6[1] != a1 )
      goto LABEL_7;
    v8 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_7;
    *a1 = v8;
    *(_QWORD *)(v8 + 8) = a1;
    MiIssueHardFaultIo((__int64)v6, 0, 0LL);
    v9 = *(_QWORD **)(a3 + 8);
    if ( *v9 != a3 )
      goto LABEL_7;
    *v6 = a3;
    v6[1] = v9;
    *v9 = v6;
    *(_QWORD *)(a3 + 8) = v6;
  }
}
