/*
 * XREFs of GreSelectBrush @ 0x1401373C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectBrush(HDC a1, struct HOBJ__ *a2)
{
  __int64 v3; // rbx
  __int64 v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GreDCSelectBrush(v5[0], a2);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
