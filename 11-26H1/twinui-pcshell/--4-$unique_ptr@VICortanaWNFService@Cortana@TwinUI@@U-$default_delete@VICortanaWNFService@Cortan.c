/*
 * XREFs of ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803C71CC
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803CC2F4 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1803CC2F4.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803D6AA0 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1803D6AA0.c)
 * Callees:
 *     ??R?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803C7320 (--R-$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cort.c)
 */

__int64 *__fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>::operator()();
  return a1;
}
