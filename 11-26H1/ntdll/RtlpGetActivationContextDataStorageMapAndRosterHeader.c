/*
 * XREFs of RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A23B0
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x1800A21EC (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800A2738 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800A2828 (RtlpUninitializeAssemblyStorageMap.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpGetActivationContextDataStorageMapAndRosterHeader(
        int a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        volatile signed __int64 *a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // r14
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int16 v12; // ax
  size_t v13; // r13
  unsigned __int64 v14; // rcx
  _WORD *v15; // rsi
  __int64 v17; // rax
  volatile signed __int64 v18; // r8
  int v19; // esi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 Heap_0; // rax
  signed __int64 v23; // r13
  _WORD *Atom; // [rsp+40h] [rbp-278h]
  _WORD v25[264]; // [rsp+60h] [rbp-258h] BYREF

  Atom = v25;
  v25[0] = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (_UNKNOWN *)a3 == &unk_180171088 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() passed the empty activation context\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return 3221225485LL;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a4 || !a5 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags                : 0x%lx\n"
      "SXS:    Peb                  : %p\n"
      "SXS:    ActivationContextData: %p\n"
      "SXS:    AssemblyStorageMap   : %p\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader",
      a1,
      a2,
      a4,
      (const void *)a5);
    return 3221225485LL;
  }
  if ( a3 )
  {
    if ( a3 == -4 )
    {
LABEL_32:
      v8 = a2 + 97;
      v21 = a2[97];
      v9 = a2 + 98;
      if ( v21 )
        v7 = v21 + *(unsigned int *)(v21 + 24);
      goto LABEL_34;
    }
    if ( (a1 & 3) == 0 )
    {
      v17 = *(_QWORD *)(a3 + 24);
      v8 = (_QWORD *)(a3 + 24);
      if ( !v17 )
        return 3221225701LL;
      v7 = v17 + *(unsigned int *)(v17 + 24);
      v18 = a3 + 112;
      goto LABEL_25;
    }
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_32;
  if ( !a3 || (a1 & 1) != 0 )
  {
    v8 = a2 + 95;
    v10 = a2[95];
    v9 = a2 + 96;
    if ( v10 )
    {
      v7 = v10 + *(unsigned int *)(v10 + 24);
      if ( !*v9 )
      {
        v11 = *(__m128i *)(a2[4] + 96LL);
        v12 = _mm_cvtsi128_si32(v11);
        v13 = v12;
        v14 = v12 + 14LL;
        if ( v14 <= 0x208 )
        {
          v15 = v25;
          Atom = v25;
        }
        else
        {
          if ( v14 > 0xFFFE )
            return 3221225734LL;
          Atom = (_WORD *)RtlpAllocateAtom((unsigned __int16)(v12 + 14));
          v15 = Atom;
          if ( !Atom )
            return 3221225495LL;
        }
        memmove(v15, (const void *)_mm_srli_si128(v11, 8).m128i_i64[0], v13);
        v20 = v13 >> 1;
        *(_QWORD *)&v15[v20] = *(_QWORD *)L".Local";
        *(_DWORD *)&v15[v20 + 4] = *(_DWORD *)L"al";
        v15[v20 + 6] = aLocal[6];
      }
    }
  }
LABEL_34:
  if ( !*v8 || *v9 )
  {
LABEL_41:
    v18 = *v9;
LABEL_25:
    *a5 = v18;
    *a4 = *v8;
    if ( a6 )
      *a6 = v7;
    v19 = 0;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v7 + 8) > 0x1FFFFFFDu )
  {
    v19 = -1073741675;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0();
    v23 = Heap_0;
    if ( Heap_0 )
    {
      v19 = RtlpInitializeAssemblyStorageMap(Heap_0, *(unsigned int *)(v7 + 8), Heap_0 + 16);
      if ( v19 >= 0 )
      {
        if ( _InterlockedCompareExchange64(v9, v23, 0LL) )
        {
          RtlpUninitializeAssemblyStorageMap(v23);
          RtlFreeHeap_0();
        }
        goto LABEL_41;
      }
      RtlFreeHeap_0();
    }
    else
    {
      v19 = -1073741801;
    }
  }
LABEL_28:
  if ( Atom )
  {
    if ( Atom != v25 )
      RtlpSysVolFree((__int64)Atom);
  }
  return (unsigned int)v19;
}
