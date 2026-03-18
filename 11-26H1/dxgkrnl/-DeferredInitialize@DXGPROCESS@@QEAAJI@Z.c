/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1403B8D34
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401DC928 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401F6F28 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1403AF9DC (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400635F4 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, unsigned int a2)
{
  VIDSCH_EXPORT *v2; // rbx
  __int64 v3; // rbp
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  struct DXGGLOBAL *v11; // rax
  const wchar_t *v13; // r9
  struct DXGGLOBAL *v14; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 >= 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1915;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGMMSVersion < MAX_DXGMMS_VERSION",
      1915LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1920;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pNonPagedData->m_pVidSchProcess[DXGMMSVersion] == NULL",
      1920LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)Global + v3 + 35);
  }
  v7 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v6 + 8) + 88LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL);
    v13 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidSchProcess";
    WdLogGlobalForLineNumber = 1924;
    goto LABEL_18;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1931;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pNonPagedData->m_pVidMmProcess[DXGMMSVersion] == NULL",
      1931LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v3 >= 2 )
  {
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = *((_QWORD *)v8 + v3 + 33);
  }
  v10 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v9 + 8) + 344LL))(this);
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v9 - 1)) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(6LL);
    v13 = L"DXGPROCESS (0x%I64x) failed to allocate m_pVidMmProcess";
    WdLogGlobalForLineNumber = 1935;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v13, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v11 = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v3 >= 2 || !*((_QWORD *)v11 + v3 + 35) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1943;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetVidSchExport(DXGMMSVersion) != NULL",
      1943LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 102) & 4) != 0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 8) + 138LL) = 1;
    v14 = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v3 < 2 )
      v2 = (VIDSCH_EXPORT *)*((_QWORD *)v14 + v3 + 35);
    VIDSCH_EXPORT::VidSchRegisterAsDwm(v2, this);
  }
  return 0LL;
}
