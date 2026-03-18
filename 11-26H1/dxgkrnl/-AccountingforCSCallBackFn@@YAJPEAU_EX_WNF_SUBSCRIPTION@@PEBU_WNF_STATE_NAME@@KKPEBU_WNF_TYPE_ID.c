/*
 * XREFs of ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140419E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1403B3D88 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 *     ?InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z @ 0x140419F28 (-InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z.c)
 */

__int64 __fastcall AccountingforCSCallBackFn(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  __int64 result; // rax
  DXGGLOBAL *Global; // rbx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v8 = a4;
  v7 = 24;
  Buf1 = 0LL;
  v10 = 0LL;
  v4 = ExQueryWnfStateData(a1, &v8, &Buf1, &v7);
  if ( v4 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !memcmp(&Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
    {
      DXGGLOBAL::InitializeCSAccounting(Global, v10);
    }
    else if ( !memcmp(&Buf1, &GUID_SPM_DEFAULT, 0x10uLL) )
    {
      DXGGLOBAL::FinalizeCSAccountingAndSendETW(Global);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 66;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = (unsigned int)v4;
    WdLogGlobalForLineNumber = 49;
  }
  return result;
}
