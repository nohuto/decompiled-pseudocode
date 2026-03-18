/*
 * XREFs of MiUpdateOldPteWorker @ 0x14029C38C
 * Callers:
 *     MiUpdateOldPte @ 0x1402FDD30 (MiUpdateOldPte.c)
 *     MiUpdateOldPagesVpabCallback @ 0x1404C96D0 (MiUpdateOldPagesVpabCallback.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x14029C1E8 (MiEmptyWorkingSetHelper.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029CE20 (MiAcquirePrcbAgeTrimLists.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiLockSetPfnPriority @ 0x140457A10 (MiLockSetPfnPriority.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v8; // r10d
  __int64 result; // rax
  unsigned int v10; // edx

  v4 = *(_DWORD *)(a3 + 32);
  if ( (*(_QWORD *)(a3 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(a3 + 32) & 0x8000000) != 0
    && (a3 < 0xFFFFDE0000000000uLL
     || a3 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
     || (unsigned int)MiIsDecayPfn((__int64)(a3 + 0x220000000000LL) / 48)
     || (v4 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a3) == 9) )
  {
    v8 = 5;
  }
  else
  {
    v8 = HIBYTE(v4) & 7;
  }
  result = *a4;
  v10 = a4[1];
  if ( (result & 2) != 0 )
  {
    if ( v10 == 8 || v8 == v10 )
    {
      if ( !*((_QWORD *)a4 + 4) )
        MiAcquirePrcbAgeTrimLists(*(_QWORD *)(a1 + 32), a4 + 6);
      return MiEmptyWorkingSetHelper(a1, a2, *((_QWORD *)a4 + 4), 0);
    }
  }
  else if ( v8 > v10 )
  {
    return MiLockSetPfnPriority(a3);
  }
  return result;
}
