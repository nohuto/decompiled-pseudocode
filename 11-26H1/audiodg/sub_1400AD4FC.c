/*
 * XREFs of sub_1400AD4FC @ 0x1400AD4FC
 * Callers:
 *     sub_1400AD820 @ 0x1400AD820 (sub_1400AD820.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400AD4FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 MessageAttribute; // rax
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v11[4]; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+54h] [rbp-34h]

  v9 = 0LL;
  result = AlpcInitializeMessageAttribute(0x10000000LL, v11, 32LL, &v9);
  if ( (int)result >= 0 )
  {
    MessageAttribute = AlpcGetMessageAttribute(v11, 0x10000000LL);
    if ( MessageAttribute )
    {
      v12 = 0x10000000;
      *(_QWORD *)(MessageAttribute + 8) = a5;
      *(_DWORD *)MessageAttribute = 0;
      *(_DWORD *)(MessageAttribute + 20) = 1048578;
      v10 = 48LL;
      result = NtAlpcSendWaitReceivePort(a2, 0x20000LL, a3, v11, a3, &v10, 0LL, 0LL);
      if ( (int)result >= 0 && *(int *)(a3 + 44) < 0 )
        return *(unsigned int *)(a3 + 44);
    }
    else
    {
      result = 3221225480LL;
      *(_DWORD *)(a3 + 44) = -1073741816;
    }
  }
  return result;
}
