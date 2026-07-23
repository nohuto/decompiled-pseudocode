/*
 * XREFs of MiInitializeScrubPacket @ 0x140883E14
 * Callers:
 *     MiScrubMemoryWorker @ 0x140884240 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiReleaseScrubPacket @ 0x140884158 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 *a1)
{
  int v2; // r8d
  unsigned int v3; // edi
  int v5; // r9d
  __int64 v6; // rsi
  __int64 PoolMm; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 2) + 1;
  v11 = 0LL;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v2,
    (__int64)&v11);
  v3 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)(a1 + 6), (__int64)&v11, 15, 0LL) )
    return 3221225626LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = *a1;
  a1[22] = 0LL;
  a1[23] = 0LL;
  PoolMm = ExAllocatePoolMm(64LL, 0x1000uLL, 1667450189, v5);
  a1[22] = PoolMm;
  if ( PoolMm )
  {
    v8 = a1 + 24;
    v9 = 2LL;
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 16LL) + 56320LL * *((unsigned int *)a1 + 2) - (_QWORD)a1;
    do
    {
      *v8 = *(_QWORD *)((char *)v8 + v10 + 13968);
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    v3 = -1073741670;
    MiReleaseScrubPacket(a1);
  }
  return v3;
}
