/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x1404F3450
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

void __fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // edx
  __int16 v6; // r9
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  if ( a2 && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v7 = a3;
    v8 = 4 * a2;
    v9 = 0;
    if ( a1 )
    {
      v4 = 1538;
      v5 = 1;
      v6 = 4671;
    }
    else
    {
      v4 = 1539;
      v10 = a4;
      v5 = 2;
      v11 = 4LL;
      v6 = 4672;
    }
    EtwTraceKernelEvent((int)&v7, v5, 0x40008000u, v6, v4);
  }
}
