/*
 * XREFs of MiReserveUserMemoryFinishVad @ 0x14095C5E0
 * Callers:
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 * Callees:
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14041D518 (MiUnlockAndDereferenceNestedVad.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiCommitVadMetadataBits @ 0x1409C6E14 (MiCommitVadMetadataBits.c)
 *     MiSecureVad @ 0x140B4F310 (MiSecureVad.c)
 */

__int64 __fastcall MiReserveUserMemoryFinishVad(__int64 *a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rsi
  ULONG_PTR v4; // rbp
  int VadFlags; // eax
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // zf
  __int64 v9; // rdx
  signed int v10; // eax
  int UserPhysicalViewCharges; // ebx
  int v13; // r15d
  int v14; // r9d
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_DWORD *)a1[4];
  v3 = *a1;
  v4 = a1[5];
  MiReferenceVad((ULONG_PTR)v1);
  VadFlags = MiReadVadFlags((__int64)v1);
  v7 = VadFlags;
  if ( (VadFlags & 0x80000) != 0
    && ((VadFlags & 0x200000) != 0 || (VadFlags & 0x60000u) >= 0x40000)
    && (VadFlags & 0x400000) != 0 )
  {
    v13 = MiMapUserLargePages(v6, *(_DWORD *)(v3 + 48), *(_BYTE *)(v3 + 52), a1[1]);
    if ( v13 < 0 )
    {
      MiDeleteVad((ULONG_PTR)v1, v4, 0x40000000);
      return (unsigned int)v13;
    }
  }
  if ( (v7 & 0x1C) == 0xC
    && (v7 & 0x880000) != 0x880000
    && (UserPhysicalViewCharges = MiCreateUserPhysicalViewCharges((__int64)v1), UserPhysicalViewCharges < 0)
    || *(_DWORD *)(v3 + 120)
    && (UserPhysicalViewCharges = MiCommitVadMetadataBits(v1, 0LL), UserPhysicalViewCharges < 0) )
  {
LABEL_16:
    MiDeleteVad((ULONG_PTR)v1, v4, 0x40000000);
    return (unsigned int)UserPhysicalViewCharges;
  }
  if ( *(_QWORD *)(v3 + 72) )
  {
    v8 = (*(_DWORD *)(v3 + 60) & 0x40000000) == 0;
    v15 = 0LL;
    if ( v8 )
    {
      v14 = *(_DWORD *)(v3 + 64);
      if ( v14 != 1 && v14 != -2147483647 && v14 != 2 && v14 != 4 )
      {
        v10 = -1073741755;
        goto LABEL_28;
      }
      v10 = MiSecureVad((_DWORD)v1, a1[6], *(_QWORD *)(v3 + 24), v14, 0, (__int64)&v15);
      v9 = v15;
    }
    else
    {
      v9 = MiAddSecureEntry((_DWORD)v1, v1[6] << 12, (v1[7] << 12) | 0xFFFu, *(_DWORD *)(v3 + 64), 1);
      v10 = v9 == 0 ? 0xC000009A : 0;
    }
    if ( v10 >= 0 )
    {
      **(_QWORD **)(v3 + 72) = qword_140E2D640 ^ v9;
      goto LABEL_11;
    }
LABEL_28:
    UserPhysicalViewCharges = v10;
    goto LABEL_16;
  }
LABEL_11:
  if ( v4 )
    MiUnlockAndDereferenceNestedVad(v1);
  else
    MiUnlockAndDereferenceVad(v1);
  return 0LL;
}
