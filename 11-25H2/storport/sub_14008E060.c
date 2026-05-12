/*
 * XREFs of sub_14008E060 @ 0x14008E060
 * Callers:
 *     sub_14007E56C @ 0x14007E56C (sub_14007E56C.c)
 *     sub_140082EB4 @ 0x140082EB4 (sub_140082EB4.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_140135334 @ 0x140135334 (sub_140135334.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008E060(int *a1, char a2, unsigned int a3, const void *a4, _BYTE *a5)
{
  int v5; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // r8
  _OWORD v11[2]; // [rsp+30h] [rbp-41h] BYREF
  int v12; // [rsp+50h] [rbp-21h]
  _OWORD v13[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp+17h]

  v12 = 0;
  v14 = 0LL;
  v5 = *a1;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
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
  v8 = sub_14008C3E8(v7, 1, a3, a4, (unsigned int *)v11, a5);
  if ( v8 >= 0 )
  {
    v8 = sub_140135288(v7, 1LL, v13);
    if ( v8 >= 0 )
    {
      LOBYTE(v10) = a2;
      v8 = sub_140135334(v7, v13, v10, v11);
      if ( v8 < 0 )
        sub_14006FED8(a5, 32LL, (__int64)"TcglibRevertLockingSpEx");
      sub_140134A98(v7, v13);
    }
    else
    {
      sub_14006FED8(a5, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
