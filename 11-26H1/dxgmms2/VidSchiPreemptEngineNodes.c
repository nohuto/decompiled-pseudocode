/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1400C070C
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400C0880 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039488 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x14003CADC (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 */

char __fastcall VidSchiPreemptEngineNodes(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 v8; // r10
  __int64 v10; // rax
  unsigned int v12; // ebp
  char v13; // si
  unsigned int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v8 = 352LL * a2;
  *a4 = 0LL;
  v10 = *(_QWORD *)(v4 + 3032);
  v12 = *(unsigned __int16 *)(v10 + v8);
  if ( !*(_WORD *)(v10 + v8) )
    return v10;
  v13 = 0;
  do
  {
    if ( !_bittest64(&a3, v5) )
      goto LABEL_15;
    v14 = VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2);
    v15 = *(__int64 **)(a1 + 696);
    if ( v14 < *(_DWORD *)(a1 + 768) )
      v15 += v14;
    v16 = *v15;
    if ( (*(_DWORD *)(v16 + 12) & 2) == 0 )
    {
      if ( !*(_DWORD *)(v16 + 3020) )
        goto LABEL_15;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 796));
      if ( _InterlockedIncrement((volatile signed __int32 *)(v16 + 3024)) != 1 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 3024));
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 796));
        goto LABEL_15;
      }
      *(_QWORD *)(v16 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(v16);
LABEL_14:
      *a4 |= 1LL << v13;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v16 + 1728) || *(_DWORD *)(v16 + 1736) )
      goto LABEL_14;
LABEL_15:
    ++v5;
    ++v13;
  }
  while ( v5 < v12 );
  v17 = 0;
  do
  {
    v10 = *a4;
    if ( _bittest64(&v10, v17) )
    {
      v18 = VidSchiDriverNodeEngineToSchedulerNode(a1, v17, a2);
      v19 = *(__int64 **)(a1 + 696);
      if ( v18 < *(_DWORD *)(a1 + 768) )
        v19 += v18;
      v20 = *v19;
      LODWORD(v10) = *(_DWORD *)(v20 + 12);
      if ( (v10 & 2) == 0 )
      {
        VidSchiCompletePreemption(v20);
        LOBYTE(v10) = VidSchIsTDRPending(a1);
        if ( (_BYTE)v10 )
          break;
      }
    }
    ++v17;
  }
  while ( v17 < v12 );
  return v10;
}
