/*
 * XREFs of sub_14008EAAC @ 0x14008EAAC
 * Callers:
 *     sub_14007FBF0 @ 0x14007FBF0 (sub_14007FBF0.c)
 *     sub_1400845D8 @ 0x1400845D8 (sub_1400845D8.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_1401354B4 @ 0x1401354B4 (sub_1401354B4.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008EAAC(
        int *a1,
        int a2,
        int a3,
        unsigned int a4,
        const void *a5,
        unsigned int a6,
        const void *a7,
        _BYTE *a8)
{
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ebx
  const char *v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-79h] BYREF
  int v16; // [rsp+50h] [rbp-59h]
  _OWORD v17[2]; // [rsp+58h] [rbp-51h] BYREF
  int v18; // [rsp+78h] [rbp-31h]
  _OWORD v19[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+7h]

  v18 = 0;
  v16 = 0;
  v20 = 0LL;
  v9 = *a1;
  memset(v17, 0, sizeof(v17));
  memset(v15, 0, sizeof(v15));
  memset(v19, 0, sizeof(v19));
  if ( v9 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *((_QWORD *)a1 + 448);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 449);
  }
  else
  {
    if ( v9 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *((_QWORD *)a1 + 757);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 758);
  }
  if ( !v11 )
    return (unsigned int)-1073741637;
  if ( a2 )
  {
    if ( a2 != 1 || a3 != 1 )
      return (unsigned int)-1073741811;
    if ( !*(_BYTE *)(v11 + 53) )
      return (unsigned int)-1073741637;
  }
  else if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  v12 = sub_14008C3E8(v10, 1, a4, a5, (unsigned int *)v17, a8);
  if ( v12 >= 0 )
  {
    v12 = sub_14008C3E8(v10, 1, a6, a7, (unsigned int *)v15, a8);
    if ( v12 >= 0 )
    {
      v12 = sub_140135288(v10, (unsigned int)(a2 != 0) + 1, v19);
      if ( v12 >= 0 )
      {
        if ( a2 )
        {
          v12 = sub_1401354B4(v10, v19, v17, v15);
          if ( v12 < 0 )
          {
            v14 = "TcglibSetAdmin1Pin";
            goto LABEL_26;
          }
        }
        else
        {
          v12 = sub_140135C8C(v10, v19, v17, v15);
          if ( v12 < 0 )
          {
            v14 = "TcglibSetSidPin";
LABEL_26:
            sub_14006FED8(a8, 32LL, (__int64)v14);
          }
        }
        sub_140134A98(v10, v19);
      }
    }
  }
  return (unsigned int)v12;
}
