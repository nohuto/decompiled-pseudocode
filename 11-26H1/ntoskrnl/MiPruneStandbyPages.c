/*
 * XREFs of MiPruneStandbyPages @ 0x1402AA540
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1404B1BD0 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiFreeZeroPagesNeeded @ 0x1402AAA2C (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 result; // rax
  ULONG_PTR v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // r12d
  unsigned __int8 v21; // bl
  unsigned int v22; // ebp
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r14
  unsigned __int64 v27; // rsi
  unsigned __int8 v28; // bp
  unsigned __int8 v29; // r13
  unsigned __int64 i; // rsi
  int v31; // edx
  __int64 Page; // rax
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rbp
  unsigned __int8 CurrentIrql; // r14
  int v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int128 v39; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 v42; // [rsp+A0h] [rbp+18h]
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a1;
  v39 = 0LL;
  v7 = 2;
  v8 = 1;
  v9 = 0LL;
  v37 = *(_DWORD *)(56320LL * a2 + v4 + 14096) & 1;
  v38 = 0LL;
  while ( v8 < (unsigned __int16)KeNumberNodes )
  {
    v25 = *(unsigned int *)(qword_140E2D810 + 4LL * (v8 + a2 * (unsigned __int16)KeNumberNodes));
    v26 = *(_QWORD *)(v6 + 16) + 56320 * v25;
    if ( *(_QWORD *)(v26 + 13888) || (MiFlags & 0x30) == 0 )
    {
      v27 = 0LL;
      v28 = 0;
      if ( byte_140E2D898 )
      {
        v29 = v42;
        do
        {
          v27 += MiNodeFreeZeroPages(v26, v29, 0x80000);
          ++v28;
        }
        while ( v28 < (unsigned __int8)byte_140E2D898 );
        v9 = v38;
        if ( v27 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, 3LL, (unsigned int)(v25 + 1), &v39);
          for ( i = v27 - 0x10000; i; --i )
          {
            v31 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v39, 1u);
            Page = MiGetPage(a1, DWORD2(v39) & 0xFFFFFF00 | v31, 0x11000u);
            v33 = Page;
            if ( Page == -1 )
            {
              v9 = v38;
            }
            else
            {
              v34 = MiSwapNumaStandbyPage(Page, a2, v42, 4096LL);
              v35 = 48 * v34 - 0x220000000000LL;
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
              v41 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v41);
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              MiInsertPageInFreeOrZeroedList(v34, 2LL);
              result = 0x7FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( CurrentIrql < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                result = CurrentIrql;
                __writecr8(CurrentIrql);
              }
              if ( v34 == v33 )
                return result;
              v9 = v38 + 1;
              v38 = v9;
              if ( v9 == v43 )
              {
                result = MiFreeZeroPagesNeeded(a1, a2, v42);
                v43 = result;
                if ( !result )
                  return result;
                v9 = 0LL;
                v38 = 0LL;
              }
            }
          }
        }
        v6 = a1;
      }
    }
    ++v8;
  }
  v10 = v9;
  result = MiRemoveLowestPriorityStandbyPage(v6, 8LL, 0LL, v6);
  v12 = result;
  if ( result != -1 )
  {
    while ( 1 )
    {
      v13 = 48 * v12 - 0x220000000000LL;
      v41 = 0;
      v14 = *(_QWORD *)(v13 + 16);
      ++v9;
      if ( qword_140E2D8C0 && (v14 & 0x10) == 0 )
        HIDWORD(v14) &= HIDWORD(qword_140E2D8C8);
      v15 = v7 & 0xFFFFFBFF;
      v7 |= 0x400u;
      if ( HIDWORD(v14) != -3 )
        v7 = v15;
      v18 = (unsigned int)MiPageToNode(v12);
      if ( qword_140E2D868 )
        v16 = *(unsigned __int8 *)(MiSearchChannelTable(v12) + 12);
      else
        LOBYTE(v16) = 0;
      if ( (_DWORD)v18 == a2 && ((_BYTE)v16 == v42 || !v37) )
        goto LABEL_13;
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + 56320 * v18, v16, 0x80000) < 0x200 )
        break;
      v24 = MiSwapNumaStandbyPage(v12, a2, v42, 12288LL);
      if ( v24 != v12 )
      {
        v12 = v24;
        v13 = 48 * v24 - 0x220000000000LL;
        v7 &= ~0x400u;
        goto LABEL_13;
      }
      v20 = 1;
LABEL_14:
      v21 = KeGetCurrentIrql();
      if ( v21 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 2;
        KiRaiseIrqlProcessIrqlFlags(v21, v16);
      }
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, v16, v19) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      MiInsertPageInFreeOrZeroedList(v12, v7);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
        result = v21;
        __writecr8(v21);
      }
      if ( v20 )
        return result;
      if ( v9 == v43 )
      {
        result = MiFreeZeroPagesNeeded(a1, a2, v42);
        v43 = result;
        if ( !result )
          return result;
        v9 = 0LL;
      }
      v10 = v9;
      result = MiRemoveLowestPriorityStandbyPage(a1, 8LL, 0LL, v23);
      v12 = result;
      if ( result == -1 )
        return result;
    }
    v9 = v10;
LABEL_13:
    v20 = v41;
    goto LABEL_14;
  }
  return result;
}
