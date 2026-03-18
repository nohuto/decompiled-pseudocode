/*
 * XREFs of PspSetupUserFiberShadowStack @ 0x140B31688
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409F1E60 (PspReserveAndCommitUserShadowStack.c)
 */

__int64 __fastcall PspSetupUserFiberShadowStack(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebx
  unsigned __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-10h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  v4 = PspReserveAndCommitUserShadowStack(a1, a2, a3, &v10, v11);
  if ( v4 >= 0 )
  {
    _RDI = v11[0] - 8LL;
    _RAX = stru_140FC01F0.SchedulerAssist;
    __asm { wrussq  qword ptr [rdi], rax }
    _RSI = v11[0] - 16LL;
    RtlWriteULong64ToUser(a4, v11[0] - 16LL);
    _RDI = _RDI & 0xFFFFFFFFFFFFFFFCuLL | 1;
    __asm { wrussq  qword ptr [rsi], rdi }
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11[0] = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v10, v11, 0x8000u, 0, 0x40000000);
    RtlWriteULong64ToUser(a4, 0LL);
  }
  return (unsigned int)v4;
}
