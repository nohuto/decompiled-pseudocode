/*
 * XREFs of ?SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z @ 0x1806965B0
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SHGetItemArrayFromDataObjEx(
        struct IDataObject *a1,
        __int64 a2,
        struct tagSTGMEDIUM *a3,
        struct _IDA **a4)
{
  int v6; // edi
  struct _IDA *v7; // rax
  unsigned __int16 v9; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+22h] [rbp-46h]
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+34h] [rbp-34h]
  __int64 v15; // [rsp+38h] [rbp-30h]

  *a4 = 0LL;
  v14 = -1;
  *(_OWORD *)&a3->tymed = 0LL;
  a3->pUnkForRelease = 0LL;
  v9 = g_cfHIDA_Storage;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 1;
  v15 = 1LL;
  v6 = ((__int64 (__fastcall *)(struct IDataObject *, unsigned __int16 *))a1->lpVtbl->GetData)(a1, &v9);
  if ( v6 >= 0 )
  {
    v7 = (struct _IDA *)GlobalLock(a3->hBitmap);
    *a4 = v7;
    if ( !v7 )
    {
      ReleaseStgMedium(a3);
      return (unsigned int)ResultFromKnownLastError();
    }
  }
  return (unsigned int)v6;
}
