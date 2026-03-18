/*
 * XREFs of ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474
 * Callers:
 *     ??_ECInteractionTracker2@@UEAAPEAXI@Z @ 0x180271780 (--_ECInteractionTracker2@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18013C898 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801826C0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker2@@EEAAXXZ @ 0x180214EF0 (-DestroyInteractionAnimations@CInteractionTracker2@@EEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 *     ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC (-BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z @ 0x1802772F0 (-StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker2::~CInteractionTracker2(CInteractionTracker2 *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rdx
  void **v7; // rdi
  __int64 v8; // rsi
  void *v9; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rcx

  *(_QWORD *)this = &CInteractionTracker2::`vftable';
  CInteractionTracker2::DestroyInteractionAnimations(this);
  CInteractionTracker2::StopCustomAndDefaultAnimations(this, 0);
  CInteractionTracker2::BoostCompositorClock(this, 0);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
  v4 = *(_DWORD *)(v3 + 328);
  v5 = *(_QWORD *)(v3 + 304);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker2 **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    if ( (unsigned int)v2 < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)(v2 + 1);
        *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8 * v6);
        v2 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v3 + 328) - 1 );
    }
    --*(_DWORD *)(v3 + 328);
  }
  v7 = (void **)((char *)this + 736);
  v8 = 4LL;
  do
  {
    operator delete(*v7);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 131);
  v9 = (void *)*((_QWORD *)this + 128);
  if ( v9 )
  {
    std::_Deallocate<16>(v9, 4 * ((__int64)(*((_QWORD *)this + 130) - (_QWORD)v9) >> 2));
    *((_QWORD *)this + 128) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    *((_QWORD *)this + 130) = 0LL;
  }
  v10 = (__int64 *)*((_QWORD *)this + 125);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(v10, *((__int64 **)this + 126));
    std::_Deallocate<16>(
      *((void **)this + 125),
      (*((_QWORD *)this + 127) - *((_QWORD *)this + 125)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 125) = 0LL;
    *((_QWORD *)this + 126) = 0LL;
    *((_QWORD *)this + 127) = 0LL;
  }
  v11 = (__int64 *)*((_QWORD *)this + 122);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(v11, *((__int64 **)this + 123));
    std::_Deallocate<16>(
      *((void **)this + 122),
      (*((_QWORD *)this + 124) - *((_QWORD *)this + 122)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 122) = 0LL;
    *((_QWORD *)this + 123) = 0LL;
    *((_QWORD *)this + 124) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 121);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 120);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 119);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 118);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 117);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 116);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 115);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 114);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 99);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 98);
  `vector destructor iterator'(
    (char *)this + 704,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 688,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 83);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 82);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 81);
  InteractionSourceManager::~InteractionSourceManager((__int64 ****)this + 66);
  CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::~CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>(this);
}
