/*
 * XREFs of ExchangeW32ThreadLock @ 0x140128FC4
 * Callers:
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140127FDC (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140128C2C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x140128DF0 (xxxSendMessageBSM.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExchangeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(a2 + 16))(v2);
  return result;
}
