/*
 * XREFs of ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1801622B4
 * Callers:
 *     ??1?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EAB0 (--1-$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015EAF0 (--1-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x18015EB30 (--1-$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EB70 (--1-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

signed int __fastcall AERTUnlockMemory(void *a1, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualUnlock(a1, a2) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
