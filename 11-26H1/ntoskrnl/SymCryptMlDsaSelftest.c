/*
 * XREFs of SymCryptMlDsaSelftest @ 0x140565630
 * Callers:
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x1404CF078 (SymCryptRestoreXmm.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerify @ 0x140560288 (SymCryptMlDsaVerify.c)
 *     SymCryptMlDsakeyAllocate @ 0x1405606F0 (SymCryptMlDsakeyAllocate.c)
 *     SymCryptMlDsakeyFree @ 0x140560798 (SymCryptMlDsakeyFree.c)
 *     SymCryptMlDsakeyGetValue @ 0x1405607C0 (SymCryptMlDsakeyGetValue.c)
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 *     SymCryptFatal @ 0x1405E7EE8 (SymCryptFatal.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 SymCryptMlDsaSelftest()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  _QWORD *v2; // rdi

  v0 = SymCryptCallbackAlloc(4980LL);
  if ( !v0 )
    SymCryptFatal(1179209811LL);
  v1 = SymCryptMlDsakeyAllocate(1LL);
  v2 = (_QWORD *)v1;
  if ( !v1 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptMlDsakeySetValue(rgbMlDsaKeyPrivateSeed, 32LL, 1, 0x100u, v1) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptMlDsakeyGetValue((__int64)v2, (_OWORD *)(v0 + 2420), 0xA00uLL, 2, 0) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( memcmp((const void *)(v0 + 2420), mlDsaPrivateKey, 0xA00uLL) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptMlDsaSignEx(
                       v2,
                       rgbMlDsaSelfTestMessage,
                       32LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL,
                       (__int64)rgbMlDsaSelfTestMessage,
                       32LL,
                       0,
                       (void *)v0) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( memcmp((const void *)v0, rgbMlDsaSelfTestSignature, 0x974uLL) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptMlDsaVerify((__int64)v2, (int)rgbMlDsaSelfTestMessage, 32, 0, 0LL, v0, 2420LL, 0) )
    SymCryptFatal(1179209811LL);
  SymCryptMlDsakeyFree((__int64)v2);
  SymCryptWipe(v0, 0x1374uLL);
  return SymCryptCallbackFree(v0);
}
