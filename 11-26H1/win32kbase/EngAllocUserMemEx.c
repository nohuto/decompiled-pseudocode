/*
 * XREFs of EngAllocUserMemEx @ 0x140163CF8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     EngAllocUserMem @ 0x140163CD0 (EngAllocUserMem.c)
 * Callees:
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x140163ED0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v4; // r14d
  __int64 v5; // rcx
  void *v6; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rsi
  struct W32_PUSH_LOCK *v9; // rbx
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v6 = GrepSecureVirtualMemory(*a3, RegionSize, 4u);
  if ( !v6 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
    *a3 = 0LL;
    return (unsigned int)-2143354876;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
  {
    v9 = (struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80);
    Buffer[0] = *a3;
    Buffer[1] = RegionSize;
    LOBYTE(NewElement) = 0;
    Buffer[2] = v6;
    if ( CurrentProcessWin32Process != -80 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(CurrentProcessWin32Process + 80));
    if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v8 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
      || !(_BYTE)NewElement )
    {
      MmUnsecureVirtualMemory(v6);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      v4 = -1073741801;
    }
    if ( v9 )
      GreReleasePushLockExclusive(v9);
    return (unsigned int)v4;
  }
  MmUnsecureVirtualMemory(v6);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
  *a3 = 0LL;
  return 3221225473LL;
}
