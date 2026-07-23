/*
 * XREFs of MiPfCompletePrefetchIos @ 0x1403A19F0
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403A1CC0 (MiPfIssueCoalesceCandidates.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B367C (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(ULONG_PTR *a1, __int64 *a2, void *a3)
{
  unsigned int v3; // edi
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 v10; // r14
  __int64 *v11; // r14
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rax
  unsigned int v14; // eax
  __int64 v16; // rax
  ULONG_PTR **v17; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 *v26; // rax
  _QWORD *v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+28h] [rbp-30h]

  v3 = 0;
  if ( a2 )
  {
    v7 = 0LL;
    v28 = (__int64 *)&v27;
    v8 = 0LL;
    v27 = &v27;
    do
    {
      v9 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = *a2;
          if ( (__int64 *)*a2 == a2 )
          {
            if ( v27 != &v27 )
              MiPfIssueCoalesceCandidates(&v27, v9, a1);
            goto LABEL_7;
          }
          if ( *(_DWORD *)(v10 + 184) < 0x100000u || v27 != &v27 )
            break;
          v24 = *(_QWORD *)v10;
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
            goto LABEL_20;
          v25 = *(_QWORD **)(v10 + 8);
          if ( *v25 != v10 )
            goto LABEL_20;
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          MiIssueHardFaultIo(v10, 0, 0LL);
          v26 = (__int64 *)a1[1];
          if ( (ULONG_PTR *)*v26 != a1 )
            goto LABEL_20;
          *(_QWORD *)v10 = a1;
          *(_QWORD *)(v10 + 8) = v26;
          *v26 = v10;
          a1[1] = v10;
        }
        v18 = (__int64 *)(v10 + 200);
        if ( v27 == &v27 )
        {
          v7 = *(_QWORD *)(v10 + 96);
          if ( (*(_DWORD *)(v10 + 188) & 0x400000) != 0 )
            v8 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 24LL);
          else
            v8 = *v18;
        }
        if ( v7 > *(_QWORD *)(v10 + 96) )
          break;
        if ( (*(_DWORD *)(v10 + 188) & 0x400000) != 0 )
          v18 = (__int64 *)(*(_QWORD *)(v10 + 192) + 24LL);
        if ( v8 != *v18 )
          break;
        v19 = *(_QWORD *)(v10 + 96) - v7;
        v20 = v19 + *(_DWORD *)(v10 + 184);
        if ( v19 > 0x20000 || v20 + v9 > 0x100000 )
          break;
        v21 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_20;
        v22 = *(_QWORD **)(v10 + 8);
        if ( *v22 != v10 )
          goto LABEL_20;
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = v28;
        if ( (_QWORD **)*v28 != &v27 )
          goto LABEL_20;
        *(_QWORD *)(v10 + 8) = v28;
        *(_QWORD *)v10 = &v27;
        v9 += v20;
        *v23 = v10;
        v7 += v20;
        v28 = (__int64 *)v10;
      }
    }
    while ( (int)MiPfIssueCoalesceCandidates(&v27, v9, a1) >= 0 );
    while ( 1 )
    {
LABEL_7:
      v11 = (__int64 *)*a2;
      if ( (__int64 *)*a2 == a2 )
        goto LABEL_8;
      if ( (__int64 *)v11[1] != a2 )
        break;
      v16 = *v11;
      if ( *(__int64 **)(*v11 + 8) != v11 )
        break;
      *a2 = v16;
      *(_QWORD *)(v16 + 8) = a2;
      MiIssueHardFaultIo((__int64)v11, 0, 0LL);
      v17 = (ULONG_PTR **)a1[1];
      if ( *v17 != a1 )
        break;
      *v11 = (__int64)a1;
      v11[1] = (__int64)v17;
      *v17 = (ULONG_PTR *)v11;
      a1[1] = (ULONG_PTR)v11;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_8:
  while ( 1 )
  {
    v12 = *a1;
    if ( (ULONG_PTR *)*a1 == a1 )
      return v3;
    if ( *(ULONG_PTR **)(v12 + 8) != a1 )
      goto LABEL_20;
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_20;
    *a1 = v13;
    *(_QWORD *)(v13 + 8) = a1;
    if ( (*(_DWORD *)(v12 + 188) & 0x1000000) != 0 )
      v14 = MiPfCompleteCoalescedIo(v12);
    else
      v14 = MiPfCompleteInPageSupport(v12, a3);
    if ( ((v14 + 0x80000000) & 0x80000000) == 0 && v14 != -1073740748 )
      v3 = v14;
  }
}
