/*
 * XREFs of ObpDestroyStackAndObjectTables @ 0x1407C4A14
 * Callers:
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     RtlStackDbContextCleanup @ 0x140623170 (RtlStackDbContextCleanup.c)
 *     ObpDestroyObjectRefsByStack @ 0x1407C49F0 (ObpDestroyObjectRefsByStack.c)
 */

__int64 __fastcall ObpDestroyStackAndObjectTables(__int64 **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // r15
  __int64 *v5; // rbx
  __int64 **v7; // rdi
  __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 **v12; // rcx

  v4 = a3;
  v5 = (__int64 *)a2;
  v7 = a1;
  v8 = 401LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      do
      {
        v10 = *v9;
        v11 = (__int64 *)v9[1];
        --LODWORD(stru_140F12D20.Padding[4]);
        *(_BYTE *)(v10 + 25) &= ~1u;
        if ( v4 )
          ObpDestroyObjectRefsByStack(v9, a2, a3, a4);
        else
          ObpTraceFreeMemory(v9);
        v9 = v11;
      }
      while ( v11 );
    }
    ++v7;
    --v8;
  }
  while ( v8 );
  v12 = a1;
  while ( 1 )
  {
    ObpTraceFreeMemory(v12);
    if ( !v5 )
      break;
    v12 = (__int64 **)v5;
    v5 = (__int64 *)*v5;
  }
  return RtlStackDbContextCleanup();
}
