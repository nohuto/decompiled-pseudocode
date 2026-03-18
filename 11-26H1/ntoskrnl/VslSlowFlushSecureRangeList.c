/*
 * XREFs of VslSlowFlushSecureRangeList @ 0x1404A26E0
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1403E7DF8 (HvlpSlowFlushListTbEx.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1404A27EC (HvlpSecureFlushLargeRangeList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslSlowFlushSecureRangeList(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v7; // rsi
  __int64 i; // rcx
  __int64 result; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-90h]
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]

  v7 = a4;
  memset_0(v12, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
  {
    result = 255LL;
LABEL_10:
    *a6 = 0;
    return result;
  }
  if ( a3 == 1 )
  {
    v13 = KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(a5 + a2 + 8 * i) < 0x7FFFFFFF0000uLL )
        goto LABEL_6;
    }
    result = 0LL;
    goto LABEL_10;
  }
LABEL_6:
  v16 = a5;
  v14 = a1;
  v15 = v7;
  result = VslpEnterIumSecureMode(2u, 0x102u, 0, (__int64)v12);
  if ( (int)result >= 0 )
    *a6 = v14;
  return result;
}
