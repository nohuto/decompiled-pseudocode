/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x18011901C
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpInitializationFailure @ 0x1800CDD30 (LdrpInitializationFailure.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E81A0 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 *result; // rax
  _BYTE v9[32]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+60h] [rbp-A0h]
  int *v11; // [rsp+68h] [rbp-98h]
  char v12; // [rsp+140h] [rbp+40h] BYREF
  int v13; // [rsp+148h] [rbp+48h] BYREF

  v13 = 0;
  memset_thunk_772440563353939046(v9, 0, 0xD0uLL);
  v0 = (__int64 *)qword_1801CB890;
  v11 = &v13;
  v10 = 0x80000;
  while ( v0 != &qword_1801CB890 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v9;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801CB890;
  v2 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801CB890 )
      goto LABEL_21;
    v2 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 152);
      v4 = *(__int64 **)(v3 + 40);
      if ( v4 )
        break;
    }
LABEL_17:
    v1 = *(_QWORD *)v1;
  }
  v5 = *(__int64 **)(v3 + 40);
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
    if ( (v5[3] & 1) == 0 )
    {
      v6 = v5[1];
      v7 = *(_DWORD *)(v6 + 56);
      if ( v7 == 7 )
      {
        v12 = 0;
        v13 = LdrpInitializeGraphRecurse((__int64 *)v6, (__int64)&v13, &v12);
        if ( v13 < 0 )
          goto LABEL_21;
        goto LABEL_16;
      }
      if ( v7 == -4 )
        break;
    }
LABEL_16:
    if ( v5 == v4 )
      goto LABEL_17;
  }
  v13 = -1073741502;
LABEL_21:
  for ( result = (__int64 *)qword_1801CB890; result != &qword_1801CB890; result = (__int64 *)*result )
  {
    v2 = (__int64)result;
    if ( (_BYTE *)result[22] == v9 )
      result[22] = 0LL;
  }
  if ( v13 < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      3663,
      (__int64)"LdrpInitializeShimDllDependencies",
      0,
      "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
      v2 + 72,
      v13);
    LdrpInitializationFailure(v13);
    return (__int64 *)ZwTerminateProcess(-1LL, (unsigned int)v13);
  }
  return result;
}
