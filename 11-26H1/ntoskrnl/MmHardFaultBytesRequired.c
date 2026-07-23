/*
 * XREFs of MmHardFaultBytesRequired @ 0x140A74460
 * Callers:
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiSystemCacheVaSubsection @ 0x140460620 (MiSystemCacheVaSubsection.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1)
{
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 i; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r8

  SystemCacheReverseMap = MiGetSystemCacheReverseMap(a1 & 0xFFFFFFFFFFFC0000uLL);
  v2 = MiSystemCacheVaSubsection(SystemCacheReverseMap);
  v5 = ((unsigned __int64)(v3 & 0xFFF) + v4 + 4095) >> 12;
  v6 = *(unsigned int *)(v2 + 44);
  for ( i = v3 / 4096 - (*(unsigned int *)(v2 + 36) | ((unsigned __int64)(*(_DWORD *)(v2 + 32) & 0xFFC0) << 26));
        i >= v6;
        v6 = *(unsigned int *)(v2 + 44) )
  {
    v2 = *(_QWORD *)(v2 + 16);
    i -= v6;
  }
  v8 = *(_QWORD *)(v2 + 8);
  v9 = (_QWORD *)(v8 + 8 * i);
  v10 = (_QWORD *)(v8 + 8LL * *(unsigned int *)(v2 + 44));
  while ( v5 )
  {
    if ( v9 >= v10 )
    {
      v2 = *(_QWORD *)(v2 + 16);
      v9 = *(_QWORD **)(v2 + 8);
      v10 = &v9[*(unsigned int *)(v2 + 44)];
    }
    if ( (*v9 & 0x401LL) == 0x400 )
      return 1LL;
    ++v9;
    --v5;
  }
  return 0LL;
}
