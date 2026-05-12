/*
 * XREFs of sub_14008CC90 @ 0x14008CC90
 * Callers:
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136D10 @ 0x140136D10 (sub_140136D10.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008CC90(int *a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  int v5; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  int v12; // eax
  _OWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v5 = *a1;
  memset(v13, 0, sizeof(v13));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 448);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 449);
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 757);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 758);
  }
  if ( v9 )
  {
    v10 = sub_140135288(v8, 2LL, v13);
    if ( v10 < 0 )
    {
      sub_14006FED8(a4, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v10;
    }
    if ( a3 )
    {
      v10 = sub_140136180(v8, v13);
      if ( !v10 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)&v13[1] + 3, 1, 0) == 1 )
        {
          v10 = -2147483631;
          goto LABEL_23;
        }
        v12 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64))sub_140136D10)(v8, v13, a2, a3);
        v10 = v12;
        if ( v12 < 0 )
          v10 = sub_1401361CC(v8, v13, (unsigned int)v12);
        _InterlockedExchange((volatile __int32 *)&v13[1] + 3, 0);
      }
      if ( v10 >= 0 )
      {
        *(_QWORD *)(a3 + 48) *= *(unsigned int *)(v9 + 100);
        *(_QWORD *)(a3 + 56) *= *(unsigned int *)(v9 + 100);
        goto LABEL_25;
      }
    }
    else
    {
      v10 = -1073741811;
    }
LABEL_23:
    sub_14006FED8(a4, 32LL, (__int64)"TcglibGetLockingObject");
LABEL_25:
    sub_140134A98(v8, v13);
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741637;
}
