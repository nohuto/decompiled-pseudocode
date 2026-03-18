/*
 * XREFs of ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x18020453C
 * Callers:
 *     ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x1801E2A50 (--_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180204804 (--1-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@PEAVCInteractionTracker.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 *     ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18 (--$_Destroy_range@V-$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBi.c)
 */

void __fastcall CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CInteractionTrackerBindingManager::Binding *v4; // rcx
  CInteractionTrackerBindingManager::Binding *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  if ( *((_QWORD *)this + 12) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x8007029CLL,
      v6);
  if ( *((_QWORD *)this + 25) != *((_QWORD *)this + 26) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x8007029CLL,
      v6);
  if ( *((_QWORD *)this + 28) != *((_QWORD *)this + 29) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x8007029CLL,
      v6);
  if ( *((_QWORD *)this + 19) != *((_QWORD *)this + 20) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x8007029CLL,
      v6);
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(v2, *((_QWORD *)this + 29));
    std::_Deallocate<16>(
      *((void **)this + 28),
      (*((_QWORD *)this + 30) - *((_QWORD *)this + 28)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
  }
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(v3, *((_QWORD *)this + 26));
    std::_Deallocate<16>(
      *((void **)this + 25),
      (*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v4 = (CInteractionTrackerBindingManager::Binding *)*((_QWORD *)this + 22);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(v4);
    std::_Deallocate<16>(*((void **)this + 22), 8 * ((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 22)) >> 3));
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  v5 = (CInteractionTrackerBindingManager::Binding *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(v5);
    std::_Deallocate<16>(*((void **)this + 19), 8 * ((__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 19)) >> 3));
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::~_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>((char *)this + 80);
  CResource::~CResource(this);
}
