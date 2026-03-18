/*
 * XREFs of MiDeleteDebuggerPatches @ 0x1404E6B90
 * Callers:
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x1404E6B64 (MiDestroySection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiDbgCompactPatchTable @ 0x1406FD354 (MiDbgCompactPatchTable.c)
 *     MiDbgFindFirstPatch @ 0x1406FDF60 (MiDbgFindFirstPatch.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

_UNKNOWN **__fastcall MiDeleteDebuggerPatches(__int64 a1)
{
  _UNKNOWN **result; // rax
  bool v2; // zf
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rbx
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned int v15; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = (*(_BYTE *)(a1 + 96) & 1) == 0;
  v3 = a1;
  v15 = 0;
  if ( !v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34798);
    MiDbgCompactPatchTable(1LL);
    if ( (unsigned int)MiDbgFindFirstPatch(v3, 0LL, 0LL, &v15) )
    {
      v5 = v15;
      v6 = v15;
      if ( v15 < dword_140E347A0 )
      {
        v7 = v15;
        v8 = v15;
        do
        {
          if ( **((_QWORD **)&MiState + v7 + 3651) != v3 )
            break;
          v7 = ++v8;
          v6 = v8;
        }
        while ( v8 < dword_140E347A0 );
      }
      v9 = v15;
      if ( v15 < v6 )
      {
        v10 = v15;
        do
        {
          v11 = v9;
          v9 = v10 + 1;
          v10 = v9;
          v12 = *((_QWORD *)&MiState + v11 + 3651);
          *(_DWORD *)(v12 + 8) |= 1u;
          *(_DWORD *)(v12 + 8) = (4 * dword_140E3479C) | *(_DWORD *)(v12 + 8) & 3;
          v13 = (__int64)((unsigned __int128)((v12 - (__int64)&unk_140E30798) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
          dword_140E3479C = (v13 >> 63) + v13;
        }
        while ( v9 < v6 );
      }
      if ( v9 == dword_140E347A0 )
      {
        dword_140E347A0 = v5;
      }
      else
      {
        memmove(&MiState + 2 * v5 + 7302, &MiState + 2 * v9 + 7302, 8LL * (dword_140E347A0 - v9));
        dword_140E347A0 += v5 - v9;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 96), 0xFFFFFFFFFFFFFFFEuLL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34798);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
