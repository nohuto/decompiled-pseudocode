/*
 * XREFs of PnpWatchdogBugcheck @ 0x1405DC274
 * Callers:
 *     PnpWatchdogSecondChanceCallback @ 0x1405DC5D0 (PnpWatchdogSecondChanceCallback.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PnpWatchdogExtractTriageInformation @ 0x1404E98D4 (PnpWatchdogExtractTriageInformation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnpInitializeTriageBlock @ 0x1405DC1A4 (PnpInitializeTriageBlock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall __noreturn PnpWatchdogBugcheck(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  _WORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const void *v23; // rdx
  size_t v24; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-29h] BYREF
  int v26; // [rsp+38h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp+Fh]
  ULONG v28[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v29[7]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 MaxDataSize; // [rsp+C0h] [rbp+67h] BYREF
  __int16 *v31; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG_PTR v32; // [rsp+D0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D8h] [rbp+7Fh] BYREF

  memset_0(&BugCheckParameter2, 0, 0x50uLL);
  v2 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  MaxDataSize = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  BugCheckParameter3 = 0LL;
  v4 = v3 / 0x2710;
  PnpInitializeTriageBlock(&BugCheckParameter2);
  v26 = *(_DWORD *)(a1 + 16);
  PnpWatchdogExtractTriageInformation(a1, &MaxDataSize, &BugCheckParameter3, &v31, v28, v29);
  v5 = MaxDataSize;
  if ( MaxDataSize )
  {
    v6 = (_WORD *)(MaxDataSize + 40);
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
    if ( *v6 )
    {
      IoAddTriageDumpDataBlock(v5 + 40, (PVOID)2);
      IoAddTriageDumpDataBlock(*(_QWORD *)(v5 + 48), (PVOID)(unsigned __int16)*v6);
    }
    if ( *(_WORD *)(v5 + 56) )
    {
      IoAddTriageDumpDataBlock(v5 + 56, (PVOID)2);
      IoAddTriageDumpDataBlock(*(_QWORD *)(v5 + 64), (PVOID)*(unsigned __int16 *)(v5 + 56));
    }
    v7 = *(_QWORD *)(v5 + 16);
    if ( v7 && *(_WORD *)(v7 + 56) )
    {
      IoAddTriageDumpDataBlock(v7 + 56, (PVOID)2);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 16) + 56LL));
    }
  }
  v27 = v5;
  if ( *(_QWORD *)v28 )
  {
    IoAddTriageDumpDataBlock(v28[0], (PVOID)*(unsigned __int16 *)(*(_QWORD *)v28 + 2LL));
    v8 = *(_QWORD *)v28;
    v9 = *(_QWORD *)(*(_QWORD *)v28 + 8LL);
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
      v8 = *(_QWORD *)v28;
      v10 = (_WORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) + 56LL));
        v8 = *(_QWORD *)v28;
      }
    }
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 312);
      if ( *(_QWORD *)(v11 + 40) )
      {
        v12 = *(_QWORD *)(v11 + 40);
        IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
        if ( *(_WORD *)(v12 + 40) )
        {
          IoAddTriageDumpDataBlock(v12 + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 48), (PVOID)*(unsigned __int16 *)(v12 + 40));
        }
        v13 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 )
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
        else
          v14 = 0LL;
        if ( *(_WORD *)(v14 + 56) )
        {
          if ( *(_QWORD *)v28 )
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
          else
            LODWORD(v15) = 0;
          IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
          if ( *(_QWORD *)v28 )
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
          else
            v16 = 0LL;
          if ( *(_QWORD *)v28 )
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
          else
            v17 = 0LL;
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
          v13 = *(_QWORD *)v28;
        }
        if ( v13 )
          v18 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          v18 = 0LL;
        if ( *(_QWORD *)(v18 + 16) )
        {
          v19 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v19 + 16) + 56LL) )
          {
            if ( v13 )
              v20 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
            else
              v20 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 16) + 56, (PVOID)2);
            if ( *(_QWORD *)v28 )
              v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
            else
              v21 = 0LL;
            if ( *(_QWORD *)v28 )
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 312LL) + 40LL);
            else
              v22 = 0LL;
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v22 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v21 + 16) + 56LL));
          }
        }
      }
    }
  }
  if ( v31 )
  {
    v23 = (const void *)*((_QWORD *)v31 + 1);
    if ( v23 )
    {
      if ( *v31 )
      {
        v24 = 8LL;
        if ( (unsigned __int16)*v31 < 8u )
          v24 = (unsigned __int16)*v31;
        memmove(&v32, v23, v24);
        v2 = v32;
      }
    }
  }
  KeBugCheckEx(0x1D5u, v2, (ULONG_PTR)&BugCheckParameter2, BugCheckParameter3, (unsigned int)v4);
}
