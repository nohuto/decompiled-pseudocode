/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x180118DCC
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 *i; // rax
  _BYTE v10[32]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+60h] [rbp-A0h]
  NTSTATUS *p_ExitStatus; // [rsp+68h] [rbp-98h]
  char v13; // [rsp+140h] [rbp+40h] BYREF
  NTSTATUS ExitStatus; // [rsp+148h] [rbp+48h] BYREF

  ExitStatus = 0;
  memset_thunk_772440563353939046(v10, 0, 0xD0uLL);
  v0 = (__int64 *)qword_1801CA8D0;
  p_ExitStatus = &ExitStatus;
  v11 = 0x80000;
  while ( v0 != &qword_1801CA8D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v10;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801CA8D0;
  v2 = 0LL;
  ExitStatus = 0;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801CA8D0 )
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
        v13 = 0;
        ExitStatus = LdrpInitializeGraphRecurse((__int64 *)v6, (__int64)&ExitStatus, &v13);
        if ( ExitStatus < 0 )
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
  ExitStatus = -1073741502;
LABEL_21:
  for ( i = (__int64 *)qword_1801CA8D0; i != &qword_1801CA8D0; i = (__int64 *)*i )
  {
    v2 = (__int64)i;
    if ( (_BYTE *)i[22] == v10 )
      i[22] = 0LL;
  }
  if ( ExitStatus < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3663,
      (__int64)"LdrpInitializeShimDllDependencies",
      0,
      "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
      v2 + 72,
      ExitStatus);
    LdrpInitializationFailure(ExitStatus);
    LODWORD(i) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  }
  return (int)i;
}
