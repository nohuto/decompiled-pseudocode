/*
 * XREFs of ??_E?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAPEAXI@Z @ 0x18015EC70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EB70 (--1-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 */

CSectionBasedCrossProcessMemory *__fastcall CSectionBasedCPClientMemory<ControlData_V2>::`vector deleting destructor'(
        CSectionBasedCrossProcessMemory *a1,
        char a2)
{
  CSectionBasedCPClientMemory<ControlData_V2>::~CSectionBasedCPClientMemory<ControlData_V2>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
