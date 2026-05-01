/*
 * XREFs of ?CompareOrdinalIgnoreCase@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180143868
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
        __int64 a1,
        const WCHAR *a2)
{
  const WCHAR *v2; // r8
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // rdx
  const WCHAR *v6; // rcx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = -(a2 != 0LL);
  if ( !a2 )
    v2 = &pvData;
  v5 = -1LL;
  if ( v3 != -1 )
  {
    v6 = *(const WCHAR **)a1;
    LODWORD(v5) = v3;
    if ( v6 )
      return CompareStringOrdinal(v6, v5, v2, v4, 1);
LABEL_9:
    v6 = &pvData;
    return CompareStringOrdinal(v6, v5, v2, v4, 1);
  }
  if ( !*(_QWORD *)a1 )
  {
    LODWORD(v5) = 0;
    goto LABEL_9;
  }
  do
    ++v5;
  while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v5) );
  v6 = *(const WCHAR **)a1;
  return CompareStringOrdinal(v6, v5, v2, v4, 1);
}
