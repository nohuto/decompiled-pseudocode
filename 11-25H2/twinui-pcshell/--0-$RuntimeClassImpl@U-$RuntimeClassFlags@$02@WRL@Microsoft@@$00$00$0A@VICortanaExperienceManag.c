/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18036A170
 * Callers:
 *     ??0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z @ 0x18036A21C (--0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z.c)
 *     ??0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z @ 0x18039A4E0 (--0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIWeakReferenceSource@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180369FC4 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VICortanaExperi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>(
        __int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>(a1);
  result = v1;
  *(_QWORD *)(v1 + 40) = 1LL;
  return result;
}
