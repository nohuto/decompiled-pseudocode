/*
 * XREFs of TcglibEalReuseCommand @ 0x14008D9CC
 * Callers:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x140134228 (TcglibpReinitRequestResources.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall TcglibEalReuseCommand(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // r9
  size_t v8; // rsi
  void *v9; // rdi

  v2 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v3 = *(unsigned int *)(a2 + 120);
      v4 = 64LL;
      v5 = *(void **)(v3 + a2 + 16);
      v6 = 60LL;
      v7 = *(_BYTE *)(v3 + a2 + 9);
    }
    else
    {
      v5 = *(void **)(a2 + 32);
      v4 = 24LL;
      v7 = *(_BYTE *)(a2 + 11);
      v6 = 16LL;
    }
    v8 = *(unsigned int *)(v6 + a2);
    v9 = *(void **)(v4 + a2);
    if ( v5 )
      memset_0(v5, 0, v7);
    if ( v9 )
      memset_0(v9, 0, v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
