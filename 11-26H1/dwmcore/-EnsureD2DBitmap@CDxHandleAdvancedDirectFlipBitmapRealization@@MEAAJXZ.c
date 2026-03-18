/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x1800F80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800F6C10 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureD2DBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // ebx
  _DWORD *v3; // rax
  char v4; // al
  unsigned int v5; // ecx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  if ( v2 >= 0 )
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 10) + 24LL))((char *)this + 80, v7);
    if ( *v3 == 87 || *v3 == 28 )
    {
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 41) + 56LL))((char *)this + 328);
      v5 = v2;
      if ( v4 )
        return (unsigned int)-2003292288;
      return v5;
    }
    else
    {
      return (unsigned int)-2003292288;
    }
  }
  return (unsigned int)v2;
}
