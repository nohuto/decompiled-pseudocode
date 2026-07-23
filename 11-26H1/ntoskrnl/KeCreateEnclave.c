/*
 * XREFs of KeCreateEnclave @ 0x1407BCFEC
 * Callers:
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        __int16 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  bool v9; // zf
  __int64 v10; // rax
  _BYTE v12[32]; // [rsp+60h] [rbp+0h] BYREF

  v9 = (KeFeatureBits & 0x10000000000LL) == 0;
  *a8 = 0;
  if ( v9 )
    return 3221225659LL;
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) && (a6 & 0x100) != 0 || *a4 != a3 )
    return 3221225485LL;
  v10 = a4[6] & 4LL;
  if ( (a6 & 1) != 0 )
  {
    if ( v10 )
      goto LABEL_8;
    return 3221225485LL;
  }
  if ( v10 )
    return 3221225485LL;
LABEL_8:
  a4[1] = a2;
  *a7 = 0;
  if ( (a4[6] & 2) != 0 )
    *a7 = 2;
  memset_0((void *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 64;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  KiEncls(0);
  return 0LL;
}
