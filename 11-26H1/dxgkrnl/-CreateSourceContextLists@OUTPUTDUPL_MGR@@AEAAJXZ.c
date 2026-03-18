/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1401ED3A4
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1401EDB24 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401EED10 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int i; // esi
  AUTOEXPANDALLOCATION *v11; // rax
  AUTOEXPANDALLOCATION *v12; // rbx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // r9

  if ( *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 969;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"New source context lists cannot be create while we have existing ones",
      969LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221227272LL;
  }
  v3 = *((unsigned int *)this + 19);
  if ( !(_DWORD)v3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 974;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create new context lists with zero elements",
      974LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v4 = *((unsigned int *)this + 19);
  v5 = 72 * v3;
  if ( !is_mul_ok(v4, 0x48uLL) )
    v5 = -1LL;
  v6 = __CFADD__(v5, 8LL);
  v7 = v5 + 8;
  if ( v6 )
    v7 = -1LL;
  v8 = operator new[](v7, 0x674D444Fu, 256LL);
  if ( !v8 )
  {
    *((_QWORD *)this + 2) = 0LL;
LABEL_26:
    WdLogSingleEntry0(6LL);
    v16 = 982LL;
    v17 = L"Failed to allocated new source context lists";
LABEL_27:
    WdLogGlobalForLineNumber = v16;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v9 = v8 + 8;
  *(_QWORD *)v8 = v4;
  `vector constructor iterator'(
    (char *)(v8 + 8),
    72LL,
    v4,
    (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::_OUTPUTDUPL_CONTEXTLIST);
  *((_QWORD *)this + 2) = v9;
  if ( !v9 )
    goto LABEL_26;
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
  {
    v11 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x674D444Fu, 256LL);
    v12 = v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer(v11, 0x100u, 0);
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * i + 56) = v12;
    v13 = *(_QWORD **)(*((_QWORD *)this + 2) + 72LL * i + 56);
    if ( !v13 || !*v13 )
    {
      WdLogSingleEntry0(6LL);
      v16 = 994LL;
      v17 = L"Failed to create temp present processing buffer";
      goto LABEL_27;
    }
    v14 = 8LL * *((unsigned int *)this + 2);
    if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
      v14 = -1LL;
    *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * i + 48) = operator new[](v14, 0x674D444Fu, 256LL);
    v15 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v15 + 72LL * i + 48) )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1001;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to create context list for VidPn source 0x%I64x.",
        i,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_DWORD *)(v15 + 72LL * i + 64) = 0;
  }
  return 0LL;
}
