/*
 * XREFs of ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x140192CDC
 * Callers:
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402F9E60 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CheckNoKmdAccessPrivateData(unsigned int a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rbx
  const wchar_t *v4; // r9

  if ( a1 )
  {
    if ( a1 < 0x108 )
    {
      v3 = a1;
      WdLogSingleEntry1(2LL);
      v4 = L"Invalid private driver data size for NoKmdAccess: %I64d";
      WdLogGlobalForLineNumber = 390;
LABEL_4:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *a2 != a3 || a2[65] != a3 + 1 )
    {
      v3 = a3;
      WdLogSingleEntry1(2LL);
      v4 = L"Invalid private driver data tag for NoKmdAccess: %I64d";
      WdLogGlobalForLineNumber = 396;
      goto LABEL_4;
    }
  }
  return 0LL;
}
