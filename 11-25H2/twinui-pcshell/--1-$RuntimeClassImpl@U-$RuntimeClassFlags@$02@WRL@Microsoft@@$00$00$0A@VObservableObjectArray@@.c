/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18049F784
 * Callers:
 *     ??1SwitchItemCollection@@UEAA@XZ @ 0x18049F83C (--1SwitchItemCollection@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18049F8E0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplication.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014FF50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  ObservableObjectArray::~ObservableObjectArray((ObservableObjectArray *)(a1 + 8));
}
