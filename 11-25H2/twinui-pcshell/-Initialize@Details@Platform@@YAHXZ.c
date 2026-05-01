/*
 * XREFs of ?Initialize@Details@Platform@@YAHXZ @ 0x1802D9F20
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ?InitializeData@Details@Platform@@YAJH@Z_0 @ 0x1802DA2C5 (-InitializeData@Details@Platform@@YAJH@Z_0.c)
 *     ?UninitializeData@Details@Platform@@YAXH@Z_0 @ 0x1802DA2D1 (-UninitializeData@Details@Platform@@YAXH@Z_0.c)
 */

__int64 __fastcall Platform::Details::Initialize(Platform::Details *this, int a2)
{
  Platform::Details *v2; // rcx
  int v3; // edx
  int v4; // ebx

  v2 = (Platform::Details *)(unsigned int)__abi___threading_model;
  if ( (_DWORD)__abi___threading_model == 3 )
  {
    v2 = 0LL;
    LODWORD(__abi___threading_model) = 0;
  }
  v4 = Platform::Details::InitializeData(v2, a2);
  if ( v4 >= 0 )
  {
    atexit(Platform::Details::Cleanup);
    return 0LL;
  }
  else
  {
    Platform::Details::UninitializeData((Platform::Details *)(unsigned int)__abi___threading_model, v3);
    return (unsigned int)v4;
  }
}
