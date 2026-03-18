/*
 * XREFs of ?vCleanupBrushes@@YAXK@Z @ 0x140085EE8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 */

void __fastcall vCleanupBrushes(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  unsigned int Owned; // ebx
  HBRUSH v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = a1;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v2, (unsigned __int64 *)&v5);
    if ( !Owned )
      break;
    if ( (BYTE2(v5) & 0x1F) == 0x10 )
      bDeleteBrush(v5);
    v2 = a1;
  }
}
