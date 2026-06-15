/*
 * XREFs of sub_140073E50 @ 0x140073E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140073B04 @ 0x140073B04 (sub_140073B04.c)
 */

__int64 __fastcall sub_140073E50(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  IID *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (IID *)CoTaskMemAlloc(0xE0uLL);
  if ( v6 )
  {
    v10 = 2;
    *v6 = *(IID *)&dword_1400C6698;
    v6[1] = stru_1400C65A8;
    sub_140073B04(v7, &v10, (__int64)v6);
    *a2 = 14;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
