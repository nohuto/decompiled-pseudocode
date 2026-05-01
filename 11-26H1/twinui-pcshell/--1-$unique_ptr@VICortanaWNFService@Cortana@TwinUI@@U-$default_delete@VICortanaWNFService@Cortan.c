/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803C6FEC
 * Callers:
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806E8977 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806E8989 (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806E8AD4 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803C7320 (--R-$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cort.c)
 */

__int64 __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>::operator()();
  return result;
}
