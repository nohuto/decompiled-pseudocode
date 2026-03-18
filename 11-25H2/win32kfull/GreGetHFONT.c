/*
 * XREFs of GreGetHFONT @ 0x14021EDF8
 * Callers:
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x14021EDAC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0LL;
  if ( v3[0] )
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 976LL) + 296LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
