/*
 * XREFs of MiEnableImageDirectMap @ 0x1406FE504
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408730F8 (MiAllocateEntireImageFileExtents.c)
 *     MiInitializeImageExtents @ 0x140873770 (MiInitializeImageExtents.c)
 */

__int64 __fastcall MiEnableImageDirectMap(__int64 a1, __int64 *a2, __int64 a3, void *a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r13
  KIRQL v11; // r8
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  int v14; // edi
  __int64 result; // rax
  unsigned int *v16; // rbx
  __int64 v17; // rax
  void *v18; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !a7 && !BYTE2(stru_140E2D2D0.ThreadLock) )
  {
    if ( a5 )
    {
      if ( (*(_DWORD *)(a3 + 8) & 0xFFF) == 0 )
      {
        v11 = ExAcquireSpinLockExclusive(&dword_140E2C940);
        v12 = **(_QWORD **)(a1 + 40);
        if ( !v12 || (*(_DWORD *)(v12 + 56) & 3) == 0 && (*(_DWORD *)(v12 + 56) & 0x30000000) != 0x10000000 )
          *((_DWORD *)a2 + 14) = a2[7] & 0xCFFFFFFF | 0x10000000;
        if ( v11 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
        else
          ExReleaseSpinLockExclusive(&dword_140E2C940, v11);
      }
    }
    else
    {
      *((_DWORD *)a2 + 14) = a2[7] & 0xCFFFFFFF | 0x10000000;
    }
  }
  if ( a6 )
    *(_DWORD *)(v8 + 56) |= 0x1000u;
  v13 = a2 + 7;
  if ( (a2[7] & 0x30000000) == 0x10000000 )
  {
    a2[8] = a1;
    v14 = MiInitializeImageExtents(a2);
    ObFastReplaceObject(a2 + 8, 0LL);
    if ( v14 >= 0 )
    {
      MiDeleteFileExtentList(a4);
      return (unsigned int)v14;
    }
    v16 = (unsigned int *)(a2 + 7);
    if ( v14 != -1073741800 )
    {
      if ( v14 != -1073741637 )
        return (unsigned int)v14;
      v16 = (unsigned int *)(a2 + 7);
    }
    *v13 &= 0xCFFFFFFF;
  }
  else
  {
    v16 = (unsigned int *)(a2 + 7);
  }
  if ( a6 )
  {
    v17 = *a2;
    v18 = 0LL;
    result = MiAllocateEntireImageFileExtents(a1, (unsigned int)(*(_DWORD *)(v17 + 8) << 12), a4, &v18);
    if ( (int)result < 0 )
      return result;
    a4 = v18;
  }
  *(_QWORD *)(v8 + 48) = a4;
  *v16 = *v13 & 0xCFFFFFFF | 0x20000000;
  return 0LL;
}
