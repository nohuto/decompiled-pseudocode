/*
 * XREFs of ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401C8EDC
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401C9CF0 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AB7B0 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rbp
  int v3; // r14d
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rbx

  v1 = *(_QWORD *)this;
  v3 = 0;
  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1396;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1396LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1397;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1397LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(v1 + 2320) >= 0xC004u && *(int *)(v1 + 3044) >= 2700 )
  {
    if ( *((_QWORD *)this + 435) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1414;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DriverBlackboxInfo.pBuffer == NULL",
        1414LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v4 = operator new[](0x100000uLL, 0x4B677844u, 256LL);
    *((_QWORD *)this + 435) = v4;
    if ( !v4 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1419;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating black screen driver blackbox buffer(size 0x%I64x)",
        0x100000LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((_QWORD *)this + 407) = *(_QWORD *)(v1 + 288);
    *((_DWORD *)this + 816) = 3;
    *((_DWORD *)this + 868) = 0x100000;
    v6 = MEMORY[0xFFFFF78000000320];
    v7 = v6 * KeQueryTimeIncrement();
    v8 = DXGADAPTER::DdiCollectDiagnosticInfo((DXGADAPTER *)v1, (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256));
    v9 = MEMORY[0xFFFFF78000000320];
    v3 = v8;
    *((_QWORD *)this + 437) = (v9 * (unsigned __int64)KeQueryTimeIncrement() - v7) / 0x2710;
    if ( v3 >= 0 )
    {
      if ( *((_DWORD *)this + 869) <= 0x100000u )
        *((_BYTE *)this + 3488) = 1;
      else
        *((_DWORD *)this + 869) = 0;
    }
  }
  return (unsigned int)v3;
}
