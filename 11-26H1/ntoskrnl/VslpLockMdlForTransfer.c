/*
 * XREFs of VslpLockMdlForTransfer @ 0x14041084C
 * Callers:
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslLoadEnclaveData @ 0x140794F50 (VslLoadEnclaveData.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 */

__int64 __fastcall VslpLockMdlForTransfer(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  struct _MDL *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v3 = *(__int16 *)(a2 + 8);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 40) = a2 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a1 + 52) = a2 & 0xFFF;
  v6 = (struct _MDL *)(a1 + 8);
  v6->Next = 0LL;
  v6->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  if ( (a3 & 0x24) != 0 )
  {
    MmBuildMdlForNonPagedPool(v6);
  }
  else
  {
    result = MmProbeAndLockPagesEx((__int64)v6, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  *(_DWORD *)(a1 + 64) = a3 & 0x20;
  return 0LL;
}
