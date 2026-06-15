/*
 * XREFs of ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800787D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CSaDeviceProxy::GetDeviceGraph(CSaDeviceProxy *this, struct IAudioDeviceGraph **a2)
{
  struct IAudioDeviceGraph **v2; // rbx

  v2 = (struct IAudioDeviceGraph **)((char *)this + 96);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 12);
  *a2 = *v2;
  return 0LL;
}
