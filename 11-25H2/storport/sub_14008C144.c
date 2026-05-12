/*
 * XREFs of sub_14008C144 @ 0x14008C144
 * Callers:
 *     sub_14007D030 @ 0x14007D030 (sub_14007D030.c)
 *     sub_14008191C @ 0x14008191C (sub_14008191C.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140134EF8 @ 0x140134EF8 (sub_140134EF8.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008C144(int *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // ebx
  _OWORD v10[2]; // [rsp+30h] [rbp-41h] BYREF
  int v11; // [rsp+50h] [rbp-21h]
  _OWORD v12[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]

  v11 = 0;
  v13 = 0LL;
  v5 = *a1;
  v6 = a2;
  memset(v10, 0, sizeof(v10));
  memset(v12, 0, sizeof(v12));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 || (v7 = *((_QWORD *)a1 + 448)) == 0 || !*((_QWORD *)a1 + 449) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 757);
    if ( !v7 || !*((_QWORD *)a1 + 758) )
      return (unsigned int)-1073741637;
  }
  LOBYTE(a2) = 1;
  v8 = sub_14008C3E8(v7, a2, a3, a4, v10, a5);
  if ( v8 >= 0 )
  {
    v8 = sub_140135288(v7, 2LL, v12);
    if ( v8 >= 0 )
    {
      v8 = sub_140134EF8(v7, v12, v6);
      if ( v8 < 0 )
        sub_14006FED8(a5, 32LL, (__int64)"TcglibEraseBand");
      sub_140134A98(v7, v12);
    }
    else
    {
      sub_14006FED8(a5, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
