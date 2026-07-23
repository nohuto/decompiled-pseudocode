/*
 * XREFs of HalpGenericErrorSourceRecovery @ 0x140591650
 * Callers:
 *     HalpRequestGenericErrorRecovery @ 0x140591C10 (HalpRequestGenericErrorRecovery.c)
 * Callees:
 *     HalpMemoryErrorDeferredRecovery @ 0x1405918FC (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140591B1C (HalpPmemErrorDeferredRecovery.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall HalpGenericErrorSourceRecovery(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // rbp
  _DWORD *v4; // rdi
  int v6; // ebx
  unsigned int i; // r14d
  int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // r8
  unsigned __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  _DWORD *v19; // rdx
  _DWORD *v20; // rcx

  v2 = (unsigned int *)(a1 + 128);
  v4 = (_DWORD *)(a1 + 144);
  v6 = -1073741637;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 10); ++i )
  {
    v8 = v4[8];
    if ( v8 == 2 || v8 == 3 )
      continue;
    if ( RtlCompareMemory(v4, &MEMORY_ERROR_SECTION_GUID, 0x10uLL) == 16 )
    {
      v9 = *v2;
      v10 = 0LL;
      v6 = -1073741637;
      v11 = v9 + (unsigned int)*(v4 - 3);
      v12 = (__int64 *)(a1 + v9);
      if ( *(unsigned int *)(a1 + 20) >= v11 )
        v10 = v12;
      if ( !v10 )
        goto LABEL_26;
      v13 = *v10;
      if ( (*v10 & 2) == 0 )
        goto LABEL_26;
      if ( (v13 & 1) == 0 || (v14 = *((_BYTE *)v10 + 9), v14 != 4) && v14 != 26 )
      {
        if ( (v13 & 0x4000) == 0 || *((_BYTE *)v10 + 72) != 3 )
          goto LABEL_26;
      }
      v15 = v10[2];
      if ( (v13 & 4) != 0 )
        v15 &= v10[3];
      v16 = HalpMemoryErrorDeferredRecovery(v15, 0, 0, 0, 0, 61184, 0, 1, 0);
LABEL_24:
      v6 = v16;
      goto LABEL_26;
    }
    if ( RtlCompareMemory(v4, PMEM_ERROR_SECTION_GUID, 0x10uLL) == 16 )
    {
      v17 = *v2;
      v18 = v17 + (unsigned int)*(v4 - 3);
      v19 = (_DWORD *)(v17 + a1);
      v20 = 0LL;
      if ( *(unsigned int *)(a1 + 20) >= v18 )
        v20 = v19;
      if ( !v20 || !v20[21] )
      {
        v6 = -1073741637;
        goto LABEL_26;
      }
      v16 = HalpPmemErrorDeferredRecovery(v20);
      goto LABEL_24;
    }
LABEL_26:
    if ( v6 >= 0 )
    {
      *a2 = 2;
      return (unsigned int)v6;
    }
    v2 += 18;
    v4 += 18;
  }
  return (unsigned int)v6;
}
