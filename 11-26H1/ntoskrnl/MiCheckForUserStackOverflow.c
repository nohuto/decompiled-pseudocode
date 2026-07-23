/*
 * XREFs of MiCheckForUserStackOverflow @ 0x140AA4214
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1407289C0 (ZwProtectVirtualMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     MiSetTebStackLimit @ 0x140AA43B0 (MiSetTebStackLimit.c)
 *     MiGetTebStackControl @ 0x140AA43EC (MiGetTebStackControl.c)
 *     MiCheckShadowStackOverflow @ 0x140AA45B0 (MiCheckShadowStackOverflow.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  char *v5; // rax
  NTSTATUS v6; // eax
  PVOID BaseAddress; // [rsp+38h] [rbp-30h] BYREF
  __int128 RegionSize; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+50h] [rbp-18h]
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  ULONG OldProtect; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  OldProtect = 0;
  RegionSize = 0LL;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x4080) != 0
    || ((__int64)CurrentThread[1].Queue & 3) != 0
    || CurrentThread->ApcStateIndex == 1 )
  {
    return 2147483649LL;
  }
  if ( !a2 && (unsigned int)MiCheckShadowStackOverflow(a1, &v10) )
    return v10;
  result = MiGetTebStackControl(&RegionSize, a1);
  if ( !(_DWORD)result )
  {
    BaseAddress = (PVOID)((a1 & 0xFFFFFFFFFFFFF000uLL) - RegionSize);
    v5 = (char *)*((_QWORD *)&RegionSize + 1);
    if ( (unsigned __int64)BaseAddress > *((_QWORD *)&RegionSize + 1) )
    {
      if ( (RtlReadULongFromUser((unsigned int *)&CurrentThread->ApcState.Process[1].ProcessListEntry.Blink[11].Blink + 1) & 0x10000) != 0 )
        v6 = -1073741523;
      else
        v6 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               (PSIZE_T)&RegionSize,
               0x1000u,
               0x104u);
      if ( v6 >= 0 )
        return MiSetTebStackLimit(&RegionSize, (char *)BaseAddress + RegionSize);
      *(_QWORD *)&RegionSize = RegionSize - 4096;
      v5 = (char *)BaseAddress;
    }
    BaseAddress = v5 + 4096;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)&RegionSize, 4u, &OldProtect);
    result = MiSetTebStackLimit(&RegionSize, BaseAddress);
    if ( (_DWORD)result != -2147483647 )
      return 3221225725LL;
  }
  return result;
}
