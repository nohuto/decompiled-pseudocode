/*
 * XREFs of ??1?$unique_ptr@VWinUICohabitationFunctions@@U?$default_delete@VWinUICohabitationFunctions@@@std@@@std@@QEAA@XZ @ 0x18044AE60
 * Callers:
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180281120 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 * Callees:
 *     ??R?$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z @ 0x18044AF98 (--R-$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<WinUICohabitationFunctions>::~unique_ptr<WinUICohabitationFunctions>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<WinUICohabitationFunctions>::operator()();
  return result;
}
