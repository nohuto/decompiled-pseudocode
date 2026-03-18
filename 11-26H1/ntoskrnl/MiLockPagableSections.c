/*
 * XREFs of MiLockPagableSections @ 0x140D00C50
 * Callers:
 *     MiCancelPhase0Locking @ 0x140AC9B58 (MiCancelPhase0Locking.c)
 *     MiEnablePagingOfDriver @ 0x140CF24D0 (MiEnablePagingOfDriver.c)
 *     MiUnlockBootPageSections @ 0x140D01180 (MiUnlockBootPageSections.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140366F30 (MiLockPagableImageSection.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MiImagePagable @ 0x140864360 (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x140AC9A1C (MmImageSectionPagable.c)
 */

__int64 __fastcall MiLockPagableSections(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  result = MiImagePagable(a1, v2);
  if ( result )
  {
    v8 = 0LL;
    RtlImageNtHeaderEx(1, v2, 0LL, &v8);
    result = *(unsigned __int16 *)(v8 + 20);
    v6 = *(unsigned __int16 *)(v8 + 6);
    v7 = result + v8 + 24;
    if ( *(_WORD *)(v8 + 6) )
    {
      do
      {
        result = MmImageSectionPagable(v7);
        if ( (_DWORD)result )
          result = MiLockPagableImageSection(a1, v7, a2);
        v7 += 40LL;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
