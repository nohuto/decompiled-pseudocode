/*
 * XREFs of LdrpResCompareResourceNames @ 0x1800A9450
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A7B80 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     LdrpResReadFile @ 0x1800A96A8 (LdrpResReadFile.c)
 *     wcsncmp @ 0x18012D9F0 (wcsncmp.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v8; // r14d
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int16 *v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  unsigned __int16 *v18; // [rsp+28h] [rbp-270h]
  __int64 v20; // [rsp+38h] [rbp-260h]
  _BYTE v21[528]; // [rsp+40h] [rbp-258h] BYREF

  v8 = 0;
  v20 = a3;
  if ( !a5 || !a6 )
    return 3221225485LL;
  v12 = *a6;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v12 >= 0 )
    {
      if ( (a7 & 0x1000) == 0 || (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        *a8 = (_DWORD)a4 - v12;
        return v8;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
LABEL_23:
    *a8 = 1;
    return v8;
  }
  if ( (int)v12 >= 0 )
  {
    *a8 = -1;
    return v8;
  }
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v14 = (unsigned __int16 *)(v12 + a5);
  v18 = (unsigned __int16 *)(v12 + a5);
  if ( (a7 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v14 < a5 )
      return (unsigned int)-1073741701;
    if ( (a7 & 0x8800) == 0x8800 )
      goto LABEL_31;
    if ( (unsigned __int64)(v14 + 2) < a5 || (unsigned __int64)(v14 + 2) > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
      return (unsigned int)-1073741701;
  }
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_14:
    if ( (a7 & 0x1000) != 0 && (a7 & 0x8800) != 0x8800 )
    {
      v15 = v12 + a5 + 2 * (*v14 + 2LL);
      if ( v15 < a5 || v15 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        return (unsigned int)-1073741701;
    }
    if ( ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v16 = wcsncmp(a4, v14 + 1, *v14);
    if ( v16 )
      goto LABEL_26;
    v17 = -1LL;
    do
      ++v17;
    while ( a4[v17] );
    if ( v17 == *v18 )
    {
LABEL_26:
      *a8 = v16;
      return v8;
    }
    goto LABEL_23;
  }
LABEL_31:
  result = LdrpResReadFile(a2);
  if ( (int)result >= 0 )
  {
    result = LdrpResReadFile(a2);
    v8 = result;
    if ( (int)result >= 0 )
    {
      a3 = v20;
      v14 = (unsigned __int16 *)v21;
      v18 = (unsigned __int16 *)v21;
      goto LABEL_14;
    }
  }
  return result;
}
