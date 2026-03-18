/*
 * XREFs of _BeginDeferWindowPos @ 0x14004E2E8
 * Callers:
 *     NtUserBeginDeferWindowPos @ 0x14004E2A0 (NtUserBeginDeferWindowPos.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x14015CF34 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     AllocateCvr @ 0x14004E360 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  LOBYTE(v4) = 4;
  v5 = HMAllocObject(v3, 0LL, v4, 48LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = 8LL;
    if ( v2 )
      v7 = v2;
    if ( (unsigned int)AllocateCvr(v5, v7) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return v6;
    }
    HMFreeObject(v6);
  }
  return 0LL;
}
