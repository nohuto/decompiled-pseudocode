/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180044FB0
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180044D40 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800F99B8 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800FA51C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800448A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 376);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy((CBaseStreamGroupProxy *)(a1 + 8));
}
