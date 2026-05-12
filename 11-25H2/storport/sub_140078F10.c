/*
 * XREFs of sub_140078F10 @ 0x140078F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140021324 @ 0x140021324 (sub_140021324.c)
 *     sub_140078FA4 @ 0x140078FA4 (sub_140078FA4.c)
 */

void __fastcall sub_140078F10(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // al
  int v6; // edx
  __int64 v7; // r8

  v5 = sub_140021280(a3);
  v6 = 0;
  if ( v5 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      v7 = *(_QWORD *)(a3 + 1872);
      LOBYTE(v6) = a1 == 1;
      if ( ((*(_DWORD *)(v7 + 32) >> 10) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFFFBFF | (v6 << 10);
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1872) + 32LL) & 0x100) != 0 )
        {
          sub_140078FA4(a3);
          sub_140021324(a3);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1864));
  }
}
