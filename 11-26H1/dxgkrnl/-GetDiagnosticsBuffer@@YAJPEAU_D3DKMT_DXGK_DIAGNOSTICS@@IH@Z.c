/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x140191B04
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401CE7BC (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, unsigned int a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rcx
  DXGDIAGNOSTICS *v9; // rcx
  _OWORD v11[4]; // [rsp+50h] [rbp-58h] BYREF

  v5 = -1073741811;
  if ( a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    if ( a2 == v6 + 4 )
    {
      if ( a3 )
      {
        if ( (_DWORD)v6 )
        {
          DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer();
          Global = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::IterateAdaptersWithCallback(Global, LogActivePathPresentHistoryCallback, 0LL, 4LL);
          memset(v11, 0, sizeof(v11));
          *((_QWORD *)&v11[3] + 1) = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime((PLARGE_INTEGER)&v11[3] + 1, (PLARGE_INTEGER)&v11[3]);
          v11[0] = 0x400000000AuLL;
          memset(&v11[1], 0, 28);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11);
        }
      }
      v8 = DXGGLOBAL::GetGlobal();
      if ( v8 )
      {
        v9 = *(DXGDIAGNOSTICS **)((char *)v8 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 976);
        if ( !v9 )
        {
          WdLogSingleEntry2(2LL, a1, 0LL);
          WdLogGlobalForLineNumber = 740;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, pDiagnostics = 0x%I64x",
            (__int64)a1,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(
                               v9,
                               (unsigned __int8 *)a1 + 4,
                               (unsigned int *)a1,
                               0xFFFFFFFF);
      }
    }
  }
  return v5;
}
