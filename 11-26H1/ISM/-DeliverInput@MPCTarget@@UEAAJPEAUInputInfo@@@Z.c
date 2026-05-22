/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18000B120
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801011C0 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     IsSubscribedForEventType @ 0x18000B3C8 (IsSubscribedForEventType.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18000C3D8 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004080C (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetInputEventType @ 0x180097BD8 (GetInputEventType.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     GetHandEventType @ 0x1801018C0 (GetHandEventType.c)
 *     IsSubscribedForEventType_0 @ 0x1801019B4 (IsSubscribedForEventType_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  _QWORD *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  const char *v11; // r9
  unsigned __int64 v12; // rbx
  void (__fastcall *v13)(unsigned __int64, int *, _QWORD, char *, _OWORD *); // rdi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v16; // ebx
  ISMTracing *v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v22[3]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 88LL))(this) && *((_BYTE *)a2 + 3002) )
  {
    return 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( !v8 )
    v8 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  v20 = 0LL;
  v9 = v8[61];
  v10 = v8[62];
  if ( v9 == v10 )
    goto LABEL_27;
  do
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(v9 + 8, &v20) >= 0 )
      break;
    v9 += 16LL;
  }
  while ( v9 != v10 );
  v6 = v20;
  if ( !v20 )
  {
LABEL_27:
    v16 = -2147417853;
  }
  else
  {
    v21 = *((_DWORD *)a2 + 18);
    v22[0] = *(_OWORD *)((char *)a2 + 312);
    v22[1] = *(_OWORD *)((char *)a2 + 328);
    v22[2] = *(_OWORD *)((char *)a2 + 344);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) && !*((_BYTE *)a2 + 928) )
        {
          v12 = v20;
          v13 = *(void (__fastcall **)(unsigned __int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v20 + 24LL);
          HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
          v13(v12, &v21, HandEventType, (char *)a2 + 936, v22);
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v20) )
          (*(void (__fastcall **)(unsigned __int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v20 + 32LL))(
            v20,
            &v21,
            (char *)a2 + 2504,
            (char *)a2 + 2512,
            v22);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v20) )
          (*(void (__fastcall **)(unsigned __int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v20 + 40LL))(
            v20,
            &v21,
            (unsigned int)InputEventType,
            (char *)a2 + 2256,
            *((_QWORD *)a2 + 2),
            v22);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x171,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v11);
    }
    v16 = 0;
  }
  if ( ISMTracing::IsEnabled(v7, v6) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCTarget_DeliverInput_(v17, this, a2, v16);
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v16;
}
