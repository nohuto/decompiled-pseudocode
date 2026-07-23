/*
 * XREFs of EtwTracePool @ 0x1403CAA34
 * Callers:
 *     ExRemovePoolTag @ 0x140346850 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14034CE1C (ExInsertPoolTag.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     ExPoolCleanupExpansionTable @ 0x140524D04 (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpCheckPoolTagFilters @ 0x1406C7464 (EtwpCheckPoolTagFilters.c)
 *     MmIsNonPagedPoolNx @ 0x140700BB8 (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePool(unsigned __int16 a1, __int16 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v7; // r14
  __int64 result; // rax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rbx
  int SessionId; // eax
  int v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-4Ch]
  _DWORD v18[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  _QWORD v21[4]; // [rsp+50h] [rbp-30h] BYREF

  v5 = a2 & 0x26D;
  v17 = a3;
  v16 = 0;
  v7 = a1;
  if ( a5 > 0xFE0 )
  {
    v5 |= 0x10000000u;
  }
  else
  {
    result = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return result;
  }
  if ( a1 == 3618 && (v5 & 1) == 0 && (unsigned int)MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  v9 = 1;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    a3 = v17;
    v9 = 2;
    v16 = SessionId;
    ++v7;
    v21[3] = 4LL;
    v21[2] = &v16;
  }
  v18[0] = v5;
  v21[0] = v18;
  result = EtwpHostSiloState;
  v18[1] = a3;
  v19 = a5;
  v20 = a4;
  v21[1] = 24LL;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  while ( _BitScanForward((unsigned int *)&v12, v10) )
  {
    v13 = EtwpHostSiloState;
    v10 &= v10 - 1;
    result = 32LL * (unsigned int)v12;
    v14 = result + EtwpHostSiloState + 4556;
    if ( v14
      && (result = *(unsigned int *)(v14 + 4), (result & 0x40) != 0)
      && (result = EtwpCheckPoolTagFilters((unsigned int)v12, a3), (_BYTE)result)
      || v14 && (result = *(unsigned int *)(v14 + 4), (result & 1) != 0) && a5 > 0xFE0 )
    {
      result = EtwpLogKernelEvent((__int64)v21, v13, *(unsigned __int8 *)(v13 + 2 * v12 + 4504), v9, v7, 0x1501B02u);
    }
    a3 = v17;
  }
  return result;
}
