/*
 * XREFs of VslFastFlushSecureRangeList @ 0x1402F5A94
 * Callers:
 *     HvlpFastFlushListTbEx @ 0x1402F4568 (HvlpFastFlushListTbEx.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlpSecureFlushLargeRangeList @ 0x14049C20C (HvlpSecureFlushLargeRangeList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslFastFlushSecureRangeList(int a1, _QWORD *a2, unsigned int a3, _BYTE *a4)
{
  __int64 Process; // rcx
  unsigned int v9; // edx
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
  v9 = 0;
  LOBYTE(Process) = 0;
  if ( a3 )
  {
    v10 = &v16;
    v11 = a3;
    v9 = a3;
    do
    {
      v12 = *a2 < 0x7FFFFFFF0000uLL;
      Process = (unsigned __int8)Process;
      *(_QWORD *)v10 = *a2++;
      if ( v12 )
        Process = 1LL;
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
  if ( !(_BYTE)Process )
  {
    result = 0LL;
    goto LABEL_16;
  }
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v15 = *(_QWORD *)(Process + 368) & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_10:
  if ( v9 < 0xB )
    *(&v15 + v9 + 1) = 0LL;
  LOBYTE(Process) = 2;
  result = VslpEnterIumSecureMode(Process, 257LL, 0LL, v14);
  if ( (int)result >= 0 )
    *a4 = v16;
  return result;
}
