/*
 * XREFs of MiInitializeMdlBatchPages @ 0x14050888C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiReturnMdlExcess @ 0x1406F38F4 (MiReturnMdlExcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 */

__int64 __fastcall MiInitializeMdlBatchPages(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rdx
  int v4; // edi
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  ULONG_PTR *v8; // r14
  ULONG_PTR *v9; // r15
  unsigned __int64 v10; // r12
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // r8
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 *v17; // rsi
  unsigned __int64 v18; // r14
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v21; // r14
  _QWORD *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned __int64 v28; // [rsp+80h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0LL;
  v26 = v1;
  v4 = 0;
  v5 = 0LL;
  v6 = v1 + 48;
  v7 = (unsigned __int64)*(unsigned int *)(v1 + 40) >> 12;
  v8 = (ULONG_PTR *)(v1 + 48);
  v28 = v7;
  v9 = (ULONG_PTR *)(v1 + 48);
  v27 = v1 + 48;
  if ( !v7 )
    goto LABEL_12;
  v10 = v7;
  do
  {
    v11 = MiPageToNode(*v8);
    v12 = v11;
    if ( v5 )
    {
      if ( v11 == v4 )
      {
        ++v5;
        goto LABEL_8;
      }
      MiInitializeMdlOneNodeBatchPages(a1, v9, v5);
    }
    v5 = 1LL;
    v4 = v12;
    v9 = v8;
LABEL_8:
    ++v8;
    --v10;
  }
  while ( v10 );
  v7 = v28;
  if ( v5 )
    MiInitializeMdlOneNodeBatchPages(a1, v9, v5);
  v6 = v27;
  v2 = 0LL;
  v1 = v26;
LABEL_12:
  v13 = 2LL;
  v27 = *(_QWORD *)(a1 + 72);
  v14 = *(_DWORD *)(a1 + 56);
  if ( (v14 & 0x80000200) != 0 )
  {
    v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( *(_QWORD *)(a1 + 48) != 1LL )
    {
      v16 = 3;
      if ( (v14 & 0x1000) != 0 )
      {
        v16 = 2;
      }
      else if ( (v14 & 0x1000000) != 0 )
      {
        v16 = 1;
      }
      else if ( (v14 & 0x2000000) != 0 )
      {
        v16 = 0;
      }
      v17 = (__int64 *)v6;
      if ( v7 )
      {
        v18 = v7;
        do
        {
          MiConvertSmallPageRangeToLarge(*v17++, v16);
          --v18;
        }
        while ( v18 );
        v13 = 2LL;
      }
    }
  }
  else
  {
    v15 = MiSwizzleInvalidPte(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80);
  }
  result = *(unsigned int *)(a1 + 148);
  if ( (result & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v13 )
      __writecr8(v13);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = v13;
      LOBYTE(v6) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(v6, v2);
      LOWORD(v13) = 2;
    }
  }
  v21 = 0LL;
  if ( v7 )
  {
    v22 = (_QWORD *)(v1 + 48);
    do
    {
      v23 = 48LL * *v22 - 0x220000000000LL;
      LODWORD(v26) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
      MiInitializeMdlSinglePage(v23, (unsigned __int64 *)v23, v27, v15, *(_DWORD *)(a1 + 56));
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v21 + 1;
      LOWORD(v13) = 2;
      v21 = result;
      if ( (result & 0x3F) == 0 && CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          LOWORD(v13) = 2;
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        v25 = KeGetCurrentIrql();
        if ( (_BYTE)v25 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v24) = 2;
          result = KiRaiseIrqlProcessIrqlFlags(v25, v24);
          LOWORD(v13) = 2;
        }
      }
      ++v22;
    }
    while ( v21 < v7 );
  }
  if ( CurrentIrql < (unsigned __int8)v13 )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      LOWORD(v13) = 2;
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  *(_WORD *)(v1 + 10) |= v13;
  *(_QWORD *)(v1 + 16) = 0LL;
  return result;
}
