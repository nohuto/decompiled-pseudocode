/*
 * XREFs of HashStringToDwordCaseInsensitiveLen @ 0x180120844
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 */

__int64 __fastcall HashStringToDwordCaseInsensitiveLen(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r11d
  int v3; // ebx
  int i; // esi
  unsigned __int16 v6; // ax
  int v7; // r11d
  int v8; // r11d

  v2 = 0;
  v3 = a2;
  for ( i = 31415; v3; --v3 )
  {
    v6 = NLS_UPCASE(qword_1801C5038, *a1);
    v8 = i * v7;
    ++a1;
    i *= 27183;
    v2 = v6 + v8;
  }
  return v2;
}
