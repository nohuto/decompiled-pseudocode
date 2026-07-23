/*
 * XREFs of MiValidateEntireInPage @ 0x14038C548
 * Callers:
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     SeValidateImageData @ 0x140AC0288 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateEntireInPage(__int64 a1)
{
  __int64 v2; // rcx
  PVOID v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    v3 = *(PVOID *)(v2 + 24);
  else
    v3 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 64) & 1) == 0
    || *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL)
    || (result = MiGetSectionStrongImageReference(), (int)result >= 0) )
  {
    if ( (int)SeValidateImageData(
                v4,
                (_DWORD)v3,
                *(_DWORD *)(a1 + 20) << 12,
                *(_QWORD *)(*(_QWORD *)a1 + 96LL),
                *(_DWORD *)(a1 + 48) & 2,
                (__int64)KeGetCurrentThread()->ApcState.Process) >= 0 )
      *(_DWORD *)(a1 + 64) |= 0x80u;
    return 0LL;
  }
  return result;
}
