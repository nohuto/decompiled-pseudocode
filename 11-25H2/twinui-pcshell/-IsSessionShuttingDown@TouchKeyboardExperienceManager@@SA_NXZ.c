/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18020E8D8
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_5a946cfacaeb0e3185d961cd96352272_::operator() @ 0x18045D974 (_lambda_5a946cfacaeb0e3185d961cd96352272_--operator().c)
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 *     _lambda_be5c4a08901c2da5d7e3733dfd359dd1_::operator() @ 0x18045E918 (_lambda_be5c4a08901c2da5d7e3733dfd359dd1_--operator().c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045FFC4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049___::Run @ 0x1804643E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049___--Run.c)
 * Callees:
 *     <none>
 */

char TouchKeyboardExperienceManager::IsSessionShuttingDown(void)
{
  char v0; // bl
  SC_HANDLE v1; // rax

  v0 = 0;
  if ( GetSystemMetrics(0x2000) )
    return 1;
  v1 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( !v1 )
    return GetLastError() == 1115;
  CloseServiceHandle(v1);
  return v0;
}
