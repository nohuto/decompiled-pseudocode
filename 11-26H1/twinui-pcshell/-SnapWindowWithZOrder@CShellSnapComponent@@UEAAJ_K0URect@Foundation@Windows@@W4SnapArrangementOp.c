/*
 * XREFs of ?SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A1C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x180230FD4 (--$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180233F08 (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::SnapWindowWithZOrder(__int64 a1, __int64 a2, __int64 a3, float *a4, int a5)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v22[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = *a4;
  v6 = a4[1];
  v8 = (int)*a4;
  v20 = a2;
  v9 = 2;
  v19 = a3;
  v10 = (int)a2;
  v11 = v5 + a4[2];
  v22[0] = v8;
  v12 = (int)v6;
  v13 = v6 + a4[3];
  v22[1] = v12;
  v22[2] = (int)v11;
  v22[3] = (int)v13;
  if ( a5 == 2 )
  {
    v9 = 1;
  }
  else if ( a5 != 4 )
  {
    v9 = 3;
    if ( a5 != 8 )
      v9 = 0;
  }
  if ( (_DWORD)a3 && (v9 & 1) != 0 )
  {
    v14 = (__int64 *)(a1 + 632);
    *(_QWORD *)&v21 = (int)a2;
    *((_QWORD *)&v21 + 1) = (int)a3;
    v15 = (_QWORD *)v14[1];
    if ( v15 == (_QWORD *)v14[2] )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        v14,
        (__int64)v15,
        &v21);
    }
    else
    {
      *v15 = v10;
      v15[1] = (int)a3;
      v14[1] += 16LL;
    }
  }
  CSnapComponentTelemetry::SetDeferredZOrderOnSnap<unsigned __int64 &,unsigned __int64 &>(&v20, &v19);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(
          a1 + 8,
          v10,
          v22,
          v9);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36E,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
