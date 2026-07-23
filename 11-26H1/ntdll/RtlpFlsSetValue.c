/*
 * XREFs of RtlpFlsSetValue @ 0x180072950
 * Callers:
 *     RtlpHpEnvFlsSetValue @ 0x180072798 (RtlpHpEnvFlsSetValue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFlsHeapAlloc @ 0x180072AB8 (RtlpFlsHeapAlloc.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFlsSetValue(PRTL_SRWLOCK SRWLock, unsigned __int64 *a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rsi
  _OWORD *v14; // rbp
  unsigned __int64 v15; // r12
  unsigned int v17; // r15d
  _OWORD *v18; // rax
  __int64 v19; // rax
  PRTL_SRWLOCK *Value; // rcx

  if ( (unsigned int)(a3 - 1) > 0xFEE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = *a2;
    v8 = a3 + 16;
    v9 = 0;
    if ( !*a2 )
    {
      v19 = RtlpFlsHeapAlloc(0x58uLL);
      v7 = v19;
      if ( !v19 )
        return (unsigned int)-1073741801;
      *(_OWORD *)v19 = 0LL;
      *(_QWORD *)(v19 + 80) = 0LL;
      *(_QWORD *)(v19 + 16) = 0LL;
      *(_QWORD *)(v19 + 24) = 0LL;
      *(_QWORD *)(v19 + 32) = 0LL;
      *(_QWORD *)(v19 + 40) = 0LL;
      *(_QWORD *)(v19 + 48) = 0LL;
      *(_QWORD *)(v19 + 56) = 0LL;
      *(_QWORD *)(v19 + 64) = 0LL;
      *(_QWORD *)(v19 + 72) = 0LL;
      *a2 = v19;
      RtlAcquireSRWLockExclusive(SRWLock);
      Value = (PRTL_SRWLOCK *)SRWLock[10].Value;
      if ( *Value != &SRWLock[9] )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = Value;
      *(_QWORD *)v7 = SRWLock + 9;
      *Value = (PRTL_SRWLOCK)v7;
      SRWLock[10].Value = v7;
      RtlReleaseSRWLockExclusive(SRWLock);
    }
    _BitScanReverse(&v10, v8);
    v11 = 1 << v10;
    v12 = v10 - 4;
    v13 = v8 ^ v11;
    v14 = *(_OWORD **)(v7 + 8 * v12 + 16);
    v15 = v7 + 8 * v12;
    if ( !v14 )
    {
      v17 = 1 << (v12 + 4);
      v18 = (_OWORD *)RtlpFlsHeapAlloc(8 * v17 + 8);
      v14 = v18;
      if ( !v18 )
        return (unsigned int)-1073741801;
      *v18 = 0LL;
      if ( v17 )
        memset_thunk_772440563353939046((char *)v18 + 8, 0, 8LL * v17);
      *(_QWORD *)(v15 + 16) = v14;
    }
    *((_QWORD *)v14 + v13 + 1) = a4;
    *(_DWORD *)(v7 + 80) |= 1u;
  }
  return v9;
}
