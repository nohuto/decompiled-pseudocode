/*
 * XREFs of ExpSaveAbHandle @ 0x140275BA0
 * Callers:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpSaveAbHandle(__int64 a1, _BYTE *a2, char a3)
{
  char v3; // al

  if ( a2 )
  {
    if ( a3 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        a2[33] |= 2u;
      else
        a2[10] = 1;
    }
    if ( (KiAbpGlobalState & 1) != 0 )
      v3 = (4 * ((4 * a2[36]) | a2[-48 * (a2[36] & 0x7F) - 1] & 3)) | 3;
    else
      v3 = (2 * (a2[8] & 0x3F)) | 1;
    *(_BYTE *)(a1 + 36) = v3;
  }
}
