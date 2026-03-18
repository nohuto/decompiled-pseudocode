/*
 * XREFs of DxgkNotifyCursorSupportChangeCB @ 0x1401F3250
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 */

__int64 __fastcall DxgkNotifyCursorSupportChangeCB(__int64 a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // r9
  __int64 DxgAdapter; // rax
  struct _LUID *v6; // rdx
  DXGADAPTER *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  _OWORD v10[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2225;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2225LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    v2 = 2229LL;
    v3 = L"pArgs(NULL) in DxgkNotifyCursorSupportChangeCB function";
    WdLogGlobalForLineNumber = 2229;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, v2, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1);
  v7 = (DXGADAPTER *)DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL);
    v2 = *(_QWORD *)a1;
    v3 = L"Invalid hAdapter(0x%I64x) in DxgkNotifyCursorSupportChangeCB function.";
    WdLogGlobalForLineNumber = 2236;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(DxgAdapter + 3160);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2242;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-display adapter (0x%I64x) in DxgkNotifyCursorSupportChangeCB function",
      (__int64)v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(v8 + 96) )
  {
    WdLogSingleEntry1(2LL);
    v2 = *(unsigned int *)(a1 + 8);
    v3 = L"Invalid VidPnSourceId : (0x%I64x) in DxgkNotifyCursorSupportChangeCB function.";
    WdLogGlobalForLineNumber = 2248;
    goto LABEL_5;
  }
  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[0]) = 13;
  DXGADAPTER::IsAdapterSessionized(v7, v6, 0LL, &v11);
  return SMgrGdiCallout(v10, v11, v9, 0LL, 0LL, 0LL);
}
