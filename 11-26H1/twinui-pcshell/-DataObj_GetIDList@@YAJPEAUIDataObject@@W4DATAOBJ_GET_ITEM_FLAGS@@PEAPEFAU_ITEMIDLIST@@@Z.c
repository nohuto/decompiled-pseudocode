/*
 * XREFs of ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674
 * Callers:
 *     ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x1806916B0 (-GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGP.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z @ 0x18068E5D0 (-DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z.c)
 *     ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x18068E898 (-DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z.c)
 *     ?ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z @ 0x180695AA0 (-ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z.c)
 *     ?SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z @ 0x1806965B0 (-SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z.c)
 *     ?_InitClipboardFormats@@YAXXZ @ 0x180699C08 (-_InitClipboardFormats@@YAXXZ.c)
 *     SHGetUIObjectFromFullPIDL @ 0x1806CB2B0 (SHGetUIObjectFromFullPIDL.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataObj_GetIDList(struct IDataObject *a1, enum DATAOBJ_GET_ITEM_FLAGS a2, struct _ITEMIDLIST **a3)
{
  char v4; // si
  HRESULT Path; // ebx
  unsigned __int16 v7; // dx
  const void *v8; // rcx
  unsigned int v9; // r8d
  struct _ITEMIDLIST *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const CHAR *DataOfType; // rax
  LPITEMIDLIST v14; // rcx
  struct _IDA *v16; // [rsp+30h] [rbp-D0h] BYREF
  struct _ITEMIDLIST *v17; // [rsp+38h] [rbp-C8h] BYREF
  tagSTGMEDIUM v18; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pszName[2088]; // [rsp+60h] [rbp-A0h] BYREF

  *a3 = 0LL;
  v4 = a2;
  Path = -2147024809;
  if ( !a1 )
    return (unsigned int)Path;
  _InitClipboardFormats();
  memset(&v18, 0, sizeof(v18));
  v16 = 0LL;
  _InitClipboardFormats();
  Path = SHGetItemArrayFromDataObjEx(a1, v7, &v18, &v16);
  if ( Path >= 0 )
  {
    if ( (v4 & 8) == 0 || v16->cidl == 1 )
    {
      if ( v16->cidl )
      {
        v10 = ILCombine((LPCITEMIDLIST)((char *)v16 + v16->aoffset[0]), (LPCITEMIDLIST)((char *)v16 + v16[1].cidl));
        *a3 = v10;
        if ( v10 )
        {
          Path = 0;
          goto LABEL_17;
        }
      }
      else
      {
        *a3 = 0LL;
      }
      Path = -2147024882;
      goto LABEL_17;
    }
    Path = -2147467259;
LABEL_17:
    ReleaseStgMediumHGLOBAL(v8, &v18);
LABEL_18:
    if ( Path < 0 )
      return (unsigned int)Path;
    goto LABEL_19;
  }
  if ( (v4 & 2) != 0
    || (Path = DataObj_GetPath(a1, pszName, v9), Path < 0)
    || (v4 |= 4u, Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL), Path < 0) )
  {
    if ( (v4 & 4) != 0 )
      return (unsigned int)Path;
    DataOfType = (const CHAR *)DataObj_GetDataOfType(a1, g_cfURL_Storage, &v18);
    if ( !DataOfType )
      goto LABEL_18;
    SHAnsiToUnicode(DataOfType, pszName, 2084);
    Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL);
    goto LABEL_17;
  }
LABEL_19:
  if ( (v4 & 1) != 0 )
  {
    v14 = *a3;
    v16 = 0LL;
    if ( (int)SHGetUIObjectFromFullPIDL(v14, v11, v12, &v16) >= 0 )
    {
      v17 = 0LL;
      if ( (*(int (__fastcall **)(struct _IDA *, struct _ITEMIDLIST **))(*(_QWORD *)v16 + 32LL))(v16, &v17) >= 0 && v17 )
      {
        ILFree(*a3);
        *a3 = v17;
      }
      (*(void (__fastcall **)(struct _IDA *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return (unsigned int)Path;
}
