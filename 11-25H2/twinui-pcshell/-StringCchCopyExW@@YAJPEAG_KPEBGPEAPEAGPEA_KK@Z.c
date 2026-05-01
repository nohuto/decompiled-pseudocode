/*
 * XREFs of ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1801D55C4
 * Callers:
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803CF764 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 * Callees:
 *     StringExValidateDestW @ 0x1802CB1CC (StringExValidateDestW.c)
 *     StringExHandleFillBehindNullW @ 0x18030DB14 (StringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x18030DB40 (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCchCopyExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD dwFlags)
{
  unsigned int v7; // ebx
  const WCHAR *v8; // r8
  DWORD v9; // r9d
  size_t v10; // r10
  wchar_t *v11; // r11
  size_t v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rdi
  __int16 v16; // ax
  _WORD *v17; // rax
  __int64 v18; // rcx
  wchar_t *v19; // rsi
  size_t v20; // rdi
  const WCHAR *v21; // rax
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-10h] BYREF

  v7 = StringExValidateDestW(a1, a2, (const size_t)a3, dwFlags);
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( v10 )
      *v11 = 0;
    return v7;
  }
  ppszDestEnd = v11;
  v19 = v11;
  pcchRemaining[0] = v10;
  v20 = v10;
  if ( (v9 & 0x100) != 0 )
  {
    v21 = &LocaleName;
    if ( v8 )
      v21 = v8;
    v8 = v21;
  }
  v7 = 0;
  if ( (v9 & 0xFFFFE000) != 0 )
  {
    v7 = -2147024809;
    if ( v10 )
      *v11 = 0;
  }
  else if ( v10 )
  {
    v13 = v10;
    v14 = v11;
    v8 = (const WCHAR *)((char *)v8 - (__int64)v11);
    v15 = 0LL;
    do
    {
      if ( !(2147483646 - v10 + v13) )
        break;
      v16 = *(_WORD *)((char *)v14 + (_QWORD)v8);
      if ( !v16 )
        break;
      *v14 = v16;
      ++v15;
      ++v14;
      --v13;
    }
    while ( v13 );
    v17 = v14 - 1;
    if ( v13 )
      v17 = v14;
    v18 = v15 - 1;
    if ( v13 )
      v18 = v15;
    *v17 = 0;
    v19 = &v11[v18];
    ppszDestEnd = v19;
    v20 = v10 - v18;
    pcchRemaining[0] = v10 - v18;
    v7 = v13 == 0 ? 0x8007007A : 0;
    if ( v13 )
    {
      if ( (v9 & 0x200) != 0 && v20 > 1 )
        StringExHandleFillBehindNullW(&v11[v18], 2 * v20, v9);
      goto LABEL_18;
    }
  }
  else
  {
    if ( !*v8 )
    {
LABEL_18:
      if ( a4 )
        *a4 = v19;
      if ( a5 )
        *a5 = v20;
      return v7;
    }
    v7 = v11 != 0LL ? -2147024774 : -2147024809;
  }
  if ( (v9 & 0x1C00) != 0 && v10 )
  {
    StringExHandleOtherFlagsW(v11, 2 * v10, (size_t)v8, &ppszDestEnd, pcchRemaining, v9);
    v19 = ppszDestEnd;
    v20 = pcchRemaining[0];
  }
  if ( v7 == -2147024774 )
    goto LABEL_18;
  return v7;
}
