/*
 * XREFs of RtlFindMessage @ 0x18002E740
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18002FFB0 (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned __int16 **a5)
{
  unsigned int v5; // esi
  __int64 result; // rax
  int v9; // edx
  unsigned int *i; // rax
  unsigned __int16 *v12; // rdx
  unsigned int v13; // ebx
  int v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  int *v17; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-30h] BYREF

  v5 = 0;
  v18[0] = a2;
  v18[2] = a3;
  v16 = 0LL;
  v17 = 0LL;
  v15 = 0;
  v18[1] = 1LL;
  v18[3] = a4;
  result = LdrpSearchResourceSection_U(a1, (unsigned int)v18, 4, 64, (__int64)&v16);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v16, &v17, &v15);
    if ( (int)result >= 0 )
    {
      v9 = *v17;
      for ( i = (unsigned int *)(v17 + 1); ; i += 3 )
      {
        if ( !v9-- )
          return (unsigned int)-1073741559;
        if ( a4 >= *i && a4 <= i[1] )
          break;
      }
      v12 = (unsigned __int16 *)((char *)v17 + i[2]);
      v13 = a4 - *i;
      while ( v13-- )
      {
        v12 = (unsigned __int16 *)((char *)v12 + *v12);
        if ( v12 > (unsigned __int16 *)((char *)v17 + (unsigned int)(v15 - 1)) )
          return (unsigned int)-1073741559;
      }
      *a5 = v12;
      return v5;
    }
  }
  return result;
}
