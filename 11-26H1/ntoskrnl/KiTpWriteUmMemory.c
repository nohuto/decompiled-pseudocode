/*
 * XREFs of KiTpWriteUmMemory @ 0x1405FF2E8
 * Callers:
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 * Callees:
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x140A2B2B0 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall KiTpWriteUmMemory(int a1, __int64 a2, int a3)
{
  int v3; // esi
  int v4; // r14d
  int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF

  v3 = (int)PsInitialSystemProcess;
  v4 = a2;
  v11 = a2;
  v9 = 0LL;
  v12 = 0;
  v10 = 1LL;
  v7 = MmProtectVirtualMemory(
         (_DWORD)PsInitialSystemProcess,
         a1,
         (unsigned int)&v11,
         (unsigned int)&v10,
         128,
         (__int64)&v12);
  if ( v7 >= 0 )
  {
    v7 = MmCopyVirtualMemory(v3, a3, a1, v4, 1LL, 0, (__int64)&v9);
    MmProtectVirtualMemory(v3, a1, (unsigned int)&v11, (unsigned int)&v10, v12, (__int64)&v12);
  }
  return (unsigned int)v7;
}
