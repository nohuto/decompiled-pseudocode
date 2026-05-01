/*
 * XREFs of CrmGlobalsInitialize @ 0x180075428
 * Callers:
 *     PsmCrmCleanup @ 0x180074500 (PsmCrmCleanup.c)
 *     PsmCrmStart @ 0x180074520 (PsmCrmStart.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 CrmGlobalsInitialize()
{
  __int64 result; // rax

  memset_0(&CrmGlobals, 0, 0x3A8uLL);
  CempLockInitialize((__int64)&unk_1800E3938);
  xmmword_1800E3948 = 0LL;
  CempLockInitialize((__int64)&CrmGlobals);
  CempLockInitialize((__int64)&unk_1800E3958);
  xmmword_1800E3968 = 0LL;
  CempLockInitialize((__int64)&unk_1800E3A08);
  CempLockInitialize((__int64)&unk_1800E3978);
  unk_1800E39A0 = 0LL;
  qword_1800E39D0 = 0LL;
  xmmword_1800E39B0 = 0LL;
  xmmword_1800E39C0 = 0LL;
  CempLockInitialize((__int64)&unk_1800E39A0);
  result = 0LL;
  xmmword_1800E39C0 = 0LL;
  qword_1800E39D0 = 0LL;
  return result;
}
