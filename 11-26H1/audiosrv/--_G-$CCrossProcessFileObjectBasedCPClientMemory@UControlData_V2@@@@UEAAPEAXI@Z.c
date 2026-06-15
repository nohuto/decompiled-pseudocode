/*
 * XREFs of ??_G?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAPEAXI@Z @ 0x18015EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EAB0 (--1-$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 */

void *__fastcall CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::~CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
