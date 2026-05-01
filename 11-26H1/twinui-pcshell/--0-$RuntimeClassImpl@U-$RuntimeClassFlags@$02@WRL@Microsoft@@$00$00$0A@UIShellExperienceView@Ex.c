/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803712E0
 * Callers:
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x180371654 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180371178 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIShellExperienceView@Experien.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperienceView,IWeakReferenceSource,TwinUI::Cortana::IShellExperienceViewLifetime>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IShellExperienceView,IWeakReferenceSource,TwinUI::Cortana::IShellExperienceViewLifetime>(a1);
  result = v1;
  *(_QWORD *)(v1 + 32) = 1LL;
  return result;
}
