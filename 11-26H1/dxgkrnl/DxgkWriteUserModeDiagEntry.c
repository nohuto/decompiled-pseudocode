/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x140400098
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rbp
  __int64 CurrentProcess; // rax
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  DXGDIAGNOSTICS *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-38h]

  if ( *((_DWORD *)a1 + 1) >= 0x400u )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)a1 + 1), 1024LL);
    v13 = *((unsigned int *)a1 + 1);
    WdLogGlobalForLineNumber = 11901;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"User mode packet size of 0x%I64x is bigger than max allowed (0x%I64x)",
      v13,
      1024LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( Global )
    {
      CurrentProcess = PsGetCurrentProcess(v2);
      v5 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_DWORD *)a1 + 9) &= ~0x80000000;
      *((_OWORD *)a1 + 1) = v5;
      *((_DWORD *)a1 + 9) ^= (PsGetCurrentProcessSessionId(v7, v6, v8, v9) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
      *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
      v10 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v10 * KeQueryTimeIncrement();
      v11 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 122);
      if ( v11 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v11, a1);
      WdLogSingleEntry2(2LL, a1, Global);
      WdLogGlobalForLineNumber = 11931;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; i_pHeader = 0x%I64x, DXGGLOBAL::m_pDxgGlobal = 0x%I64x",
        (__int64)a1,
        (__int64)Global,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11908;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to obtain DXGGLOBAL singleton; pKmHeader = 0x%I64x",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225860LL;
  }
}
