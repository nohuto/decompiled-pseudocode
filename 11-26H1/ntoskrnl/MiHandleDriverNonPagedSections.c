/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x140ACAFE8
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     RtlFindSetBits @ 0x1403F1120 (RtlFindSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x140415210 (RtlFindNextForwardRunClear.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F780C (MiGetExtendedLoaderBitmap.c)
 *     MiDisablePagingOfDriver @ 0x140ACB608 (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v5; // esi
  BOOL v6; // r12d
  ULONG v7; // ebp
  ULONG_PTR *v8; // r15
  _RTL_BITMAP *ExtendedLoaderBitmap; // r14
  ULONG SetBits; // eax
  ULONG v11; // ebx
  ULONG NextForwardRunClear; // eax
  unsigned int SizeOfBitMap; // edx
  ULONG v15; // r13d
  ULONG_PTR *PteAddress; // rbx
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebp
  ULONG_PTR *v21; // r14
  int v22; // eax
  ULONG_PTR *v23; // rbx
  unsigned __int64 StartingRunIndex; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR *v25; // [rsp+80h] [rbp+18h] BYREF

  v25 = 0LL;
  v3 = *(_QWORD *)(a1 + 48);
  StartingRunIndex = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    return 0LL;
  v5 = 0;
  if ( (dword_140FBF204 & 1) != 0 || (a2 & 2) != 0 )
  {
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = MiSnapDriverRange(a1, v20, 8, 0, (__int64)&v25, (__int64)&StartingRunIndex);
      v23 = v25;
      v20 = v22;
      if ( !v25 )
        goto LABEL_19;
      if ( v21 )
      {
        if ( v25 == v21 )
          return v5;
        MiUnlockCodePage((unsigned __int64)v25, StartingRunIndex, 0);
LABEL_19:
        if ( !v20 )
          return v5;
      }
      else
      {
        v5 = MiLockCode(a1, v25, StartingRunIndex, 2);
        if ( (v5 & 0x80000000) == 0 )
          goto LABEL_19;
        v20 = 0;
        v21 = v23;
      }
    }
  }
  MiDisablePagingOfDriver(a1);
  v6 = 1;
  v7 = 0;
  v8 = 0LL;
  ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  while ( 1 )
  {
    v25 = *(ULONG_PTR **)(a1 + 48);
    LODWORD(StartingRunIndex) = 0;
    if ( v7 == ExtendedLoaderBitmap->SizeOfBitMap )
      break;
    SetBits = RtlFindSetBits(ExtendedLoaderBitmap, 1u, v7);
    v11 = SetBits;
    if ( SetBits < v7 || SetBits == -1 )
      break;
    NextForwardRunClear = RtlFindNextForwardRunClear(ExtendedLoaderBitmap, SetBits, (PULONG)&StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    if ( !NextForwardRunClear )
      SizeOfBitMap = ExtendedLoaderBitmap->SizeOfBitMap;
    v15 = SizeOfBitMap;
    PteAddress = (ULONG_PTR *)MiGetPteAddress((unsigned __int64)&v25[512 * v11]);
    v18 = (unsigned int)(v17 - 1);
    if ( v6 )
    {
      v19 = MiLockCode(a1, PteAddress, (unsigned __int64)&PteAddress[v18], 2);
      v5 = v19;
      if ( v19 < 0 )
        v8 = PteAddress;
      v7 = 0;
      if ( v19 >= 0 )
        v7 = v15;
      v6 = v19 >= 0;
    }
    else
    {
      if ( PteAddress == v8 )
        return v5;
      MiUnlockCodePage((unsigned __int64)PteAddress, (unsigned __int64)&PteAddress[v18], 0);
      v7 = v15;
    }
  }
  return v5;
}
