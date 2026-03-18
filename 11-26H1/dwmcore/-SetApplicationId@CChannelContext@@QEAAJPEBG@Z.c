/*
 * XREFs of ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x180162C60
 * Callers:
 *     ?Channel_SetApplicationId@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETAPPLICATIONID@@PEBXI@Z @ 0x180162C34 (-Channel_SetApplicationId@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180162D24 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetApplicationId@CProcessAttribution@@QEAAXPEBG@Z @ 0x180163F78 (-SetApplicationId@CProcessAttribution@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CChannelContext::SetApplicationId(void **this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // rax
  CProcessAttribution *v8; // rcx
  const unsigned __int16 *v9; // rdx

  operator delete(this[9]);
  this[9] = 0LL;
  if ( a2 )
  {
    v4 = a2;
    v5 = 151LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    if ( v5 )
    {
      v6 = ((151 - v5) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)) + 1;
      v7 = (unsigned __int16 *)operator new[](saturated_mul(v6, 2uLL));
      this[9] = v7;
      StringCchCopyW(v7, v6, a2);
    }
  }
  v8 = (CProcessAttribution *)this[8];
  if ( v8 )
  {
    v9 = (const unsigned __int16 *)this[9];
    if ( v9 )
      CProcessAttribution::SetApplicationId(v8, v9);
  }
  return 0LL;
}
