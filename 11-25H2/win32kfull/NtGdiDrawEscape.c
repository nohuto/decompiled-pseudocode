/*
 * XREFs of NtGdiDrawEscape @ 0x140339130
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x140327864 (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x140338D2C (-init_probe@-$umptr_r@D@@SA-AV1@PEAD_K1@Z.c)
 */

__int64 __fastcall NtGdiDrawEscape(HDC a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *inited; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-59h] BYREF
  __int64 v12; // [rsp+30h] [rbp-51h]
  __int64 v13; // [rsp+38h] [rbp-49h]
  __int16 v14; // [rsp+40h] [rbp-41h]
  _QWORD v15[14]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v16[32]; // [rsp+B8h] [rbp+37h] BYREF

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    inited = umptr_r<char>::init_probe((__int64)v16, a4, a3);
    v9 = *inited;
    v12 = inited[1];
    v10 = inited[2];
    v14 = *((_WORD *)inited + 12);
    v11 = v9;
    v13 = v10;
    if ( v9 )
      goto LABEL_5;
  }
  else if ( !a3 )
  {
LABEL_5:
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
    if ( v15[0] )
      v4 = GrepDrawEscape((XDCOBJ *)v15, a2, &v11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
    return v4;
  }
  return (unsigned int)-1;
}
