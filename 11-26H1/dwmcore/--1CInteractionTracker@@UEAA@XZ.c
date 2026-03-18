/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18013CC40 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18013C898 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x18013CEE0 (--1-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013CF74 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@EEAAXXZ @ 0x18013D150 (-DestroyInteractionAnimations@CInteractionTracker@@EEAAXXZ.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z @ 0x18013D1D0 (-StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rdi
  void **v7; // rsi
  __int64 v8; // rbp
  char *v9; // rsi
  char *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAndDefaultAnimations(this, 0);
  CInteractionTracker::BoostCompositorClock(this, 0);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
  v4 = *(_DWORD *)(v3 + 328);
  v5 = *(_QWORD *)(v3 + 304);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
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
        v12 = (unsigned int)(v2 + 1);
        *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8 * v12);
        v2 = v12;
      }
      while ( (unsigned int)v12 < *(_DWORD *)(v3 + 328) - 1 );
    }
    --*(_DWORD *)(v3 + 328);
  }
  v6 = 4LL;
  v7 = (void **)((char *)this + 504);
  v8 = 4LL;
  do
  {
    operator delete(*v7, 4uLL);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 75);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 70);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 69);
  v9 = (char *)this + 504;
  do
  {
    v9 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v9);
    --v6;
  }
  while ( v6 );
  v10 = (char *)this + 472;
  v11 = 2LL;
  do
  {
    v10 -= 8;
    Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(v10);
    --v11;
  }
  while ( v11 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 52);
  InteractionSourceManager::~InteractionSourceManager((__int64 ****)this + 37);
  CInteractionTrackerBase::~CInteractionTrackerBase(this);
}
