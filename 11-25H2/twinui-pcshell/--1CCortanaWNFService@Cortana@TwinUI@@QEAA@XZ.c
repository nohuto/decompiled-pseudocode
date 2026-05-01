/*
 * XREFs of ??1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1803CE22C
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803C30A4 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803CCF20 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RealtimeEnticementManager@Cortana@TwinUI@@QEAA@XZ @ 0x1803CE284 (--1RealtimeEnticementManager@Cortana@TwinUI@@QEAA@XZ.c)
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1803CEB90 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 */

void __fastcall TwinUI::Cortana::CCortanaWNFService::~CCortanaWNFService(TwinUI::Cortana::CCortanaWNFService *this)
{
  TwinUI::Cortana::RealtimeEnticementManager *v2; // rdi

  *(_QWORD *)this = &TwinUI::Cortana::CCortanaWNFService::`vftable';
  TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(this);
  v2 = (TwinUI::Cortana::RealtimeEnticementManager *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
  {
    TwinUI::Cortana::RealtimeEnticementManager::~RealtimeEnticementManager(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x38);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
}
