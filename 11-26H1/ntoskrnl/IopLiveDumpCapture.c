/*
 * XREFs of IopLiveDumpCapture @ 0x1405D0DCC
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEnterCorralledState @ 0x1405D1860 (IopLiveDumpEnterCorralledState.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 */

__int64 __fastcall IopLiveDumpCapture(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  bool v4; // cf
  int v5; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 40);
  v8 = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    IopLiveDumpEnterCorralledState();
    return (unsigned int)IopLiveDumpCollectPages(a1);
  }
  else
  {
    v7[0] = IopLiveDumpStartMirroringCallback;
    v4 = (v1 & 4) != 0;
    v5 = *(_DWORD *)(a1 + 80);
    v7[1] = IopLiveDumpEndMirroringCallback;
    v7[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
    DWORD2(v8) = v4 ? 657 : 593;
    if ( (v5 & 0x20) != 0 )
      DWORD2(v8) = (v4 ? 657 : 593) | 0x100;
    MmLockPagableSectionByHandle(ExPageLockHandle);
    v3 = MmDuplicateMemory(v7);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  return v3;
}
