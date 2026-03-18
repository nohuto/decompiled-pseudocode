/*
 * XREFs of ?vCleanupLCSPs@@YAXK@Z @ 0x140085594
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vCleanupLCSPs(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int i; // ecx
  unsigned int v4; // ebx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = a1;
  for ( i = 0; ; i = v4 )
  {
    v4 = HmgNextOwned(i, v2, &v5);
    if ( !v4 )
      break;
    if ( (BYTE2(v5) & 0x1F) == 9 )
      bDeleteColorSpace(v5, 0LL);
    v2 = a1;
  }
}
