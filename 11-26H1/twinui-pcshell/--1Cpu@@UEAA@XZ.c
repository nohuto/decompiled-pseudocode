/*
 * XREFs of ??1Cpu@@UEAA@XZ @ 0x18035D334
 * Callers:
 *     ??_GCpu@@UEAAPEAXI@Z @ 0x180345330 (--_GCpu@@UEAAPEAXI@Z.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$2 @ 0x1806E4EE5 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x18035D380 (--_G_COUNTER_BUFFER@@QEAAPEAXI@Z.c)
 */

void __fastcall Cpu::~Cpu(Cpu *this, unsigned int a2)
{
  _COUNTER_BUFFER *v3; // rcx
  _COUNTER_BUFFER *v4; // rcx

  *(_QWORD *)this = &Cpu::`vftable';
  v3 = (_COUNTER_BUFFER *)*((_QWORD *)this + 2);
  if ( v3 )
    _COUNTER_BUFFER::`scalar deleting destructor'(v3, a2);
  v4 = (_COUNTER_BUFFER *)*((_QWORD *)this + 3);
  if ( v4 )
    _COUNTER_BUFFER::`scalar deleting destructor'(v4, a2);
  CloseHandle(*((HANDLE *)this + 1));
}
