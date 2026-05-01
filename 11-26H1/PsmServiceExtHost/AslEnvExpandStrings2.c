/*
 * XREFs of AslEnvExpandStrings2 @ 0x1800A13C0
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslEnvExpandStrings @ 0x1800A11F8 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x1800A1B48 (AslpEnvResolveVars.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  _WORD *v10; // rbx
  _WORD *Heap; // rsi
  int v12; // r15d
  _QWORD *v13; // r14
  __int16 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v8 = -1LL;
  v22 = 0;
  v9 = -1LL;
  v10 = a2;
  Heap = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  if ( (unsigned int)AslpEnvResolveVars((_DWORD)a2, v12, 0, 0, a6, a7, (__int64)&v22) == -1073741789 )
  {
    if ( v12 != v22 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v22);
      if ( !Heap )
      {
        v15 = -1073741801;
        AslLogCallPrintf(1LL, "AslEnvExpandStrings2", 880LL, "Out of memory");
        goto LABEL_21;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v10[v16] );
      v17 = AslpEnvResolveVars((_DWORD)v10, (int)v16 + 1, (_DWORD)Heap, v22, a6, v14, (__int64)&v22);
      v15 = v17;
      if ( v17 < 0 )
      {
        LODWORD(v19) = v17;
        AslLogCallPrintf(1LL, "AslEnvExpandStrings2", 892LL, "AslpEnvResolveVars failed [%x]", v19);
        goto LABEL_21;
      }
      v10 = Heap;
    }
    do
      ++v8;
    while ( v10[v8] );
    v15 = AslEnvExpandStrings(a1, v10, v8, a3, v23, v13);
    if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
    {
      LODWORD(v20) = v15;
      AslLogCallPrintf(1LL, "AslEnvExpandStrings2", 907LL, "AslEnvExpandStrings failed [%x]", v20);
    }
  }
  else
  {
    v15 = -1073741595;
    AslLogCallPrintf(1LL, "AslEnvExpandStrings2", 872LL, "AslpEnvResolveVars failed to fail properly for null buffer");
  }
LABEL_21:
  AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return v15;
}
