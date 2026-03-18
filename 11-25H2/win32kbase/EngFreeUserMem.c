/*
 * XREFs of EngFreeUserMem @ 0x140073720
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140091E00 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x140092E18 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct W32_PUSH_LOCK *v3; // rbx
  _QWORD *v4; // rax
  void *v5; // rcx
  PVOID Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        v3 = (struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80);
        Buffer = BaseAddress;
        v7 = 0LL;
        if ( CurrentProcessWin32Process != -80 )
          GreEnterCriticalRegionAndAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
        v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
        if ( v4 )
        {
          v5 = (void *)v4[2];
          RegionSize = v4[1];
          MmUnsecureVirtualMemory(v5);
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          Buffer = BaseAddress;
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
        }
        if ( v3 )
          W32ReleasePushLockExclusive(v3);
      }
    }
  }
}
