/*
 * XREFs of ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x1800976E4
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180078CD0 (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall MPCConstantManager::Create(struct MPCManagerConnection *a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct MPCManagerConnection *v4; // [rsp+30h] [rbp+8h] BYREF
  struct MPCManagerConnection **v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1;
  v5 = &v4;
  std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___((__int64)a1, &v5);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v1);
  return 0LL;
}
