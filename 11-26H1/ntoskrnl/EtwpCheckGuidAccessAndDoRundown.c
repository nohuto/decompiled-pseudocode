/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x140A99B60
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140A99808 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x140A99D58 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int16 **a5,
        unsigned int a6)
{
  __int64 result; // rax
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // edx
  unsigned int i; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // r9d
  _OWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
  v11 = result;
  if ( (int)result >= 0 )
  {
    if ( a3 >= *(_DWORD *)(a1 + 16) )
      return 3221225480LL;
    v12 = *((_DWORD *)a5 + 3);
    if ( v12 == -2147483647 )
    {
      v13 = *((_DWORD *)a5 + 2);
      if ( v13 <= 0x20 && (v13 & 3) == 0 )
      {
        for ( i = 1; i < a6; ++i )
        {
          if ( HIDWORD(a5[2 * i + 1]) == -2147483644 && ((__int64)a5[2 * i + 1] & 3) != 0 )
            return 3221225485LL;
        }
        memmove(v18, *a5, *((unsigned int *)a5 + 2));
        v15 = a6 - 1;
        v16 = (__int64)(a5 + 2);
        LOBYTE(v17) = a4;
        if ( a6 <= 1 )
        {
          v15 = 0;
          v16 = 0LL;
        }
        EtwpLogKernelTraceRundown(a1, a3, (unsigned int)v18, v17, v16, v15);
        return v11;
      }
    }
    else
    {
      if ( v12 != -2147483646 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)a5 + 2) == 8 )
      {
        LOBYTE(v10) = a4;
        return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, **a5, a3, v10);
      }
    }
    return 3221225485LL;
  }
  return result;
}
