/*
 * XREFs of BgpConsoleClearScreenEx @ 0x140C55D78
 * Callers:
 *     BgpConsoleClearScreen @ 0x140C55D40 (BgpConsoleClearScreen.c)
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 * Callees:
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  _DWORD *NormalContext; // rcx
  int v1; // r8d
  _DWORD *v2; // r9
  __int64 v3; // r10
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx

  NormalContext = WheapPfaLock.SchedulerApc.NormalContext;
  *(_QWORD *)((char *)WheapPfaLock.SchedulerApc.NormalContext + 68) = 0LL;
  v1 = BgpClearScreen(NormalContext[4]);
  if ( v1 >= 0 )
  {
    v2 = WheapPfaLock.SchedulerApc.NormalContext;
    v3 = 0LL;
    v4 = *((_DWORD *)WheapPfaLock.SchedulerApc.NormalContext + 1);
    v5 = 80LL;
    do
    {
      for ( i = 0; i < v4; v4 = v2[1] )
      {
        v7 = i++;
        v8 = 3 * (v3 + v7);
        LOWORD(v2[v8 + 22]) = 32;
        v2[3 * v3 + 21 + 3 * v7] = v2[4];
        v2[v8 + 20] = v2[3];
      }
      v3 += 25LL;
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v1;
}
