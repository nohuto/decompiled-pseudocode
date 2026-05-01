/*
 * XREFs of ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x1800A9830
 * Callers:
 *     EncodeRelativePath @ 0x1800AB154 (EncodeRelativePath.c)
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1803FBADC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReplaceInitialPathCharactersWithGuid(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        unsigned __int64 a5)
{
  StringFromGUID2(a4, a1, a2);
  StringCchCatW(a1, a2, &a3[a5]);
}
