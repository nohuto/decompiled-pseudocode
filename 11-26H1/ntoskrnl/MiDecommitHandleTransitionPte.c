/*
 * XREFs of MiDecommitHandleTransitionPte @ 0x14033FE54
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140340D20 (MiReleasePageFileSpace.c)
 *     MiDecommitLargePte @ 0x140340E3C (MiDecommitLargePte.c)
 *     MiReturnPagedPoolLockCharge @ 0x14042F7F4 (MiReturnPagedPoolLockCharge.c)
 *     MiIsPfnSystemCharged @ 0x14042F8E0 (MiIsPfnSystemCharged.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiDecommitHandleTransitionPte(__int64 a1, __int16 a2)
{
  int v2; // ebp
  ULONG_PTR *v4; // r14
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rdi
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // r13
  BOOL v13; // r12d
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  int v16; // ebp
  __int64 v17; // rax
  int v18; // eax
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 100);
  if ( (a2 & 0x3E0) == 0x300LL && (v2 & 0x1C0000) != 0 || *(_QWORD *)(a1 + 144) != 1LL && (v2 & 0x1C0000) == 0 )
  {
    MiDecommitLargePte(a1);
    return *(unsigned int *)(a1 + 144);
  }
  else
  {
    v4 = (ULONG_PTR *)(a1 + 80);
    result = MiLockTransitionLeafPageEx(*(_QWORD *)(a1 + 80));
    v9 = result;
    if ( result )
    {
      v10 = *(_DWORD *)(a1 + 112);
      if ( (v10 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(a1, *(_QWORD *)*v4, v7, v8);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v12 = *(_QWORD *)(a1 + 8);
        v13 = 1;
        v19 = 0;
        if ( (v10 & 0x20) != 0 )
        {
          v14 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        }
        else if ( (v2 & 0xF0) != 0 )
        {
          v14 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          if ( (unsigned int)MiIsPfnSystemCharged(result, v6, v7, v8) )
          {
            *(_BYTE *)(v9 + 35) &= ~0x20u;
            v19 = 1;
          }
        }
        else
        {
          if ( !(unsigned __int16)*(_DWORD *)(result + 32) )
          {
            v11 = *(_QWORD *)(result + 16);
            v17 = (*(_QWORD *)(result + 40) >> 43) & 0x3FFLL;
            v20 = v11;
            v12 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v17);
            if ( (v11 & 4) != 0 )
            {
              v18 = MI_IS_PTE_IN_WS_SWAP_SET(v12, &v20);
              v11 = v20;
              v13 = v18 != 0;
            }
          }
          v4 = (ULONG_PTR *)(a1 + 80);
          v14 = a1 + 24;
          _InterlockedDecrement64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding);
        }
        if ( (unsigned int)MiDeleteTransitionPte(*v4, v9) == 3 || v19 )
          ++*(_QWORD *)(*(_QWORD *)v14 + 8LL);
        v15 = *(_QWORD *)(a1 + 128);
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          v16 = v2 & 0xF0;
          if ( v16 && v16 != 48 )
            ++**(_QWORD **)v14;
        }
        else
        {
          if ( v11 )
            MiReleasePageFileSpace(v12, v11, v13);
          if ( !v13 )
          {
            if ( qword_140E2D8C0 && (v11 & 0x10) == 0 )
              HIDWORD(v11) &= HIDWORD(qword_140E2D8C8);
            v15 = MiTransferSoftwarePte(
                    *(_QWORD *)(a1 + 120),
                    *(_QWORD *)(v12 + 8LL * ((unsigned __int16)v11 >> 12) + 22304),
                    HIDWORD(v11),
                    2);
          }
          **(_QWORD **)(a1 + 80) = v15;
        }
        if ( !v15 )
          ++*(_DWORD *)(a1 + 96);
      }
      return 1LL;
    }
  }
  return result;
}
