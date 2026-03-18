/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@IEAAPEBXXZ @ 0x1800D6EE4
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const void *__fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  int v1; // edi
  __int128 v2; // xmm0
  char v3; // si
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 v7; // rcx
  const void *result; // rax
  __int64 v9; // rcx
  __int128 Buf1; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+38h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 Buf2; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]

  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  v11 = 0LL;
  v4 = 0;
  v12 = 0;
  v13 = 0LL;
  v5 = 0;
  Buf1 = 0LL;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 1586);
    if ( v5 >= (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1587) - v7) >> 3)) )
      break;
    v9 = *(_QWORD *)(392LL * v5 + v7 + 16);
    v15 = 0LL;
    v16 = 0;
    Buf2 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 432LL))(v9, &Buf2) )
    {
      if ( v3 && memcmp_0(&Buf1, &Buf2, 0x1CuLL) )
        goto LABEL_4;
      v2 = Buf2;
      v4 = 1;
      v1 = v16;
      v3 = 1;
      v13 = Buf2;
      v12 = v16;
      Buf1 = Buf2;
      v11 = v15;
    }
    else
    {
      v2 = v13;
    }
    ++v5;
  }
  if ( !v3 )
  {
LABEL_4:
    *((_DWORD *)this + 16) = 0;
    result = 0LL;
    *(_OWORD *)((char *)this + 68) = 0LL;
    *(_QWORD *)((char *)this + 84) = 0LL;
    *((_DWORD *)this + 23) = 0;
    return result;
  }
  if ( *((_DWORD *)this + 16) == v4 )
  {
    if ( !memcmp_0(&Buf1, (char *)this + 68, 0x1CuLL) )
      return 0LL;
    v2 = v13;
  }
  result = (char *)this + 68;
  *((_DWORD *)this + 16) = v4;
  *(_OWORD *)((char *)this + 68) = v2;
  *(_QWORD *)((char *)this + 84) = v11;
  *((_DWORD *)this + 23) = v1;
  return result;
}
