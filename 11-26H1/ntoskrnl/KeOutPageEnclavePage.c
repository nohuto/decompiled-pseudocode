/*
 * XREFs of KeOutPageEnclavePage @ 0x1405173FC
 * Callers:
 *     MiDecommitRemoveEnclavePageForce @ 0x140341DE0 (MiDecommitRemoveEnclavePageForce.c)
 * Callees:
 *     KiEnclsStatus @ 0x14034123C (KiEnclsStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KiEncls @ 0x140727FD0 (KiEncls.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KeOutPageEnclavePage(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v8; // [rsp+A0h] [rbp+0h] BYREF

  memset_0((void *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 128), 0, 0x80uLL);
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  *(_QWORD *)((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  v6 = KiEncls(11LL, (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL, a1, a3);
  return KiEnclsStatus(v6);
}
