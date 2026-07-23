/*
 * XREFs of MiSoftFaultClusterTradeGetPage @ 0x140717154
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSoftFaultClusterTradeGetPage(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v4; // r14
  unsigned __int64 v6; // r15
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  unsigned __int8 CurrentIrql; // bp
  __int64 LargePage; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  ULONG_PTR v17; // rcx
  __int64 v19; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // ecx
  ULONG_PTR v22; // [rsp+A0h] [rbp+8h] BYREF

  v2 = a1[2];
  v3 = 0;
  v4 = *a1;
  v22 = 0LL;
  if ( *((_BYTE *)a1 + 40) == 1 )
  {
    v6 = *(_QWORD *)v4 & 0xFFFFFFFFFFFF0000uLL;
    v7 = MiProtectionToCacheAttribute((a2 >> 5) & 0x1F);
    v9 = *((_DWORD *)a1 + 20);
    v10 = v7;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
    LargePage = MiGetLargePage((_QWORD *)a1[7], v6, 2u, v9, v10, 0x12u, *(_QWORD **)(v4 + 96), 0LL);
    v13 = LargePage;
    if ( LargePage )
    {
      MiConvertLargeActivePageToChain(LargePage);
      v15 = 16LL;
      v16 = (unsigned __int128)((v13 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v17 = (v13 + 0x220000000000LL) / 48;
      v22 = v17;
      do
      {
        if ( (MiFlags & 0x80u) != 0LL
          && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v17, 1uLL);
          v17 = v22;
        }
        if ( (v17 & 0xF) == a1[6] )
        {
          a1[8] = v17;
          a1[9] = v13;
        }
        else
        {
          MiReleaseFreshPageAtDpc(v13, v16, v14);
          v17 = v22;
        }
        ++v17;
        v13 += 48LL;
        v22 = v17;
        --v15;
      }
      while ( v15 );
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      MiReleaseNonPagedResources(a1[7], 1LL);
      return (unsigned int)-1073741801;
    }
    return v3;
  }
  else
  {
    v19 = a1[8];
    CurrentThread = KeGetCurrentThread();
    a1[9] = 48 * v19 - 0x220000000000LL;
    v21 = ((((*(_DWORD *)(v4 + 80) >> 8) & 1) == 0) + 8256) << 17;
    if ( CurrentThread == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v21 |= 8u;
    return MiFindContiguousPagesEx(
             a1[7],
             v19,
             v19,
             0LL,
             0,
             1LL,
             (*(_DWORD *)(v2 + 32) >> 22) & 3,
             *((_DWORD *)a1 + 20),
             255,
             v21,
             0,
             0LL,
             0LL,
             &v22);
  }
}
