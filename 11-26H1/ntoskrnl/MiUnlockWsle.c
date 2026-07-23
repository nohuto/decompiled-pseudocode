/*
 * XREFs of MiUnlockWsle @ 0x140326688
 * Callers:
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiUnlockVa @ 0x1404A3E1C (MiUnlockVa.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404AD45C (MiReleaseLockedVaLeafCharges.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  volatile __int64 *v8; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r9
  unsigned __int64 ContainingPageTable; // rax
  int v14; // ebp
  __int64 v15; // r8
  volatile __int64 v16; // rdx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // ecx
  char v21; // r9
  int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    MiReleaseLockedVaLeafCharges(a1, a3, 0LL);
  v8 = (volatile __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !a4 )
  {
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
    v11 = v10;
    if ( EffectivePagePriorityThread < 5 )
      v11 = 7;
    MiSetVaAgeListEx(a1, a2, 1u, v11, 1);
    goto LABEL_7;
  }
  MiGetWsleContents(0xFFFFF68000000000uLL, a2);
  if ( *(__int64 *)(a3 + 40) >= 0 )
  {
    v14 = 1;
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_QWORD *)(a3 + 24) |= 0x4000000000000000uLL;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v16 = *v8;
  v17 = 0xFFFFF6FB7DBED000uLL;
  v18 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL
    && MiPteHasShadow() )
  {
    goto LABEL_27;
  }
  v19 = ((unsigned __int64)MiFlags >> 28) & 3;
  if ( v19 <= 1 )
  {
    if ( !v19
      || (unsigned __int64)v8 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v8 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v16 & 0x80u) == 0LL )
    {
LABEL_27:
      LOBYTE(v16) = v16 | 0x20;
    }
  }
  else if ( (MiFlags & 0x8000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v16 & 0x20) != 0 )
  {
    v23 = v15;
    v20 = 0;
    if ( (unsigned __int64)v8 >= v17 && (unsigned __int64)v8 <= v18 )
    {
      v22 = MiSanitizeShadowPxe(0LL, &v23, v15);
      v15 = v23;
      v20 = v22;
    }
    *v8 = v15;
    if ( v20 )
      MiWritePteShadow();
LABEL_22:
    a4 = 1;
    goto LABEL_23;
  }
  if ( _bittest64(&MiFlags, 0x1Bu) )
    _mm_lfence();
  v21 = _InterlockedExchange64(v8, v15);
  if ( (unsigned __int64)v8 >= v17 && (unsigned __int64)v8 <= v18 )
    MiWritePteShadow();
  if ( (v21 & 0x20) != 0 )
    goto LABEL_22;
  a4 = 0;
LABEL_23:
  if ( v14 )
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_7:
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( *(__int64 *)(a3 + 40) < 0 )
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
    ContainingPageTable = MiGetContainingPageTable(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockPageTableCharges(48 * ContainingPageTable - 0x220000000000LL, 2);
  }
  return a4;
}
