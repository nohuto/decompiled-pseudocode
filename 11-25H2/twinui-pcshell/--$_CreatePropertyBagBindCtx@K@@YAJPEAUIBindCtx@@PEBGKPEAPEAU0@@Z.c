/*
 * XREFs of ??$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z @ 0x180201750
 * Callers:
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180198FDC (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _CreatePropertyBagBindCtx<unsigned long>(__int64 a1, __int64 a2, DWORD a3, LPBC *a4)
{
  HRESULT BindCtx; // ebx
  LPBC v7; // rcx
  void *ppv; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wchar_t v12; // [rsp+50h] [rbp-18h]

  *a4 = 0LL;
  BindCtx = CreateBindCtx(0, a4);
  if ( BindCtx >= 0 )
  {
    ppv = 0LL;
    BindCtx = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( BindCtx < 0 )
      goto LABEL_6;
    BindCtx = PSPropertyBag_WriteDWORD((IPropertyBag *)ppv, L"SHCONTF", a3);
    if ( BindCtx >= 0 )
    {
      v7 = *a4;
      v10[0] = *(_OWORD *)L"SHBindCtxPropertyBag";
      v12 = aShbindctxprope[20];
      v11 = *(_QWORD *)L"yBag";
      v10[1] = *(_OWORD *)L"xPropertyBag";
      BindCtx = ((__int64 (__fastcall *)(LPBC, _OWORD *, void *))v7->lpVtbl->RegisterObjectParam)(v7, v10, ppv);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( BindCtx < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(LPBC))(*a4)->lpVtbl->Release)(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)BindCtx;
}
