/*
 * XREFs of ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x180058250
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180057EC8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x180057FE8 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  signed __int64 v3; // r8
  wchar_t *v4; // rdx
  __int64 v5; // r9
  wchar_t v6; // ax
  wchar_t *v7; // rcx
  __int64 result; // rax

  v3 = (char *)a3 - (char *)a1;
  v4 = a1;
  v5 = 260LL;
  do
  {
    if ( v5 == -2147483386 )
      break;
    v6 = *(wchar_t *)((char *)v4 + v3);
    if ( !v6 )
      break;
    *v4++ = v6;
    --v5;
  }
  while ( v5 );
  v7 = v4 - 1;
  result = v5 == 0 ? 0x8007007A : 0;
  if ( v5 )
    v7 = v4;
  *v7 = 0;
  return result;
}
