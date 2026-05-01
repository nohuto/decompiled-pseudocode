/*
 * XREFs of ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x18068E898
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataObj_GetPath(struct IDataObject *a1, unsigned __int16 *a2)
{
  signed int v3; // ebx
  __int16 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+22h] [rbp-3Eh]
  __int16 v7; // [rsp+26h] [rbp-3Ah]
  __int64 v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+34h] [rbp-2Ch]
  __int64 v11; // [rsp+38h] [rbp-28h]
  STGMEDIUM hDrop; // [rsp+40h] [rbp-20h] BYREF

  v10 = -1;
  hDrop.pUnkForRelease = 0LL;
  *a2 = 0;
  v8 = 0LL;
  *(_OWORD *)&hDrop.tymed = 0LL;
  v5 = 15;
  v6 = 0;
  v7 = 0;
  v9 = 1;
  v11 = 1LL;
  v3 = ((__int64 (__fastcall *)(struct IDataObject *, __int16 *, STGMEDIUM *))a1->lpVtbl->GetData)(a1, &v5, &hDrop);
  if ( v3 >= 0 )
  {
    v3 = DragQueryFileW((HDROP)hDrop.hBitmap, 0, a2, 0x824u) == 0 ? 0x80004005 : 0;
    ReleaseStgMedium(&hDrop);
  }
  return (unsigned int)v3;
}
