/*
 * XREFs of MiReferenceInPageFile @ 0x14038F034
 * Callers:
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 * Callees:
 *     MiComputeImagePteIndex @ 0x14038ECA0 (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
    return 0LL;
  v4 = **(_QWORD **)(a1 + 192);
  v5 = MiReferenceControlAreaFileWithTag(v4, 1666411853LL, a3);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
    if ( (*(_DWORD *)(a1 + 188) & 0x400000) != 0 )
      v7 = 0LL;
    else
      v7 = *(_QWORD *)(a1 + 208);
    v8 = a1 + 272;
    if ( v7 )
      v8 = v7;
    *(_DWORD *)(a1 + 216) = MiComputeImagePteIndex(48LL * *(_QWORD *)(v8 + 48) - 0x220000000000LL);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  return v5;
}
