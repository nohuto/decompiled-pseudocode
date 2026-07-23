/*
 * XREFs of PspGetCpuAndMemoryPartitionImplicit @ 0x140AAC5A4
 * Callers:
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAC4C4 (PspGetCpuAndMemoryPartitionContext.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspGetCpuAndMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 EffectiveServerSilo; // rbx
  void *v11; // rcx
  void *v12; // rcx

  v4 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1304) )
    {
      if ( (*(_DWORD *)(EffectiveServerSilo + 256) & 0x1000) == 0
        && ((*(_DWORD *)(EffectiveServerSilo + 256) & 0x800) == 0 || (a2 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a2 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1552) & 0x40000000) == 0 )
    {
      v4 = -1073741790;
      goto LABEL_19;
    }
  }
  if ( EffectiveServerSilo )
  {
    v11 = *(void **)(EffectiveServerSilo + 1792);
    if ( v11 == (void *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x72437350u);
      v12 = *(void **)(EffectiveServerSilo + 1832);
      if ( v12 )
        ObfReferenceObjectWithTag(v12, 0x72437350u);
      *a3 = *(_QWORD *)(EffectiveServerSilo + 1792);
      *a4 = *(_QWORD *)(EffectiveServerSilo + 1832);
    }
  }
LABEL_19:
  PspUnlockJobChain(a1, CurrentThread);
  return v4;
}
