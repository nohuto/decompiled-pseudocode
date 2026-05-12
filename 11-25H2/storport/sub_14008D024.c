/*
 * XREFs of sub_14008D024 @ 0x14008D024
 * Callers:
 *     sub_14007CA18 @ 0x14007CA18 (sub_14007CA18.c)
 *     sub_1400812FC @ 0x1400812FC (sub_1400812FC.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008CA58 @ 0x14008CA58 (sub_14008CA58.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135108 @ 0x140135108 (sub_140135108.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008D024(int *a1, _QWORD *a2, _BYTE *a3)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // ebx
  size_t v10; // rbx
  void *v11; // rax
  void *v12; // rdi
  __int64 i; // rcx
  __int64 v14; // rdx
  _OWORD v15[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = 0LL;
  v4 = *a1;
  memset(v15, 0, sizeof(v15));
  if ( v4 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 448);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 449);
  }
  else
  {
    if ( v4 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 757);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 758);
  }
  if ( !v7 )
    return (unsigned int)-1073741637;
  v10 = (unsigned int)(80 * *(_DWORD *)(v7 + 128));
  v11 = (void *)sub_1400143E0(256LL, v10, 1129603410LL, *((_QWORD *)a1 + 1));
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741801;
  memset_0(v11, 0, v10);
  v8 = sub_140135288(v6, 2LL, v15);
  if ( v8 < 0 )
  {
    sub_14006FED8(a3, 32LL, (__int64)"TcglibOpenSession");
LABEL_22:
    ExFreePoolWithTag(v12, 0x43546152u);
    return (unsigned int)v8;
  }
  v8 = sub_140135108(v6, v15, *(unsigned int *)(v7 + 128), v12);
  if ( v8 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 128); *((_QWORD *)v12 + v14 + 7) *= *(unsigned int *)(v7 + 100) )
    {
      v14 = 10 * i;
      i = (unsigned int)(i + 1);
      *((_QWORD *)v12 + v14 + 6) *= *(unsigned int *)(v7 + 100);
    }
    *a2 = v12;
    v12 = 0LL;
  }
  else
  {
    sub_14006FED8(a3, 32LL, (__int64)"TcglibGetLockingObjects");
  }
  sub_140134A98(v6, v15);
  if ( v12 )
    goto LABEL_22;
  return (unsigned int)v8;
}
