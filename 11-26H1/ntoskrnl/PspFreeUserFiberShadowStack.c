/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x140A045EC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140464F40 (PspGetBaseTrapFrame.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  __int64 v2; // r8
  int updated; // esi
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rbx
  __int64 BaseTrapFrame; // rax
  _OWORD MemoryInformation[3]; // [rsp+40h] [rbp-E8h] BYREF
  int v9[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+78h] [rbp-B0h]
  __int64 v11; // [rsp+80h] [rbp-A8h]
  int v12; // [rsp+88h] [rbp-A0h]
  __int64 v13; // [rsp+90h] [rbp-98h]

  memset_0(v9, 0, 0x98uLL);
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  ProbeForRead(BaseAddress, 1uLL, 8u);
  updated = MmUpdateUserShadowStackValue(
              (unsigned __int64)BaseAddress,
              ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1,
              v2);
  if ( updated >= 0 )
  {
    updated = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                BaseAddress,
                MemoryRegionInformation,
                MemoryInformation,
                0x30uLL,
                0LL);
    if ( updated >= 0 )
      updated = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  if ( updated < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9[1] = 1;
    v11 = 0LL;
    v9[0] = -1073740791;
    v12 = 1;
    v10 = 0LL;
    v13 = updated;
    v6 = (void *)(PspGetBaseTrapFrame((__int64)CurrentThread, 0LL) - 320);
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    KiDispatchException(v9, v6, BaseTrapFrame, 1, 0);
  }
  return (unsigned int)updated;
}
