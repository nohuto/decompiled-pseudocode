/*
 * XREFs of KeOutPageEnclavePage @ 0x140510E6C
 * Callers:
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403432BC (KiEnclsStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
