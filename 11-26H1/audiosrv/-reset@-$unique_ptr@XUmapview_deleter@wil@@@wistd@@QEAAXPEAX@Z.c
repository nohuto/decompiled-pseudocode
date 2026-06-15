/*
 * XREFs of ?reset@?$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1801148DC
 * Callers:
 *     ??1CSectionBasedCrossProcessMemory@@QEAA@XZ @ 0x180110E00 (--1CSectionBasedCrossProcessMemory@@QEAA@XZ.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015EF50 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015F130 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015F310 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x18015FA70 (-GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wistd::unique_ptr<void,wil::mapview_deleter>::reset(const void **a1, const void *a2)
{
  const void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    LODWORD(v2) = UnmapViewOfFile(v2);
  return (int)v2;
}
