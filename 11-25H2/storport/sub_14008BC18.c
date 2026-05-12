/*
 * XREFs of sub_14008BC18 @ 0x14008BC18
 * Callers:
 *     sub_14007C48C @ 0x14007C48C (sub_14007C48C.c)
 *     sub_140080D4C @ 0x140080D4C (sub_140080D4C.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140134D18 @ 0x140134D18 (sub_140134D18.c)
 *     sub_140134EF8 @ 0x140134EF8 (sub_140134EF8.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_1401357E8 @ 0x1401357E8 (sub_1401357E8.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008BC18(int *a1, unsigned int a2, char a3, unsigned int a4, __int64 a5, _BYTE *a6)
{
  int v10; // eax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v14; // rdx
  int v15; // r9d
  const char *v16; // r8
  __int64 v17; // r9
  _OWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  _OWORD v20[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _QWORD Dst[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+108h] [rbp+8h]
  _OWORD v25[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+140h] [rbp+40h]

  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  memset_0(Dst, 0, 0x50uLL);
  v19 = 0;
  v26 = 0LL;
  v10 = *a1;
  memset(v18, 0, sizeof(v18));
  memset(v25, 0, sizeof(v25));
  if ( v10 != 1431193940 )
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 757);
    if ( !v11 || !*((_QWORD *)a1 + 758) )
      return (unsigned int)-1073741637;
LABEL_11:
    v12 = sub_14008CC90(a1, a2, Dst, a6);
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( !v23 && !v24 )
      return (unsigned int)-1073741811;
    LOBYTE(v14) = a3;
    v12 = sub_14008C3E8(v11, v14, a4, a5, v18, a6);
    if ( v12 < 0 )
      return (unsigned int)v12;
    LODWORD(v20[0]) = 56;
    v12 = sub_140135288(v11, 2LL, v25);
    if ( v12 < 0 )
    {
      sub_14006FED8(a6, 32LL, (__int64)"TcglibOpenSession");
      return (unsigned int)v12;
    }
    v12 = sub_140135FC4(v11, v25);
    if ( v12 < 0 )
    {
      sub_14006FED8(a6, 32LL, (__int64)"TcglibStartTransaction");
LABEL_28:
      sub_140134A98(v11, v25);
      return (unsigned int)v12;
    }
    sub_140134EF8(v11, v25, a2);
    if ( v23 )
    {
      LOBYTE(v15) = a3;
      v12 = sub_1401357E8(v11, (unsigned int)v25, a2, v15, (__int64)v18, (__int64)v20);
      if ( v12 < 0 )
      {
        v16 = "TcglibSetBandLocationEx";
LABEL_25:
        sub_14006FED8(a6, 32LL, (__int64)v16);
LABEL_27:
        sub_140136054(v11, v25, (unsigned int)v12, v17);
        goto LABEL_28;
      }
    }
    else
    {
      v12 = sub_140134D18(v11, v25, v18, Dst[0]);
      if ( v12 < 0 )
      {
        v16 = "TcglibDeassignNamespaceLocking";
        goto LABEL_25;
      }
    }
    sub_1401355EC(v11, (unsigned int)v25, a2, 1, 1, 1, 0, 0LL, 0LL);
    goto LABEL_27;
  }
  if ( (*((_BYTE *)a1 + 507) & 0x40) == 0 )
  {
    v11 = *((_QWORD *)a1 + 448);
    if ( v11 )
    {
      if ( *((_QWORD *)a1 + 449) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
