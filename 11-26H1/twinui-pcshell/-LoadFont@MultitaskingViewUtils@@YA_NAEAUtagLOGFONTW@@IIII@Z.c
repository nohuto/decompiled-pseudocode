/*
 * XREFs of ?LoadFont@MultitaskingViewUtils@@YA_NAEAUtagLOGFONTW@@IIII@Z @ 0x1804B5E0C
 * Callers:
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804B5D04 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall MultitaskingViewUtils::LoadFont(
        MultitaskingViewUtils *this,
        struct tagLOGFONTW *a2,
        UINT a3,
        UINT a4,
        UINT uID)
{
  int v6; // esi
  int v8; // eax
  int v9; // eax
  WCHAR Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+22h] [rbp-46h]
  __int16 v13; // [rsp+32h] [rbp-36h]

  *((_BYTE *)this + 26) = 5;
  v6 = (int)a2;
  if ( LoadStringW(&_ImageBase, a3, (LPWSTR)this + 14, 32) <= 0 )
    return 0;
  Buffer = 0;
  v13 = 0;
  v12 = 0LL;
  if ( LoadStringW(&_ImageBase, a4, &Buffer, 10) <= 0 )
    return 0;
  v8 = wcstol(&Buffer, 0LL, 10);
  if ( !v8 )
    return 0;
  *(_DWORD *)this = -MulDiv(v8, v6, 72);
  if ( LoadStringW(&_ImageBase, uID, &Buffer, 10) <= 0 )
    return 0;
  v9 = wcstol(&Buffer, 0LL, 10);
  if ( !v9 )
    return 0;
  *((_DWORD *)this + 4) = v9;
  return 1;
}
