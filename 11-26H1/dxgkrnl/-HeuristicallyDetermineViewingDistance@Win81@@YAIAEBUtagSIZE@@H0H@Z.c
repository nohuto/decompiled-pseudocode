/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z @ 0x1401E4AE8
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401E44F4 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 * Callees:
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1401E4C1C (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::HeuristicallyDetermineViewingDistance(
        Win81 *this,
        const struct tagSIZE *a2,
        Win81 **a3,
        const struct tagSIZE *a4)
{
  int v4; // r11d
  unsigned __int64 v5; // r10
  Win81 *v6; // rdx
  unsigned __int64 v7; // r8

  v4 = (int)a2;
  v5 = 10000LL * (*((_DWORD *)this + 1) * *((_DWORD *)this + 1) + *(_DWORD *)this * *(_DWORD *)this) / 0xFC04uLL;
  if ( !(_DWORD)v5 )
    return 840LL;
  v6 = *a3;
  v7 = (unsigned __int64)*a3 >> 32;
  if ( (int)v7 >= 768 )
  {
    if ( (_DWORD)a4 && (_DWORD)v7 == 1080 && (_DWORD)v6 == 1920 )
    {
LABEL_10:
      if ( !v4 )
        return 840LL;
    }
  }
  else if ( !(unsigned int)Win81::IsNetbookResolution(v6, (struct tagSIZE)v6)
         && ((_DWORD)v6 != 800 || (_DWORD)v7 != 600) )
  {
    goto LABEL_10;
  }
  if ( (unsigned int)v5 < 0x1FA4 )
    return 163LL;
  if ( (unsigned int)v5 < 0x4204 )
    return (unsigned int)Win81::IsNetbookResolution(v6, (struct tagSIZE)v6) != 0 ? 245 : 200;
  if ( (unsigned int)v5 < 0x57E4 )
    return 245LL;
  if ( (unsigned int)v5 < 0x7E90 )
    return v4 != 0 ? 245 : 280;
  if ( (unsigned int)v5 <= 0x15F90
    || ((_DWORD)v6 != 1920 || (_DWORD)v7 != 1080) && ((_DWORD)v6 != 3840 || (_DWORD)v7 != 2160) )
  {
    return 280LL;
  }
  return 840LL;
}
