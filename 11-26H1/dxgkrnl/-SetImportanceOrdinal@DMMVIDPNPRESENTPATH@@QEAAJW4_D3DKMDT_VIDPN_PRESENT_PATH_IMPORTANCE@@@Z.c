/*
 * XREFs of ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x140053C58
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140097080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetImportanceOrdinal(DMMVIDPNPRESENTPATH *this, int a2)
{
  __int64 result; // rax

  if ( a2 && (a2 <= 32 || a2 == 255) )
  {
    *((_DWORD *)this + 26) = a2;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192388LL;
    WdLogGlobalForLineNumber = 426;
  }
  return result;
}
