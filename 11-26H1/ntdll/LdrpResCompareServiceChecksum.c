/*
 * XREFs of LdrpResCompareServiceChecksum @ 0x1800A93BC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpResCompareServiceChecksum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  if ( (int)LdrResGetRCConfig(a1, a2, &v9, 0x1000u, 1) < 0 || (int)LdrResGetRCConfig(a3, a4, &v8, 0x1000u, 0) < 0 )
    return 0;
  v6 = *(_QWORD *)(v9 + 28) - *(_QWORD *)(v8 + 28);
  if ( !v6 )
    v6 = *(_QWORD *)(v9 + 36) - *(_QWORD *)(v8 + 36);
  return v6 == 0;
}
