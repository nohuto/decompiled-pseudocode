/*
 * XREFs of ?_GetIDListFromObject@@YAJPEAUIUnknown@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x1805C87B4
 * Callers:
 *     PropVariantToIDList @ 0x1805C94F4 (PropVariantToIDList.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _GetIDListFromObject(struct IUnknown *a1, struct _ITEMIDLIST **a2)
{
  int v4; // edi
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = -2147467262;
  if ( a1 )
  {
    lpVtbl = a1->lpVtbl;
    v8 = 0LL;
    v7 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a1,
           &GUID_1079acfc_29bd_11d3_8e0d_00c04f6837d5,
           &v7) < 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
             a1,
             &GUID_1ac3d9f0_175c_11d1_95be_00609797ea4f,
             &v8) >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, struct _ITEMIDLIST **))(*(_QWORD *)v8 + 40LL))(v8, a2);
        if ( v4 >= 1 )
          v4 = -2147467259;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, struct _ITEMIDLIST **))(*(_QWORD *)v7 + 40LL))(v7, a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v4;
}
