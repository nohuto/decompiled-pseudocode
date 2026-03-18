/*
 * XREFs of PspSetupUserStack @ 0x1409EA234
 * Callers:
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1409EA3A8 (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1409EA6C0 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  bool v5; // zf
  __int64 v10; // rdx
  int UserStack; // ebp
  __int64 v12; // r12
  ULONG_PTR v14; // [rsp+20h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(v17, 0, sizeof(v17));
  if ( !v5 )
    goto LABEL_7;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v17);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), 4096, v14, a3);
  if ( UserStack >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
      v12 = 0LL;
    else
      v12 = 16 * (unsigned int)(ExGenRandom(1, v10) & 0x7F);
    if ( *(_QWORD *)(a1 + 784) )
    {
      UserStack = PspWow64SetupCpuArea(a3 + 16, a1);
      if ( UserStack < 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        goto LABEL_8;
      }
    }
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a3 + 16) - v12 - 40;
    KiUnstackDetachProcess((__int64)v17, 0);
    v4 = 2;
LABEL_7:
    *(_BYTE *)a4 = v4 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
LABEL_8:
  KiUnstackDetachProcess((__int64)v17, 0);
  return (unsigned int)UserStack;
}
