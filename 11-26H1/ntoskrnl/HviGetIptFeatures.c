/*
 * XREFs of HviGetIptFeatures @ 0x1406E0B48
 * Callers:
 *     KiGetIptInfo @ 0x1405EF4C8 (KiGetIptInfo.c)
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404DF8B8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HviGetIptFeatures(_DWORD *a1)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result
    && (result = HviGetHypervisorVendorAndMaxFunction(&v7), (unsigned int)v7 >= 0x4000000B)
    && (result = HviGetHypervisorFeatures(&v8), (HIDWORD(v8) & 0x8000000) != 0) )
  {
    _RAX = 1073741835LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
