/*
 * XREFs of ??1CManipulationManager@@MEAA@XZ @ 0x180294740
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180294708 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180294930 (--_ECManipulationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionUpdate@CManipulationManager@@QEAA@XZ @ 0x1800E4488 (--1InteractionUpdate@CManipulationManager@@QEAA@XZ.c)
 *     ??1?$CQueue@PEAVCResource@@@@QEAA@XZ @ 0x1801ACDEC (--1-$CQueue@PEAVCResource@@@@QEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x180294804 (--1MCCollections@@QEAA@XZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  _DWORD *v2; // rdi
  int i; // esi

  *(_QWORD *)this = &CManipulationManager::`vftable';
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 30);
  v2 = (_DWORD *)((char *)this + 232);
  if ( *((_QWORD *)this + 28) )
  {
    for ( i = 0; i < *v2; ++i )
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8LL * i));
    operator delete(*((void **)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  *v2 = 0;
  *((_DWORD *)this + 59) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 160));
  CQueue<CResource *>::~CQueue<CResource *>((_DWORD *)this + 20);
  CManipulationManager::InteractionUpdate::~InteractionUpdate((CManipulationManager *)((char *)this + 56));
  CManipulationManager::InteractionUpdate::~InteractionUpdate((CManipulationManager *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
