/*
 * XREFs of ?InternalRelease@?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18009ACE0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A768 (--$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$Co.c)
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A7D8 (--$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Micros.c)
 *     ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C86E4 (--1-$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800636C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlAltTabViewHost>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlAltTabViewHostInternal>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
