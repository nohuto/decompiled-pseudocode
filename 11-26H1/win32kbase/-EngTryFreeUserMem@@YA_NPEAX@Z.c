/*
 * XREFs of ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     EngFreeUserMem @ 0x140035480 (EngFreeUserMem.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1400C6384 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

char __fastcall EngTryFreeUserMem(void *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct W32_PUSH_LOCK *v3; // rbx
  _QWORD *v4; // rax
  void *v6; // rcx
  PVOID Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = a1;
  if ( !a1 )
    return 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v2 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*(_QWORD *)CurrentProcessWin32Process )
    return 0;
  v3 = (struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80);
  Buffer = BaseAddress;
  v8 = 0LL;
  if ( CurrentProcessWin32Process != -80 )
    GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
  v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
  if ( !v4 )
  {
    if ( v3 )
      GreReleasePushLockExclusive(v3);
    return 0;
  }
  v6 = (void *)v4[2];
  RegionSize = v4[1];
  MmUnsecureVirtualMemory(v6);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  Buffer = BaseAddress;
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), &Buffer);
  if ( v3 )
    GreReleasePushLockExclusive(v3);
  return 1;
}
