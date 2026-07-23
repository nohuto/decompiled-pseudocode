/*
 * XREFs of ExCreateHeap @ 0x1406D6934
 * Callers:
 *     ExInitializePagedHeaps @ 0x1406D69C4 (ExInitializePagedHeaps.c)
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 */

__int64 __fastcall ExCreateHeap(__int128 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rcx
  char v7; // dl
  char v8; // r8
  char InitialStack; // al
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = *a1;
  v4 = RtlpHpHeapCreate(a2, a2, (__int64)a3, &v11);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_BYTE *)(v4 + 333) | 0x10;
    v8 = *(_BYTE *)(v4 + 525) | 0x10;
    *(_BYTE *)(v4 + 333) = v7;
    *(_BYTE *)(v4 + 525) = v8;
    InitialStack = (char)ExSaPageGroupDescriptorArrayLock.InitialStack;
    *a3 = v6;
    if ( (InitialStack & 1) == 0 )
    {
      *(_BYTE *)(v6 + 333) = v7 | 0x20;
      *(_BYTE *)(v6 + 525) = v8 | 0x20;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
