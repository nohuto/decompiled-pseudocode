/*
 * XREFs of NtGdiSetFontXform @ 0x1401C7920
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  BOOL v6; // edi
  __int64 v7; // rax
  int v8; // xmm1_4
  float v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v11[14]; // [rsp+30h] [rbp-78h] BYREF
  int v12; // [rsp+C8h] [rbp+20h] BYREF

  v10[0] = 0.0;
  v12 = 0;
  v5 = 1;
  v6 = bConvertDwordToFloat(a2, v10) && bConvertDwordToFloat(a3, (float *)&v12);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v6 )
  {
    v7 = v11[0];
    if ( v11[0] )
    {
      v8 = v12;
      *(float *)(v11[0] + 452LL) = v10[0];
      *(_DWORD *)(v7 + 456) = v8;
      *(_DWORD *)(v11[0] + 252LL) |= 1u;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v5;
}
