/*
 * XREFs of MiDbgCompactPatchTable @ 0x140702024
 * Callers:
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     MiDeleteDebuggerPatches @ 0x1404E0030 (MiDeleteDebuggerPatches.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140703CCC (MmDbgMarkPfnModifiedWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall MiDbgCompactPatchTable(int a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned __int64 v6; // r10
  ULONG v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  ULONG v11; // eax
  ULONG *v12; // r15
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx
  ULONG *v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( dword_140E30910 == dword_140E30914 )
    return;
  if ( a1 )
    v2 = 17;
  else
    v2 = ExAcquireSpinLockExclusive(&dword_140E34918);
  v3 = dword_140E30914;
  if ( dword_140E30914 == dword_140E30910 )
    goto LABEL_23;
  do
  {
    *(&MiState + 6 * v3 + 2694) |= 1u;
    _InterlockedOr(v20, 0);
    v4 = 0LL;
    v5 = dword_140E34920;
    v6 = *((_QWORD *)&MiState + 3 * v3 + 1346);
    v7 = *(&MiState + 6 * v3 + 2694) >> 2;
    if ( !dword_140E34920 )
    {
LABEL_15:
      if ( *(&MiState + 6 * v3 + 2695) != *(&MiState + 6 * v3 + 2696) )
      {
        if ( dword_140E3491C == 512 )
          KeBugCheckEx(0x1Au, 0x2320AuLL, 0LL, 0LL, 0LL);
        v12 = &MiState + 6 * (unsigned int)dword_140E3491C + 4230;
        dword_140E3491C = v12[2] >> 2;
        *(_OWORD *)v12 = *(_OWORD *)(&MiState + 6 * v3 + 2692);
        *((_QWORD *)v12 + 2) = *((_QWORD *)&MiState + 3 * v3 + 1348);
        v12[2] &= ~1u;
        if ( (unsigned int)v4 < dword_140E34920 )
          memmove(
            &MiState + 2 * (unsigned int)(v4 + 1) + 7302,
            &MiState + 2 * v4 + 7302,
            8LL * (unsigned int)(dword_140E34920 - v4));
        *((_QWORD *)&MiState + v4 + 3651) = v12;
        ++dword_140E34920;
      }
      goto LABEL_20;
    }
    while ( 1 )
    {
      v8 = ((unsigned int)v4 + v5) >> 1;
      v9 = v8;
      v10 = *((_QWORD *)&MiState + v8 + 3651);
      if ( *(_QWORD *)v10 >= v6 )
        break;
      v4 = (unsigned int)(v8 + 1);
LABEL_14:
      if ( (unsigned int)v4 >= v5 )
        goto LABEL_15;
    }
    if ( *(_QWORD *)v10 > v6 )
      goto LABEL_13;
    v11 = *(_DWORD *)(v10 + 8) >> 2;
    if ( v11 < v7 )
    {
      v4 = (unsigned int)(v9 + 1);
      goto LABEL_14;
    }
    if ( v11 > v7 )
    {
LABEL_13:
      v5 = v9;
      goto LABEL_14;
    }
    v15 = *(&MiState + 6 * v3 + 2696);
    v16 = ((unsigned int)v4 + v5) >> 1;
    v17 = &MiState + 2 * v9 + 7302;
    v18 = *(_QWORD *)v17;
    if ( *(_DWORD *)(*(_QWORD *)v17 + 12LL) == v15 )
    {
      v19 = dword_140E34920 - 1;
      dword_140E34920 = v19;
      if ( v16 < v19 )
        memmove(v17, &MiState + 2 * v16 + 7304, 8LL * (v19 - v16));
      *(_DWORD *)(v18 + 8) |= 1u;
      *(_DWORD *)(v18 + 8) = (4 * dword_140E3491C) | *(_DWORD *)(v18 + 8) & 3;
      dword_140E3491C = (v18 - (__int64)&unk_140E30918) / 24;
    }
    else
    {
      *(_DWORD *)(v18 + 16) = v15;
    }
LABEL_20:
    v13 = v3;
    *((_QWORD *)&MiState + 3 * v3 + 1346) = 0LL;
    v14 = v3 + 1;
    v3 = 0;
    if ( v13 != 255 )
      v3 = v14;
    dword_140E30914 = v3;
  }
  while ( v3 != dword_140E30910 );
LABEL_23:
  if ( !a1 )
  {
    if ( v2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34918);
    else
      ExReleaseSpinLockExclusive(&dword_140E34918, v2);
  }
}
