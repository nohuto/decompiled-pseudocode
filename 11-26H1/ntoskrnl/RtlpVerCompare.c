/*
 * XREFs of RtlpVerCompare @ 0x14048F854
 * Callers:
 *     RtlVerifyVersionInfo @ 0x14048F510 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

bool __fastcall RtlpVerCompare(int a1, int a2, int a3, bool *a4, char a5)
{
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v12; // ebx
  char *v13; // rax
  signed __int64 v14; // r8
  char v15; // cl
  char v16[24]; // [rsp+20h] [rbp-58h] BYREF
  char pszDest[24]; // [rsp+38h] [rbp-40h] BYREF

  if ( (a5 & 1) != 0 )
  {
    RtlStringCbPrintfA(pszDest, 0x14uLL, "%d", a2);
    RtlStringCbPrintfA(v16, 0x14uLL, "%d", a3);
    a2 = 0;
    v13 = v16;
    v14 = pszDest - v16;
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 != v13[v14] )
        break;
      ++v13;
      if ( !v15 )
      {
        a3 = 0;
        goto LABEL_2;
      }
    }
    a3 = (unsigned __int8)*v13 < (unsigned __int8)v13[v14] ? -1 : 1;
  }
LABEL_2:
  *a4 = a2 == a3;
  v8 = a1 - 1;
  if ( !v8 )
    return a3 == a2;
  v9 = v8 - 1;
  if ( !v9 )
    return a3 > a2;
  v10 = v9 - 1;
  if ( !v10 )
    return a3 >= a2;
  v12 = v10 - 1;
  if ( !v12 )
    return a3 < a2;
  if ( v12 == 1 )
    return a3 <= a2;
  return 0;
}
