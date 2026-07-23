/*
 * XREFs of RtlFlsSetValue @ 0x1800727C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFlsHeapAlloc @ 0x180072AB8 (RtlpFlsHeapAlloc.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlFlsSetValue(ULONG FlsIndex, PVOID FlsData)
{
  struct _TEB *v2; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  NTSTATUS v6; // edi
  unsigned int v7; // ecx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r12
  _OWORD *v12; // rbp
  unsigned int v14; // r15d
  _OWORD *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax

  v2 = NtCurrentTeb();
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  v4 = (__int64)v2->FlsData;
  v5 = FlsIndex + 16;
  v6 = 0;
  if ( v4 )
  {
LABEL_3:
    _BitScanReverse(&v7, v5);
    v8 = 1 << v7;
    v9 = v7 - 4;
    v10 = v5 ^ v8;
    v11 = v4 + 8 * v9;
    v12 = *(_OWORD **)(v11 + 16);
    if ( !v12 )
    {
      v14 = 1 << (v9 + 4);
      v15 = (_OWORD *)RtlpFlsHeapAlloc(8 * v14 + 8);
      v12 = v15;
      if ( !v15 )
        return -1073741801;
      *v15 = 0LL;
      if ( v14 )
        memset_thunk_772440563353939046((char *)v15 + 8, 0, 8LL * v14);
      *(_QWORD *)(v11 + 16) = v12;
    }
    *((_QWORD *)v12 + v10 + 1) = FlsData;
    *(_DWORD *)(v4 + 80) |= 1u;
    return v6;
  }
  v16 = RtlpFlsHeapAlloc(0x58uLL);
  v4 = v16;
  if ( v16 )
  {
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 80) = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    v2->FlsData = (void *)v16;
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v17 = (__int64 *)qword_1801C5E80;
    if ( *(__int64 **)qword_1801C5E80 != &qword_1801C5E78 )
      __fastfail(3u);
    *(_QWORD *)v4 = &qword_1801C5E78;
    *(_QWORD *)(v4 + 8) = v17;
    *v17 = v4;
    qword_1801C5E80 = v4;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    goto LABEL_3;
  }
  return -1073741801;
}
