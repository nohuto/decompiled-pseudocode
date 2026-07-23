/*
 * XREFs of MiCommitFileBackedSection @ 0x140A65DF8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiFlushAcquire @ 0x1404AC7F4 (MiFlushAcquire.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 */

__int64 __fastcall MiCommitFileBackedSection(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  int v15; // r12d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  int v19; // eax
  __int64 result; // rax
  void *v21; // rcx
  __int64 v22; // rax
  unsigned int ProtectionMask; // eax
  unsigned __int64 v24; // [rsp+40h] [rbp-39h]
  unsigned __int64 v25; // [rsp+48h] [rbp-31h]
  __int64 v26; // [rsp+50h] [rbp-29h]
  _BYTE v27[40]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+1Fh]
  unsigned int v30; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 v31; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+F0h] [rbp+77h]
  LARGE_INTEGER v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v32 = a3;
  v3 = 0;
  if ( *(__int64 *)(a2 + 128) >= 0 )
    return 3221225505LL;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a2 + 88);
  v9 = *(__int64 **)(a2 + 80);
  v31 = v6;
  v24 = v6 >> 12;
  v25 = v7 >> 12;
  v26 = v7;
  v33.QuadPart = MiStartingOffset(v9, v8, 0)
               + 1
               + v7
               - ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12);
  v10 = **(_QWORD **)(a2 + 80);
  if ( !(unsigned int)MiFlushAcquire(v10, 0LL, 0LL) )
    return 3221225626LL;
  v11 = 0LL;
  if ( (MiReadVadFlags(a2) & 0x80000) == 0 )
  {
    v21 = *(void **)(a2 + 136);
    if ( v21 )
    {
      v11 = *(_QWORD *)(a2 + 136);
      ObfReferenceObjectWithTag(v21, 0x6D566D4Du);
    }
  }
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  memset_0(v27, 0, 0x40uLL);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
      v22 = v11 | 1;
    else
      v22 = v11 | 2;
    v28 = v22;
  }
  else
  {
    v28 = v10;
  }
  v29 = *(_DWORD *)(v10 + 56);
  v30 = v30 & 0xFFFFF000 | 4;
  v15 = MmExtendSection((__int64)v27, &v33, 0);
  if ( v11 )
    ObfDereferenceObjectWithTag((PVOID)v11, 0x6D566D4Du);
  MiLockVad((__int64)CurrentThread, a2, v13, v14);
  MiFlushRelease(v10, 0LL, 0LL);
  if ( v15 < 0 )
    return (unsigned int)v15;
  if ( (unsigned int)MiVadDeleted(a2) )
    return 3221225632LL;
  if ( *(__int64 *)(a2 + 128) >= 0 )
    return 0LL;
  v16 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v17 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  if ( v24 < v16 || v24 > v17 || v25 > v17 || v25 < v16 )
    return 3221225496LL;
  if ( (MiReadVadFlags(a2) & 2) != 0 )
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
    v18 = v31;
    result = MiCheckSecuredVad(a2, v31, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 53), v32);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v18 = v31;
  }
  v19 = MiSetProtectionOnSection(*(_QWORD *)(a1 + 88), a2, v18, v26, *(_DWORD *)(a1 + 44), 0, &v33, &v31);
  if ( v19 < 0 )
    return (unsigned int)v19;
  return v3;
}
