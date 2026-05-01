/*
 * XREFs of ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180201AE4
 * Callers:
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x1804697C8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x1804698C8 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_8564353b7dc6971d7da83ff0ca7e4bd3_::operator() @ 0x18046A97C (_lambda_8564353b7dc6971d7da83ff0ca7e4bd3_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18046C558 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
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
