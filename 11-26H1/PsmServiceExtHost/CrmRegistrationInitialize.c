/*
 * XREFs of CrmRegistrationInitialize @ 0x1800309EC
 * Callers:
 *     CrmSrvRegister @ 0x180031590 (CrmSrvRegister.c)
 *     CrmRpcSrvRegister @ 0x180031660 (CrmRpcSrvRegister.c)
 *     CrmGlobalsStartCrmRegistrations @ 0x18007788C (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

_QWORD *__fastcall CrmRegistrationInitialize(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x98uLL);
  CempLockInitialize(a1);
  result = a1 + 7;
  a1[8] = a1 + 7;
  a1[7] = a1 + 7;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = -1LL;
  return result;
}
