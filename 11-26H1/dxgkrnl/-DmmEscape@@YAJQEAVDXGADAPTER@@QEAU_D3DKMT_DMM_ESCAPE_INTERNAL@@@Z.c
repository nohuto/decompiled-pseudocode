/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140430030
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140192BE0 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x14025C6F0 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  VIDPN_MGR *v6; // rbp
  int v7; // ecx
  _DWORD *v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  struct _KTHREAD **v16; // r14
  __int128 v17; // xmm3
  __int64 v18; // xmm0_8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v24; // esi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13359;
  }
  v4 = *((_QWORD *)this + 395);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13364;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v6 = *(VIDPN_MGR **)(v4 + 104);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 13379;
    return result;
  }
  v7 = *(_DWORD *)a2;
  v8 = 0LL;
  if ( *(int *)a2 > 7 )
  {
    v14 = v7 - 8;
    if ( !v14 )
      goto LABEL_25;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_25;
    v13 = v15 - 3;
    v12 = v13 == 0;
  }
  else
  {
    if ( v7 == 7 )
      goto LABEL_25;
    v9 = v7 - 1;
    if ( !v9 )
      goto LABEL_25;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_25;
    v13 = v11 - 1;
    v12 = v13 == 0;
  }
  if ( v12 || (unsigned int)(v13 - 1) < 2 )
  {
LABEL_25:
    v16 = (struct _KTHREAD **)((char *)a2 + 24);
    goto LABEL_26;
  }
  v8 = (_DWORD *)operator new(0x2CuLL, 0x4E506456u, 256LL);
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 13416;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  if ( *(_DWORD *)a2 == 10 )
  {
    v16 = (struct _KTHREAD **)((char *)a2 + 24);
    *v8 = *((_DWORD *)a2 + 6);
  }
  else
  {
    if ( *(_DWORD *)a2 != 11 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 13443;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      return 3221225485LL;
    }
    v16 = (struct _KTHREAD **)((char *)a2 + 24);
    *v8 = *((_DWORD *)a2 + 6);
    v17 = *(_OWORD *)((char *)a2 + 44);
    v18 = *(_QWORD *)((char *)a2 + 60);
    *(_OWORD *)(v8 + 1) = *(_OWORD *)((char *)a2 + 28);
    *(_OWORD *)(v8 + 5) = v17;
    *(_QWORD *)(v8 + 9) = v18;
  }
LABEL_26:
  if ( DXGADAPTER::IsDiagnosticAllowed(this) )
  {
    v25 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(_DWORD *)a2);
    v26 = VIDPN_MGR::AcquireDiagInfo(v6, v16, *((_QWORD *)a2 + 1), v25, v8, (size_t *)a2 + 2);
    v24 = v26;
    if ( v26 == -2147483643 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)a2 + 1), *(int *)a2);
      WdLogGlobalForLineNumber = 13472;
      v24 = 1075707914;
    }
    else if ( v26 >= 0 )
    {
      v29 = WdLogNewEntry5_WdTrace(v28, v27);
      v24 = 0;
      *(_QWORD *)(v29 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v29 + 32) = *(int *)a2;
      WdLogGlobalForLineNumber = 13483;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
    WdLogSingleEntry2(3LL, *(int *)a2, CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 13456;
    v24 = -1073741790;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  return v24;
}
