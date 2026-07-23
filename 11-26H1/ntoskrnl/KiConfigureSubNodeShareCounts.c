/*
 * XREFs of KiConfigureSubNodeShareCounts @ 0x1405ED748
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14043F3F0 (KiBuildShareCountListForSubNodeByAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KiConfigureSubNodeShareCounts()
{
  __int64 result; // rax
  char v1; // r15
  char v2; // r14
  unsigned int v3; // edx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  unsigned __int8 CurrentIrql; // bl
  unsigned int i; // esi
  __int64 v9; // rdi
  _BYTE *v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r12

  result = (unsigned int)KeNumberProcessors_0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v4 = (_QWORD *)KiProcessorBlock[v3];
      v5 = v4[4564];
      if ( v5 != v4[25] )
        v1 = 1;
      v6 = v4[4567] == v5;
      result = (unsigned int)KeNumberProcessors_0;
      if ( !v6 )
        v2 = 1;
      ++v3;
    }
    while ( v3 < (unsigned int)KeNumberProcessors_0 );
    if ( v1 || v2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      for ( i = 0; i < (unsigned __int16)KiSubNodeCount; ++i )
      {
        v9 = *(_QWORD *)(KiSubNodes + 8LL * i);
        if ( v9 )
        {
          v10 = (_BYTE *)(v9 + 184);
          v11 = *(_QWORD *)(v9 + 128);
          v12 = v11 & ~*(_QWORD *)(v9 + 16);
          if ( v1 )
          {
            *v10 |= 2u;
            KiBuildShareCountListForSubNodeByAffinity((void *)(v9 + 512), *(_WORD *)(v9 + 136), v11, v12, 1);
          }
          if ( v2 )
          {
            *v10 |= 4u;
            KiBuildShareCountListForSubNodeByAffinity(
              (void *)(v9 + 576),
              *(_WORD *)(v9 + 136),
              *(_QWORD *)(v9 + 128),
              v12,
              2);
          }
        }
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
