/*
 * XREFs of _lambda_eba40ec2e57c463160aa5102b24468e6_::operator() @ 0x1402137D0
 * Callers:
 *     ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x140189FE0 (-CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(__int64 a1, CInputDest *a2, char *a3)
{
  char v3; // al

  v3 = 0;
  if ( *a3 || *((_DWORD *)a2 + 23) )
    v3 = 1;
  *a3 = v3;
  CInputDest::~CInputDest(a2);
}
