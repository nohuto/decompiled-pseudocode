/*
 * XREFs of ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x180113850
 * Callers:
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1801139E0 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1801159A8 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

char __fastcall ManipulationInjector::CheckOverlap(
        ManipulationInjector *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v4; // r8d
  __int64 v6; // rsi
  LONG v7; // ecx
  int v8; // r8d
  __int64 v10; // rbp
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  int v19; // eax
  RECT rc; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_DWORD *)this + 5);
  v6 = a2;
  rc.left = *((_DWORD *)this + 16) + v4 + 1;
  v7 = *((_DWORD *)this + 17) + v4 + 1;
  v8 = ~v4;
  rc.top = v7;
  rc.right = v8 + *((_DWORD *)this + 18);
  v16 = *((_DWORD *)this + 22) == 1;
  rc.bottom = v8 + *((_DWORD *)this + 19);
  if ( v16 )
    return !PtInRect(&rc, *(POINT *)((char *)this + 152 * a2 + 144));
  if ( *((_DWORD *)this + 22) != 16 )
  {
    if ( *((_DWORD *)this + 22) != 32 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x358,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
    v13 = 152LL * (a2 + 1);
    v14 = 152 * v6;
    if ( *(_DWORD *)this == 2 )
    {
      v15 = *(_DWORD *)((char *)this + v13 + 152) - *(_DWORD *)((char *)this + v14 + 152);
      v18 = __OFSUB__(v15, *((_DWORD *)this + 189));
      v16 = v15 == *((_DWORD *)this + 189);
      v17 = v15 - *((_DWORD *)this + 189) < 0;
    }
    else
    {
      v19 = *(_DWORD *)((char *)this + v13 + 144) - *(_DWORD *)((char *)this + v14 + 144);
      v18 = __OFSUB__(v19, *((_DWORD *)this + 9));
      v16 = v19 == *((_DWORD *)this + 9);
      v17 = v19 - *((_DWORD *)this + 9) < 0;
    }
    return v17 ^ v18 | v16;
  }
  v10 = 152LL * a2;
  v11 = 0;
  if ( !PtInRect(&rc, *(POINT *)((char *)this + v10 + 144)) )
    return 1;
  v12 = 152LL * (unsigned int)(v6 + 1);
  if ( !PtInRect(&rc, *(POINT *)((char *)this + v12 + 144)) )
    return 1;
  if ( *(_DWORD *)this == 2 )
  {
    if ( *(_DWORD *)((char *)this + v12 + 152) - *(_DWORD *)((char *)this + v10 + 152) < *((_DWORD *)this + 188) )
      return v11;
    return 1;
  }
  if ( *(_DWORD *)((char *)this + v12 + 144) - *(_DWORD *)((char *)this + v10 + 144) >= *((_DWORD *)this + 7) )
    return 1;
  return v11;
}
