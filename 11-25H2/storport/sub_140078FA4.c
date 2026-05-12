/*
 * XREFs of sub_140078FA4 @ 0x140078FA4
 * Callers:
 *     sub_140078D60 @ 0x140078D60 (sub_140078D60.c)
 *     sub_140078F10 @ 0x140078F10 (sub_140078F10.c)
 *     sub_140079170 @ 0x140079170 (sub_140079170.c)
 * Callees:
 *     sub_140021150 @ 0x140021150 (sub_140021150.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140076E64 @ 0x140076E64 (sub_140076E64.c)
 */

void __fastcall sub_140078FA4(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( sub_140021280(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1872);
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x100) != 0
      && (v3 & 0x400) != 0
      && (v3 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 148), 0) )
    {
      v4 = *(_QWORD *)(a1 + 1872);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v4 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v4 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v4 + 128) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL) = ExAllocateTimer(sub_140078D60, a1, 0LL);
        v5 = *(_QWORD *)(a1 + 1872);
        if ( *(_QWORD *)(v5 + 128) )
        {
          if ( (byte_1401694F6 & 4) != 0 )
            sub_140076E64(
              a1 + 177,
              a1 + 168,
              a1 + 2104,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
              *(_QWORD *)(a1 + 24) + 5064LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              *(_BYTE *)(a1 + 106),
              a1 + 2104,
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242));
          sub_140021150(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v5 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
