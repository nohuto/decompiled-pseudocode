/*
 * XREFs of HvpEnlistFreeCells @ 0x1408E2BC0
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1408666FC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1408E2D90 (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4)
{
  __int64 v4; // rsi
  char v5; // r13
  unsigned int i; // ebx
  unsigned int v10; // ecx
  unsigned int *v11; // r15
  unsigned int v12; // r14d
  int v14; // eax
  unsigned int v15; // r13d

  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v5 = 0;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  for ( i = 32; ; i += v12 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    if ( i >= v10 )
      return v5 != 0 ? 0x40000009 : 0;
    v11 = (unsigned int *)(a2 + i);
    v12 = *v11;
    if ( (*v11 & 0x80000000) != 0 )
      v12 = -v12;
    if ( v12 + i < i || v12 + i > v10 || (v12 & 7) != 0 || !v12 )
      break;
    if ( (*v11 & 0x80000000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 152) += v12;
      continue;
    }
LABEL_18:
    *(_DWORD *)(BugCheckParameter2 + 148) += v12;
    HvpEnlistFreeCell(BugCheckParameter2, i + a3);
  }
  SetFailureLocation(v4, 1, 26, -1073741492, 8);
  if ( (a4 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
  {
    SetFailureLocation(v4, 0, 26, -1073741492, 0);
    return 3221225804LL;
  }
  v12 = *(_DWORD *)(a2 + 8) - i;
  v14 = HvpMarkDirty(BugCheckParameter2, i + a3, v12, 0);
  v15 = v14;
  if ( v14 >= 0 )
  {
    memset_0((void *)(a2 + i), 0, v12);
    *v11 = v12;
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    SetFailureLocation(v4, 1, 26, 1073741833, 32);
    goto LABEL_18;
  }
  SetFailureLocation(v4, 0, 26, v14, 16);
  return v15;
}
