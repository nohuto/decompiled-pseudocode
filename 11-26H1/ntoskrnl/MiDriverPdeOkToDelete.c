/*
 * XREFs of MiDriverPdeOkToDelete @ 0x1406E85FC
 * Callers:
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall MiDriverPdeOkToDelete(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  PVOID *i; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx

  v2 = (__int64)(a1 << 25) >> 16;
  v3 = v2 + 4096;
  while ( v2 < v3 )
  {
    if ( (*(_QWORD *)v2 & 0xC01LL) != 0 || (*(_QWORD *)v2 & 0x3E0) != 0 && (*(_QWORD *)v2 & 0x3E0LL) != 0x300 )
      return 0LL;
    v2 += 8LL;
  }
  v5 = 1;
  v6 = MmLockLoadedModuleListShared();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v8 = (unsigned __int64)i[6];
    if ( (PVOID)v8 == PsNtosImageBase || (PVOID)v8 == PsHalImageBase )
      v9 = (HIDWORD(stru_140E366D8.SListFaultAddress) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    else
      v9 = ((unsigned __int64)*(unsigned int *)&stru_140E2D2D0.WaitBlockFill11[72] << 12)
         + (((unsigned int)(LODWORD(stru_140E366D8.QuantumTarget) + HIDWORD(stru_140E366D8.SListFaultAddress)) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    if ( a1 >= ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      && a1 <= (((*((unsigned int *)i + 16) + v8 + v9 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v5 = 0;
      break;
    }
  }
  MmUnlockLoadedModuleListShared(v6);
  return v5;
}
