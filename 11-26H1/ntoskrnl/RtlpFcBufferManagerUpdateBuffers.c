/*
 * XREFs of RtlpFcBufferManagerUpdateBuffers @ 0x140ABF140
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140ABEC64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartBootPhase @ 0x140CF0A18 (CmFcManagerStartBootPhase.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlpFcInitializeBuffers @ 0x1405185B0 (RtlpFcInitializeBuffers.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 */

void *__fastcall RtlpFcBufferManagerUpdateBuffers(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // r8

  v4 = *a1 & 1LL;
  v6 = 4LL;
  v7 = ((*a1 & 1) - 1) & 1;
  v8 = (__int64)&a1[12 * v7 + 3];
  v9 = (char *)&a1[12 * v4 + 3] - v8;
  v10 = a3 - v8;
  do
  {
    if ( *(_QWORD *)(v8 + v10) )
    {
      *(_OWORD *)v8 = *(_OWORD *)(v8 + v10);
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + v10 + 16);
      *(_OWORD *)(v8 + v10) = *(_OWORD *)&v9[v8];
      *(_QWORD *)(v8 + v10 + 16) = *(_QWORD *)&v9[v8 + 16];
    }
    else
    {
      *(_OWORD *)v8 = *(_OWORD *)&v9[v8];
      *(_QWORD *)(v8 + 16) = *(_QWORD *)&v9[v8 + 16];
    }
    v8 += 24LL;
    --v6;
  }
  while ( v6 );
  a1[v7 + 27] = a2;
  RtlUpdateSwapReference(a1);
  a1[v4 + 27] = 0LL;
  return RtlpFcInitializeBuffers(&a1[12 * v4 + 3]);
}
