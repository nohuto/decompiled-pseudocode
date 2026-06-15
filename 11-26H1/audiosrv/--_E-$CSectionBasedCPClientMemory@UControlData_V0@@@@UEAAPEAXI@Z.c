/*
 * XREFs of ??_E?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAPEAXI@Z @ 0x18015EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015EAF0 (--1-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 */

CSectionBasedCrossProcessMemory *__fastcall CSectionBasedCPClientMemory<ControlData_V0>::`vector deleting destructor'(
        CSectionBasedCrossProcessMemory *a1,
        char a2)
{
  CSectionBasedCPClientMemory<ControlData_V0>::~CSectionBasedCPClientMemory<ControlData_V0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
