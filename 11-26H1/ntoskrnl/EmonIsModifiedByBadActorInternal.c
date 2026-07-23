/*
 * XREFs of EmonIsModifiedByBadActorInternal @ 0x1404B12EC
 * Callers:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B093C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B0DEC (EmonOverflowHandlerInternalV1.c)
 *     EmonIsModifiedByBadActor @ 0x1404B1240 (EmonIsModifiedByBadActor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonIsModifiedByBadActorInternal(unsigned int a1, int *a2, __int64 a3, _BYTE *a4)
{
  int v4; // edi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v14; // ecx
  unsigned __int64 v15; // rdx

  v4 = *a2;
  v5 = 0;
  v7 = a1;
  v8 = 0LL;
  if ( a1 <= a2[2] )
  {
    v9 = *((_QWORD *)a2 + 2);
    if ( *(_DWORD *)(v9 + 48LL * a1 + 28) != 3 )
    {
      v10 = *(_DWORD *)(v9 + 48LL * a1 + 24);
      if ( v10 )
      {
        v14 = v10 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            return (unsigned int)-1073740024;
          if ( !a3 )
          {
            if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts < 2u )
              goto LABEL_13;
            if ( v4 == 1 )
              LOBYTE(v7) = v7 + 32;
            v15 = (1LL << v7) & __readmsr(0x38Fu);
            if ( v4 != 1 || !v15 )
              goto LABEL_13;
          }
          goto LABEL_22;
        }
      }
      else if ( v4 == 1 )
      {
        v8 = 8LL << (4 * (unsigned __int8)v7);
      }
      else
      {
        v8 = 0x100000LL;
      }
      _mm_lfence();
      v11 = v8 | 0x400000;
      if ( v4 == 1 )
        v11 = v8;
      if ( a3 == (**(unsigned int **)(v9 + 48 * v7 + 16) | (unsigned __int64)v11) )
      {
        if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts < 2u )
          goto LABEL_13;
        if ( *a2 == 1 )
          LODWORD(v7) = v7 + 32;
        v12 = __readmsr(0x38Fu);
        if ( _bittest64((const __int64 *)&v12, (unsigned int)v7) )
        {
LABEL_13:
          *a4 = 0;
          return v5;
        }
      }
LABEL_22:
      *a4 = 1;
      return v5;
    }
  }
  return 3221225711LL;
}
