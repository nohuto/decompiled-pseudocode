/*
 * XREFs of VslFastFlushSecureRangeList @ 0x1403E8BB4
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1403E7688 (HvlpFastFlushListTbEx.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1404A27EC (HvlpSecureFlushLargeRangeList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslFastFlushSecureRangeList(int a1, _QWORD *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v8; // edx
  char v9; // cl
  char *v10; // r8
  __int64 v11; // r9
  bool v12; // cf
  __int64 result; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-80h]
  char v16; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v14, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
  {
    result = 255LL;
LABEL_16:
    *a4 = 0;
    return result;
  }
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    v10 = &v16;
    v11 = a3;
    v8 = a3;
    do
    {
      v12 = *a2 < 0x7FFFFFFF0000uLL;
      *(_QWORD *)v10 = *a2++;
      if ( v12 )
        v9 = 1;
      v10 += 8;
      --v11;
    }
    while ( v11 );
  }
  if ( a1 != 1 )
  {
    v15 = 0LL;
    goto LABEL_10;
  }
  if ( !v9 )
  {
    result = 0LL;
    goto LABEL_16;
  }
  v15 = KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_10:
  if ( v8 < 0xB )
    *(&v15 + v8 + 1) = 0LL;
  result = VslpEnterIumSecureMode(2u, 0x101u, 0, (__int64)v14);
  if ( (int)result >= 0 )
    *a4 = v16;
  return result;
}
