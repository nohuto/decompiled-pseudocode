/*
 * XREFs of ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D5688
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall ForceGpupTdr(struct _D3DKMT_DRT_ESCAPE_HEAD *a1)
{
  __int64 v1; // rax
  const wchar_t *v2; // r9
  struct DXGGLOBAL *Global; // rax

  if ( *((_DWORD *)a1 + 1) < 0x10u )
  {
    WdLogSingleEntry0(2LL);
    v1 = 207LL;
    v2 = L"Invalid command size for D3DKMT_DRT_TEST_COMMAND_GPUP_TDR";
LABEL_3:
    WdLogGlobalForLineNumber = v1;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v2, v1, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_DWORD *)a1 + 3) )
  {
    WdLogSingleEntry0(2LL);
    v1 = 213LL;
    v2 = L"Invalid flags for D3DKMT_DRT_TEST_COMMAND_GPUP_TDR";
    goto LABEL_3;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(Global, ForceGpupTdrCallback, 0LL, 0LL);
  return 0LL;
}
