/*
 * XREFs of ??_E?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAPEAXI@Z @ 0x18015EC30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x18015EB30 (--1-$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ.c)
 */

CSectionBasedCrossProcessMemory *__fastcall CSectionBasedCPClientMemory<ControlData_V1>::`vector deleting destructor'(
        CSectionBasedCrossProcessMemory *a1,
        char a2)
{
  CSectionBasedCPClientMemory<ControlData_V1>::~CSectionBasedCPClientMemory<ControlData_V1>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
