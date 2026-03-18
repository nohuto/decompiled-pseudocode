/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B6020
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14000F9B0 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG v3; // r8d
  struct _RTL_BITMAP *v4; // rbp
  ULONG ClearBits; // esi
  unsigned int v6; // eax
  unsigned int v7; // r14d
  _QWORD *v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdi
  void *v12; // r13

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (struct _RTL_BITMAP *)(a1[2] ^ a1[3]);
  if ( v3 >= 0xFC )
    v3 = 0;
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, v3);
  if ( ClearBits == -1 )
    goto LABEL_12;
  v6 = *((_DWORD *)a1 + 9);
  v7 = ClearBits / 0x24;
  if ( v6 < 7 && v7 >= v6 )
  {
    v8 = a1 + 1;
    v9 = v7 << 12;
    v12 = (void *)(v9 + (a1[1] ^ a1[2]));
    if ( (int)MmCommitSessionMappedView(v12, 4096LL) >= 0 )
    {
      memset(v12, 0, 0x1000uLL);
      ++*((_DWORD *)a1 + 9);
      goto LABEL_6;
    }
LABEL_12:
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v8 = a1 + 1;
  LODWORD(v9) = v7 << 12;
LABEL_6:
  RtlTestBit(v4, ClearBits);
  RtlSetBit(v4, ClearBits);
  if ( ++*((_DWORD *)a1 + 8) >= 0xFCu )
    *((_DWORD *)a1 + 8) = 0;
  v10 = (unsigned int)v9 + (*v8 ^ a1[2]);
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v10 + 112 * (ClearBits % 0x24);
}
