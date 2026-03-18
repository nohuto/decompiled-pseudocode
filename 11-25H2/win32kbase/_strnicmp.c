/*
 * XREFs of _strnicmp @ 0x1401A3278
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401028AC (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     UserGetLoadedImageInformation @ 0x1401B6DF0 (UserGetLoadedImageInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1401A3214 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
