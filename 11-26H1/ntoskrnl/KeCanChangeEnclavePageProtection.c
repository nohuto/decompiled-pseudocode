/*
 * XREFs of KeCanChangeEnclavePageProtection @ 0x1405F10B0
 * Callers:
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403432BC (KiEnclsStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeCanChangeEnclavePageProtection(__int64 a1)
{
  _DWORD *v1; // rbp
  int v3; // eax
  __int64 result; // rax
  _DWORD v5[16]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (_DWORD *)((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) )
    return 3221225659LL;
  memset_0(v1 + 16, 0, 0x40uLL);
  *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 7;
  do
    v3 = KiEncls(14LL, v1 + 16, a1, 0LL);
  while ( v3 == 15 );
  result = KiEnclsStatus(v3);
  *v1 = result;
  return result;
}
