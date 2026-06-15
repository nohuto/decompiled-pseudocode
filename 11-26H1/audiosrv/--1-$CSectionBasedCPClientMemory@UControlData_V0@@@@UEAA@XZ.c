/*
 * XREFs of ??1?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015EAF0
 * Callers:
 *     ??_E?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAPEAXI@Z @ 0x18015EBF0 (--_E-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1801622B4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

void __fastcall CSectionBasedCPClientMemory<ControlData_V0>::~CSectionBasedCPClientMemory<ControlData_V0>(
        CSectionBasedCrossProcessMemory *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSectionBasedCPClientMemory<ControlData_V0>::`vftable';
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    AERTUnlockMemory(v2, *((unsigned int *)this + 8));
  *((_DWORD *)this + 11) = -1073741823;
  CSectionBasedCrossProcessMemory::~CSectionBasedCrossProcessMemory((void **)this);
}
