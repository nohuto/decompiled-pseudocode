/*
 * XREFs of RtlpVerCompare @ 0x180084170
 * Callers:
 *     RtlVerifyVersionInfo @ 0x180082BA0 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180082F60 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x180084260 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

bool __fastcall RtlpVerCompare(int a1, int a2, int a3, bool *a4, char a5)
{
  int v6; // r8d
  unsigned __int8 *v9; // rax
  signed __int64 v10; // rdx
  unsigned __int8 v11; // cl
  int v13; // edi
  int v14; // edi
  int v15; // edi
  _BYTE v16[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2;
  if ( (a5 & 1) != 0 )
  {
    RtlStringCbPrintfA(v17, 20LL, "%d", a2);
    RtlStringCbPrintfA(v16, 20LL, "%d", a3);
    v6 = 0;
    v9 = v16;
    v10 = v17 - v16;
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 != v9[v10] )
        break;
      ++v9;
      if ( !v11 )
      {
        a3 = 0;
        goto LABEL_6;
      }
    }
    a3 = v11 < v9[v10] ? -1 : 1;
  }
LABEL_6:
  *a4 = v6 == a3;
  if ( a1 == 3 )
    return a3 >= v6;
  v13 = a1 - 1;
  if ( !v13 )
    return a3 == v6;
  v14 = v13 - 1;
  if ( !v14 )
    return a3 > v6;
  v15 = v14 - 2;
  if ( !v15 )
    return a3 < v6;
  if ( v15 == 1 )
    return a3 <= v6;
  return 0;
}
