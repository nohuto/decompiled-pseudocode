/*
 * XREFs of Amd64IsModifiedByBadActorInternal @ 0x1404C8BC4
 * Callers:
 *     Amd64IsModifiedByBadActor @ 0x1404C8AE0 (Amd64IsModifiedByBadActor.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A6D40 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64IsModifiedByBadActorInternal(unsigned int a1, int a2, __int64 a3, bool *a4)
{
  __int64 v4; // rax
  unsigned int v5; // r11d
  __int64 v7; // rbx
  __int64 v8; // r10
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v15; // edx

  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  v5 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(KiProcessorBlock[v4] + 88);
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v15 = v9 - 99;
      if ( v15 )
      {
        if ( v15 == 1 )
          v8 += 72LL;
        else
          v8 = 0LL;
      }
      else
      {
        v8 += 48LL;
      }
    }
    else
    {
      v8 += 24LL;
    }
  }
  if ( a1 < *(_DWORD *)(v8 + 4) )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v11 = 6LL * a1;
    v12 = *(_DWORD *)(v10 + 48LL * a1 + 24);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          return (unsigned int)-1073740024;
        else
          *a4 = a3 != 0;
        return v5;
      }
    }
    else
    {
      v7 = 0x100000LL;
    }
    _mm_lfence();
    *a4 = a3 != (**(_QWORD **)(v10 + 8 * v11 + 16) | v7 | 0x400000);
    return v5;
  }
  return 3221225711LL;
}
