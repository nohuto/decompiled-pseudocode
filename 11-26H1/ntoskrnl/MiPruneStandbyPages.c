/*
 * XREFs of MiPruneStandbyPages @ 0x1402C8780
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1404B83A0 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiNodeFreeZeroPages @ 0x14028EFD0 (MiNodeFreeZeroPages.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeZeroPagesNeeded @ 0x1402C8C6C (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v17; // rbx
  int v18; // r12d
  unsigned __int8 v19; // bl
  unsigned int v20; // ebp
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // bp
  unsigned __int8 v27; // r13
  unsigned __int64 i; // rsi
  int v29; // edx
  __int64 Page; // rax
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbp
  unsigned __int8 CurrentIrql; // r14
  int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int128 v37; // [rsp+30h] [rbp-58h] BYREF
  int v39; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a1;
  v37 = 0LL;
  v7 = 2;
  v8 = 1;
  v9 = 0LL;
  v35 = *(_DWORD *)(56320LL * a2 + v4 + 14096) & 1;
  v36 = 0LL;
  while ( v8 < (unsigned __int16)KeNumberNodes )
  {
    v23 = *(unsigned int *)(qword_140E2D690 + 4LL * (v8 + a2 * (unsigned __int16)KeNumberNodes));
    v24 = *(_QWORD *)(v6 + 16) + 56320 * v23;
    if ( *(_QWORD *)(v24 + 13888) || (MiFlags & 0x30) == 0 )
    {
      v25 = 0LL;
      v26 = 0;
      if ( byte_140E2D718 )
      {
        v27 = v40;
        do
        {
          v25 += MiNodeFreeZeroPages(v24, v27, 0x80000);
          ++v26;
        }
        while ( v26 < (unsigned __int8)byte_140E2D718 );
        v9 = v36;
        if ( v25 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, 3LL, (unsigned int)(v23 + 1), &v37);
          for ( i = v25 - 0x10000; i; --i )
          {
            v29 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v37, 1u);
            Page = MiGetPage(a1, DWORD2(v37) & 0xFFFFFF00 | v29, 0x11000u);
            v31 = Page;
            if ( Page == -1 )
            {
              v9 = v36;
            }
            else
            {
              v32 = MiSwapNumaStandbyPage(Page, a2, v40, 4096LL);
              v33 = 48 * v32 - 0x220000000000LL;
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
              v39 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v39);
                while ( *(__int64 *)(v33 + 24) < 0 );
              }
              MiInsertPageInFreeOrZeroedList(v32, 2LL);
              result = 0x7FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( CurrentIrql < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                result = CurrentIrql;
                __writecr8(CurrentIrql);
              }
              if ( v32 == v31 )
                return result;
              v9 = v36 + 1;
              v36 = v9;
              if ( v9 == v41 )
              {
                result = MiFreeZeroPagesNeeded(a1, a2, v40);
                v41 = result;
                if ( !result )
                  return result;
                v9 = 0LL;
                v36 = 0LL;
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
      v39 = 0;
      v14 = *(_QWORD *)(v13 + 16);
      ++v9;
      if ( qword_140E2D740 && (v14 & 0x10) == 0 )
        HIDWORD(v14) &= HIDWORD(qword_140E2D748);
      v15 = v7 & 0xFFFFFBFF;
      v7 |= 0x400u;
      if ( HIDWORD(v14) != -3 )
        v7 = v15;
      v17 = (unsigned int)MiPageToNode(v12);
      if ( qword_140E2D6E8 )
        v16 = *(unsigned __int8 *)(MiSearchChannelTable(v12) + 12);
      else
        LOBYTE(v16) = 0;
      if ( (_DWORD)v17 == a2 && ((_BYTE)v16 == v40 || !v35) )
        goto LABEL_13;
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + 56320 * v17, v16, 0x80000) < 0x200 )
        break;
      v22 = MiSwapNumaStandbyPage(v12, a2, v40, 12288LL);
      if ( v22 != v12 )
      {
        v12 = v22;
        v13 = 48 * v22 - 0x220000000000LL;
        v7 &= ~0x400u;
        goto LABEL_13;
      }
      v18 = 1;
LABEL_14:
      v19 = KeGetCurrentIrql();
      if ( v19 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 2;
        KiRaiseIrqlProcessIrqlFlags(v19, v16);
      }
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v20);
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
      if ( v19 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        result = v19;
        __writecr8(v19);
      }
      if ( v18 )
        return result;
      if ( v9 == v41 )
      {
        result = MiFreeZeroPagesNeeded(a1, a2, v40);
        v41 = result;
        if ( !result )
          return result;
        v9 = 0LL;
      }
      v10 = v9;
      result = MiRemoveLowestPriorityStandbyPage(a1, 8LL, 0LL, v21);
      v12 = result;
      if ( result == -1 )
        return result;
    }
    v9 = v10;
LABEL_13:
    v18 = v39;
    goto LABEL_14;
  }
  return result;
}
