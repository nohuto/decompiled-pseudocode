/*
 * XREFs of ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x1804D8210
 * Callers:
 *     <none>
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollButtonContainer::v_LayoutChildren(CScrollButtonContainer *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  void (__fastcall *v5)(__int64 *, __int128 *, _QWORD, _QWORD); // rax
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // xmm6
  int v13; // r14d
  _QWORD *v14; // rsi
  int IsThreadRTL; // r15d
  _QWORD *v16; // rbx
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v18) = *((_DWORD *)this + 14);
  DWORD2(v18) = v18 + 1;
  v5 = *(void (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v3 + 24);
  DWORD1(v18) = v4;
  HIDWORD(v18) = v4 + 1;
  v5(v2, &v18, 0LL, 0LL);
  v6 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v8 = (*((_BYTE *)this + 232) & 1) == 0;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = __PAIR64__(v6, v7);
  if ( v8 )
  {
    v12 = v18;
    v13 = v7 / 2;
    DWORD2(v18) = v7 / 2 - (*((_DWORD *)this + 69) >> 1);
    v14 = (_QWORD *)((char *)this + 408);
    IsThreadRTL = Mirror_IsThreadRTL();
    v16 = (_QWORD *)((char *)this + 416);
    if ( IsThreadRTL )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v16 + 104LL))(*v16, &v18);
    else
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v14 + 104LL))(*v14, &v18);
    v17 = v13 + (*((_DWORD *)this + 69) >> 1);
    v18 = v12;
    LODWORD(v18) = v17;
    if ( IsThreadRTL )
      v11 = *v14;
    else
      v11 = *v16;
  }
  else
  {
    v9 = *((_QWORD *)this + 35);
    LODWORD(v18) = 0;
    DWORD2(v18) = v9;
    DWORD1(v18) = (v6 - HIDWORD(v9)) / 2;
    v10 = *((_QWORD *)this + 51);
    HIDWORD(v18) = HIDWORD(v9) + DWORD1(v18);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 104LL))(v10, &v18);
    v11 = *((_QWORD *)this + 52);
    DWORD2(v18) = v7;
    LODWORD(v18) = v7 - v9;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v18);
}
