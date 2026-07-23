/*
 * XREFs of MiReserveUserMemoryFinishVad @ 0x140A01EA0
 * Callers:
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140414D68 (MiUnlockAndDereferenceNestedVad.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 */

__int64 __fastcall MiReserveUserMemoryFinishVad(__int64 *a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rsi
  ULONG_PTR v4; // rbp
  int VadFlags; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // r8d
  bool v9; // zf
  __int64 v10; // rdx
  signed int v11; // eax
  int UserPhysicalViewCharges; // ebx
  int v14; // r15d
  int v15; // r9d
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

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
    v14 = MiMapUserLargePages(v6, *(_DWORD *)(v3 + 48), *(_BYTE *)(v3 + 52), a1[1]);
    if ( v14 < 0 )
    {
      MiDeleteVad((ULONG_PTR)v1, v4, 0x40000000);
      return (unsigned int)v14;
    }
  }
  if ( (v7 & 0x1C) == 0xC
    && (v7 & 0x880000) != 0x880000
    && (UserPhysicalViewCharges = MiCreateUserPhysicalViewCharges((__int64)v1), UserPhysicalViewCharges < 0)
    || (v8 = *(_DWORD *)(v3 + 120)) != 0
    && (UserPhysicalViewCharges = MiCommitVadMetadataBits((__int64)v1, 0LL, v8), UserPhysicalViewCharges < 0) )
  {
LABEL_16:
    MiDeleteVad((ULONG_PTR)v1, v4, 0x40000000);
    return (unsigned int)UserPhysicalViewCharges;
  }
  if ( *(_QWORD *)(v3 + 72) )
  {
    v9 = (*(_DWORD *)(v3 + 60) & 0x40000000) == 0;
    v16 = 0LL;
    if ( v9 )
    {
      v15 = *(_DWORD *)(v3 + 64);
      if ( v15 != 1 && v15 != -2147483647 && v15 != 2 && v15 != 4 )
      {
        v11 = -1073741755;
        goto LABEL_28;
      }
      v11 = MiSecureVad((_DWORD)v1, a1[6], *(_QWORD *)(v3 + 24), v15, 0, (__int64)&v16);
      v10 = v16;
    }
    else
    {
      v10 = MiAddSecureEntry((_DWORD)v1, v1[6] << 12, (v1[7] << 12) | 0xFFFu, *(_DWORD *)(v3 + 64), 1);
      v11 = v10 == 0 ? 0xC000009A : 0;
    }
    if ( v11 >= 0 )
    {
      **(_QWORD **)(v3 + 72) = qword_140E2D7C0 ^ v10;
      goto LABEL_11;
    }
LABEL_28:
    UserPhysicalViewCharges = v11;
    goto LABEL_16;
  }
LABEL_11:
  if ( v4 )
    MiUnlockAndDereferenceNestedVad(v1);
  else
    MiUnlockAndDereferenceVad(v1);
  return 0LL;
}
