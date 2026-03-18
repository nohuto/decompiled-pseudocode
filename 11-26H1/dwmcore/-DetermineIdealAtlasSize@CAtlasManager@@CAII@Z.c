/*
 * XREFs of ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x180105BB8
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180036E7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasManager::DetermineIdealAtlasSize(int a1)
{
  __int64 result; // rax
  int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // ecx

  result = 8LL;
  if ( (unsigned int)(a1 + 1) >= 8 )
  {
    v2 = a1 + 2;
    v3 = 0x80000000;
    if ( (unsigned int)(a1 + 2) <= 0x400 )
      v3 = 1024;
    while ( (v3 & v2) == 0 )
      v3 >>= 1;
    v4 = 2 * v3;
    if ( v2 == v3 )
      v4 = v3;
    result = 2048LL;
    if ( v4 < 0x800 )
      return v4;
  }
  return result;
}
