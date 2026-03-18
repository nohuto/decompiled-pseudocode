/*
 * XREFs of ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D7584
 * Callers:
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D74D8 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140039928 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __report_rangecheckfailure @ 0x14006E400 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D71CC (-EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITET.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumSingleRegistry(__int64 a1, const void **a2, char *a3, int a4, int a5)
{
  size_t v5; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int16 v12[264]; // [rsp+20h] [rbp-248h] BYREF

  v5 = *(unsigned __int16 *)a2;
  if ( (unsigned __int16)v5 >= 0x208u )
    return 3221225473LL;
  memmove(v12, a2[1], v5);
  if ( (v5 & 0xFFFE) >= 0x206 )
  {
    v11 = 518LL;
  }
  else
  {
    v11 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFFEuLL) >= 0x208 )
      _report_rangecheckfailure();
  }
  *(unsigned __int16 *)((char *)v12 + v11) = 0;
  result = RtlStringCbCatW(v12, v10, a3);
  if ( (int)result >= 0 )
    return CDriverStoreCopy::EnumDriverFileLinks(a1, v12, a4, a5);
  return result;
}
