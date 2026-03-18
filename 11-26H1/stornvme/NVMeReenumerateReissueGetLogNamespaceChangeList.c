/*
 * XREFs of NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReenumerateReissueGetLogNamespaceChangeList(__int64 a1, const void *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // r9
  void *v7; // rcx
  unsigned int v8; // r8d
  int i; // edx
  unsigned __int64 v10; // rbx
  void *v11; // [rsp+A8h] [rbp+38h] BYREF
  void *v12; // [rsp+B0h] [rbp+40h]
  unsigned __int64 v13; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    result = StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL);
    v7 = v12;
    if ( !v12 )
    {
      ++*(_DWORD *)(a1 + 4212);
      goto LABEL_7;
    }
    memset(v12, 0, 0x1000uLL);
    memmove(v12, a2, 0x1000uLL);
  }
  result = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x1000u, (__int64 *)&v11, &v13);
  if ( v11 )
  {
    memset(v11, 0, 0x1000uLL);
    LocalCommandReuse(a1, a1 + 1264);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1360) + 4225LL) |= i )
      ++i;
    v10 = v13;
    LOBYTE(v8) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 1360) + 4212LL) = 0;
    BuildGetLogPageCommand(a1, *(_QWORD *)(a1 + 1360), v8, 0x1000u, v10, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4160LL) = v11;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4168LL) = v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 1360) + 4208LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1360) + 4225LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4192LL) = NVMeReenumerateReissueGetLogNamespaceChangeListCompletion;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4200LL) = v12;
    return ProcessCommand(a1, a1 + 1272);
  }
  ++*(_DWORD *)(a1 + 4208);
  v7 = v12;
  v3 = v13;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
  {
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    v7 = v12;
  }
  if ( v7 )
    result = StorPortExtendedFunction(1LL, a1, v7, v6);
  if ( v11 )
    result = NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v11, v3);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
