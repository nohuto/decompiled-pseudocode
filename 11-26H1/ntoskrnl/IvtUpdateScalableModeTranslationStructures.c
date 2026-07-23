/*
 * XREFs of IvtUpdateScalableModeTranslationStructures @ 0x1404F9990
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x14052B598 (IvtUpdateTranslationStructures.c)
 *     IvtSetDevicePasidTable @ 0x1405A9FD0 (IvtSetDevicePasidTable.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404F9C14 (IvtGetBlockedDomain.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404F9C68 (IvtUpdateScalableModeContextEntry.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1405246E4 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtGetPasidGranularTranslationType @ 0x1405288AC (IvtGetPasidGranularTranslationType.c)
 */

__int64 __fastcall IvtUpdateScalableModeTranslationStructures(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  char v11; // di
  int v13; // ecx
  __int64 BlockedDomain; // rcx
  char v15; // dl
  __int16 v16; // cx
  int v17; // r10d
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v8 = *(_QWORD *)(a2 + 72);
  v10 = *(_QWORD *)(a2 + 80);
  v11 = 0;
  v23 = 0LL;
  v13 = *(_DWORD *)(a6 + 4);
  if ( v13 == 1 )
  {
    v11 = 1;
    BlockedDomain = IvtGetBlockedDomain(a1, v8, &v23);
  }
  else
  {
    if ( v13 )
    {
      v11 = 1;
    }
    else if ( *(_BYTE *)(a1 + 319) )
    {
      v11 = 1;
      BlockedDomain = *(unsigned int *)(a1 + 264);
      goto LABEL_6;
    }
    BlockedDomain = *(unsigned int *)(a6 + 48);
  }
LABEL_6:
  LOBYTE(a3) = v11;
  IvtGetPasidGranularTranslationType(BlockedDomain, 0LL, a3);
  LOBYTE(v22) = v15;
  IvtUpdateScalableModePasidTablesForPasid(a1, v16, v17, v20, v22);
  return IvtUpdateScalableModeContextEntry(a1, v8, v10, a5, a4, v19, v21, a7, a8);
}
