/*
 * XREFs of ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801B5310
 * Callers:
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801B4E54 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  char v3; // al
  char v4; // si
  int v5; // ebp
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int128 Buf2; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]

  v2 = *((_QWORD *)this + 2);
  Buf2 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 432LL))(v2, &Buf2);
  v4 = v3;
  v5 = v3 != 0;
  if ( *((_DWORD *)this + 15) == v5 )
  {
    if ( !v3 )
      return 0LL;
    v7 = (unsigned __int64)this + 64;
    if ( !memcmp_0((char *)this + 64, &Buf2, 0x1CuLL) )
      return 0LL;
  }
  else
  {
    v7 = (unsigned __int64)this + 64;
  }
  v8 = v13;
  v9 = Buf2;
  *((_DWORD *)this + 15) = v5;
  v10 = v12;
  *(_OWORD *)v7 = v9;
  *(_QWORD *)(v7 + 16) = v10;
  *(_DWORD *)(v7 + 24) = v8;
  return v7 & -(__int64)(v4 != 0);
}
