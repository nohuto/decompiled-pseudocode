/*
 * XREFs of HvpBuildMapForMemoryBackedHive @ 0x1408666FC
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpEnlistFreeCells @ 0x1408E2BC0 (HvpEnlistFreeCells.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     HvpValidateLoadedBin @ 0x140A83730 (HvpValidateLoadedBin.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
 *     HvpInitMap @ 0x140ABBC40 (HvpInitMap.c)
 */

__int64 __fastcall HvpBuildMapForMemoryBackedHive(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v8; // r14
  char v10; // r15
  int inited; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  _DWORD *v14; // r14
  int v15; // eax

  v5 = *(_QWORD *)(BugCheckParameter2 + 56);
  v8 = a2;
  v10 = 0;
  inited = HvpInitMap();
  if ( inited >= 0 )
  {
    if ( a4 )
    {
      memmove(
        *(void **)(BugCheckParameter2 + 96),
        *(const void **)(a4 + 8),
        (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 88) >> 3);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
    }
    if ( a5 )
    {
      memmove(
        *(void **)(BugCheckParameter2 + 120),
        *(const void **)(a5 + 8),
        (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 112) >> 3);
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    v12 = 0;
    v13 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    while ( v12 < v13 )
    {
      v14 = (_DWORD *)(v12 + v8);
      if ( !(unsigned __int8)HvpValidateLoadedBin(v14, v12, v13) )
      {
        if ( (a3 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
        {
          inited = -1073741492;
          SetFailureLocation(v5, 0, 4, -1073741492, 0);
          goto LABEL_20;
        }
        *v14 = 1852400232;
        v14[1] = v12;
        v14[2] = 4096;
        v10 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v5, 1, 4, 1073741833, 0);
      }
      if ( !(unsigned __int8)CmpClaimGlobalQuota((unsigned int)v14[2]) )
      {
        inited = -1073741670;
        SetFailureLocation(v5, 0, 4, -1073741670, 16);
LABEL_20:
        *(_DWORD *)(v5 + 296) = v13;
        *(_DWORD *)(v5 + 300) = v12;
LABEL_21:
        *(_QWORD *)(v5 + 304) = v14;
        return (unsigned int)inited;
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, 0, 0LL);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 2) == 0 )
      {
        v15 = HvpEnlistFreeCells(BugCheckParameter2);
        if ( v15 == 1073741833 )
        {
          v10 = 1;
        }
        else if ( v15 < 0 )
        {
          inited = -1073741492;
          SetFailureLocation(v5, 0, 4, -1073741492, 32);
          *(_DWORD *)(v5 + 296) = v14[2];
          *(_DWORD *)(v5 + 300) = v14[1];
          goto LABEL_21;
        }
      }
      v12 += v14[2];
      v8 = a2;
    }
    return v10 != 0 ? 0x40000009u : 0;
  }
  return (unsigned int)inited;
}
