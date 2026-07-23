/*
 * XREFs of RtlDetermineHotPatchExtent @ 0x1408B12E0
 * Callers:
 *     MiLockHotPatchPages @ 0x140877998 (MiLockHotPatchPages.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140879F10 (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlValidateHotPatchBase @ 0x1408B17C8 (RtlValidateHotPatchBase.c)
 * Callees:
 *     RtlpDetermineHotPatchExtent @ 0x140C08808 (RtlpDetermineHotPatchExtent.c)
 */

char __fastcall RtlDetermineHotPatchExtent(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-14h] BYREF

  v10[0] = 0;
  v9 = 0;
  if ( !(unsigned __int8)RtlpDetermineHotPatchExtent(a1, a3, &v9, v10) || v9 < 0 && -v9 > a2 )
    return 0;
  v7 = v10[0] - 1;
  *a4 = (v9 + a2) >> 12;
  *a5 = (a2 + v7) >> 12;
  return 1;
}
