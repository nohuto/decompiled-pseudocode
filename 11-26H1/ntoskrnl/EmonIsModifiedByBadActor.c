/*
 * XREFs of EmonIsModifiedByBadActor @ 0x1404B1240
 * Callers:
 *     <none>
 * Callees:
 *     EmonIsModifiedByBadActorInternal @ 0x1404B12EC (EmonIsModifiedByBadActorInternal.c)
 */

__int64 __fastcall EmonIsModifiedByBadActor(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // r10
  int v6; // edx
  unsigned __int64 v7; // r8
  int v9; // edx

  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v5 = *(_DWORD **)(KiProcessorBlock[v3] + 88);
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v9 = v6 - 99;
      if ( v9 )
      {
        if ( v9 == 1 )
          v5 += 18;
        else
          v5 = 0LL;
      }
      else
      {
        v5 += 12;
      }
    }
    else
    {
      v5 += 6;
    }
  }
  if ( !*v5 )
  {
    v7 = __readmsr(a1 + 390);
    return EmonIsModifiedByBadActorInternal(a1, v5, v7, a3);
  }
  if ( *v5 == 1 )
  {
    v7 = (15LL << (4 * (unsigned __int8)a1)) & __readmsr(0x38Du);
    return EmonIsModifiedByBadActorInternal(a1, v5, v7, a3);
  }
  return 3221225712LL;
}
