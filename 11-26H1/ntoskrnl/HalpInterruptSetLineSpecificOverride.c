/*
 * XREFs of HalpInterruptSetLineSpecificOverride @ 0x14057D9D8
 * Callers:
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpInterruptGsiToLine @ 0x14042638C (HalpInterruptGsiToLine.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpInterruptSetLineSpecificOverride(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 *v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = HalpInterruptGsiToLine(a1, &v9);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)HalpMmAllocCtxAlloc(v1, 40LL);
    v4 = (__int64)v3;
    if ( !v3 )
      return 3221225626LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v6 = v9;
    *(_QWORD *)(v4 + 16) = v9;
    *(_QWORD *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 36) = 2;
    *(_DWORD *)(v4 + 32) = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
    v8 = (__int64 *)qword_140F89668;
    if ( *(__int64 **)qword_140F89668 != &HalpInterruptOverrides )
      __fastfail(3u);
    *(_QWORD *)v4 = &HalpInterruptOverrides;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    qword_140F89668 = v4;
    HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v7);
  }
  return (unsigned int)v2;
}
