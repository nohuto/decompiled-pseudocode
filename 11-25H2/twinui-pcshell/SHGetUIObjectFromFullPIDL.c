/*
 * XREFs of SHGetUIObjectFromFullPIDL @ 0x1806A320C
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180667F40 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     SHBindToParent_0 @ 0x1802DA9AD (SHBindToParent_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SHGetUIObjectFromFullPIDL(const ITEMIDLIST *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  HRESULT v5; // ebx
  LPCITEMIDLIST v7; // [rsp+58h] [rbp+10h] BYREF
  void *v8; // [rsp+60h] [rbp+18h] BYREF

  *a4 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v5 = SHBindToParent_0(a1, &GUID_000214e6_0000_0000_c000_000000000046, &v8, &v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, LPCITEMIDLIST *, GUID *, _QWORD, _QWORD *))(*(_QWORD *)v8 + 80LL))(
           v8,
           0LL,
           1LL,
           &v7,
           &GUID_000214f9_0000_0000_c000_000000000046,
           0LL,
           a4);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v5;
}
