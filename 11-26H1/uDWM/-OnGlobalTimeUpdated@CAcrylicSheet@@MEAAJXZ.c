/*
 * XREFs of ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x18005DE90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009573C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180095778 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAcrylicSheet::OnGlobalTimeUpdated(CAcrylicSheet *this)
{
  int *v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rax
  int updated; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v14; // rdx
  int v15[4]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v16[56]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE *v17; // [rsp+68h] [rbp-1h]
  _BYTE v18[56]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE *v19; // [rsp+A8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(v15);
  CVisual::SetDirtyFlags(this, *v2);
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 55);
  if ( v7 && *(_BYTE *)(v7 + 72) )
  {
    v6 = 1;
    std::function<void (void)>::operator=(v18, (char *)this + 224);
    v4 = v19;
    v5 = v17;
  }
  v8 = *((_QWORD *)this + 53);
  if ( v8 && *(_BYTE *)(v8 + 72) )
  {
    std::function<void (void)>::operator=(v16, (char *)this + 288);
  }
  else if ( !v6 )
  {
    goto LABEL_15;
  }
  updated = CAcrylicSheet::UpdateTransition(this);
  v10 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated,
      v15[0]);
    if ( v17 )
    {
      v11 = v16;
      LOBYTE(v11) = v17 != v16;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v11);
      v17 = 0LL;
    }
    if ( v19 )
    {
      v12 = v18;
      LOBYTE(v12) = v19 != v18;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v19 + 32LL))(v19, v12);
    }
    return v10;
  }
  v4 = v19;
  v5 = v17;
LABEL_15:
  if ( v4 )
  {
    std::_Func_class<void,>::operator()(v18);
    v4 = v19;
    v5 = v17;
  }
  if ( v5 )
  {
    std::_Func_class<void,>::operator()(v16);
    v4 = v19;
    v5 = v17;
  }
  if ( v5 )
  {
    LOBYTE(v3) = v5 != v16;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 32LL))(v5, v3);
    v17 = 0LL;
    v4 = v19;
  }
  if ( v4 )
  {
    v14 = v18;
    LOBYTE(v14) = v4 != v18;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v14);
  }
  return 0LL;
}
