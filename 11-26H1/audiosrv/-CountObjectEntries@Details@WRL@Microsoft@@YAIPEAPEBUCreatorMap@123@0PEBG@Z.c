/*
 * XREFs of ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x1800B05D8
 * Callers:
 *     ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x180036A38 (--$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z.c)
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800DAE50 (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 * Callees:
 *     ?IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z @ 0x1800D967C (-IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CountObjectEntries(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const struct Microsoft::WRL::Details::CreatorMap **a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // r10d
  Microsoft::WRL::Details **v5; // r9
  const struct Microsoft::WRL::Details::CreatorMap **v7; // r11

  v4 = 0;
  v5 = (Microsoft::WRL::Details **)((char *)this + 8);
  v7 = a2;
  if ( (char *)this + 8 < (char *)a2 )
  {
    do
    {
      if ( *v5
        && Microsoft::WRL::Details::IsServerNameEqual(
             *v5,
             (const struct Microsoft::WRL::Details::CreatorMap *)a3,
             (const unsigned __int16 *)a3) )
      {
        ++v4;
      }
      ++v5;
    }
    while ( v5 < v7 );
  }
  return v4;
}
