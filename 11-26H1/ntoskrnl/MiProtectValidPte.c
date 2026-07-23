/*
 * XREFs of MiProtectValidPte @ 0x140313A6C
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiProtectFlushPayload @ 0x1403134BC (MiProtectFlushPayload.c)
 *     MiMakeProtoPrivate @ 0x140313500 (MiMakeProtoPrivate.c)
 *     MiUpdatePfnProtection @ 0x140313BB0 (MiUpdatePfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiProtectValidPte(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  unsigned int updated; // r15d
  __int64 ProcessorFlushList; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  int ProtoPrivate; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx

  v4 = a1 + 1;
  updated = *((_DWORD *)a1 + 7);
  if ( !a1[9] )
  {
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
    v10 = *v4;
    a1[10] = ProcessorFlushList;
    a1[9] = ProcessorFlushList;
    MiInitializeTbFlushList(ProcessorFlushList, v10, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
  }
  v11 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  if ( (*(_DWORD *)(*a1 + 48LL) & 0x1C) == 0x10 && (unsigned int)MiRotatedToFrameBuffer(a2, a2, a3, a4) )
    goto LABEL_7;
  if ( *(__int64 *)(48 * v11 - 0x220000000000LL + 40) < 0 )
  {
    MiProtectFlushPayload(a1);
    ProtoPrivate = MiMakeProtoPrivate(*v4, *((_BYTE *)a1 + 16), (unsigned __int64)a2);
    if ( ProtoPrivate )
    {
      if ( ProtoPrivate == 1 )
      {
        --a1[11];
      }
      else
      {
        v16 = *v4;
        a1[7] = 0LL;
        MiLockWorkingSetShared(v16, v14, v15);
      }
    }
  }
  else
  {
    if ( !*((_BYTE *)a1 + 18) )
    {
      updated = MiUpdatePfnProtection(*a1, 48 * v11 - 0x220000000000LL, updated);
LABEL_7:
      MiRevertValidPte(*a1, a2, updated, v11, a1[9]);
      return 1LL;
    }
    if ( (unsigned int)MiMakeVaRangeNoAccess(a1, (unsigned __int64)a2) )
      return 1LL;
    *(_DWORD *)(a1[9] + 20LL) |= 1u;
  }
  return 0LL;
}
