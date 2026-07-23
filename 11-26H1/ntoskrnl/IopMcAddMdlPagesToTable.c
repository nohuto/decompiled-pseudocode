/*
 * XREFs of IopMcAddMdlPagesToTable @ 0x1402EF218
 * Callers:
 *     IopMcCreateBufferEntryMdl @ 0x14079E10C (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     IopMcShouldYield @ 0x1402EF3B8 (IopMcShouldYield.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall IopMcAddMdlPagesToTable(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdx
  KIRQL v8; // bp
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // r10
  bool v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v3 = ((*(_DWORD *)(a2 + 44) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  if ( FeaturePfnArrayDebug && *(_QWORD *)(BugCheckParameter2 + 88) )
    KeBugCheckEx(0x1F4u, 7uLL, BugCheckParameter2, 0LL, *(_QWORD *)(BugCheckParameter2 + 88));
  *(_QWORD *)(BugCheckParameter2 + 88) = a2 + 48;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    v5 = (_DWORD *)(BugCheckParameter2 + 120);
    do
    {
      *v5 = v4++;
      v5 += 8;
    }
    while ( v4 < (unsigned int)v3 );
  }
  v18 = 0;
  v6 = 0;
  v8 = ExAcquireSpinLockExclusive(&dword_140F850E4);
  if ( !(_DWORD)v3 )
    goto LABEL_19;
  v9 = BugCheckParameter2 + 96;
  do
  {
    LOBYTE(v7) = v8;
    if ( (unsigned __int8)IopMcShouldYield(v6, v7) )
    {
      ExReleaseSpinLockExclusive(&dword_140F850E4, v8);
      KeYieldProcessorEx(&v18);
      v8 = ExAcquireSpinLockExclusive(&dword_140F850E4);
    }
    v10 = qword_140F850E8;
    v11 = 0;
    if ( !qword_140F850E8 )
      goto LABEL_17;
    v12 = *(unsigned int *)(v9 + 24);
    v13 = v9 - (unsigned int)(32 * (v12 + 3));
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 88) + 8 * v12);
    while ( 1 )
    {
      v7 = *(unsigned int *)(v10 + 24);
      v15 = v10 - (unsigned int)(32 * (v7 + 3));
      v16 = *(_QWORD *)(v15 + 88);
      if ( v14 >= *(_QWORD *)(v16 + 8 * v7) )
      {
        if ( v14 > *(_QWORD *)(v16 + 8 * v7) )
          goto LABEL_13;
        if ( v13 >= v15 )
          break;
      }
      v17 = *(_QWORD *)v10;
      if ( !*(_QWORD *)v10 )
      {
        v11 = 0;
        goto LABEL_17;
      }
LABEL_14:
      v10 = v17;
    }
    if ( v13 <= v15 )
      goto LABEL_18;
LABEL_13:
    v17 = *(_QWORD *)(v10 + 8);
    if ( v17 )
      goto LABEL_14;
    v11 = 1;
LABEL_17:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140F850E8, v10, v11, (_QWORD *)v9);
LABEL_18:
    ++v6;
    v9 += 32LL;
  }
  while ( v6 < (unsigned int)v3 );
LABEL_19:
  ExReleaseSpinLockExclusive(&dword_140F850E4, v8);
}
