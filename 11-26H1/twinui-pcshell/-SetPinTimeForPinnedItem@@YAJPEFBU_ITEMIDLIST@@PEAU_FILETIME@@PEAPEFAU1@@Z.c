/*
 * XREFs of ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x180696D88
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802AC4C0 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x18069294C (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetPinTimeForPinnedItem(
        const struct _ITEMIDLIST *Src,
        struct _FILETIME *a2,
        struct _ITEMIDLIST **a3)
{
  LPITEMIDLIST v5; // rdi
  const struct _HIDDENITEMID *v6; // rcx
  int v8; // eax
  unsigned int v9; // edi
  struct _ITEMIDLIST *v10; // rax
  struct _ITEMIDLIST *v11; // [rsp+20h] [rbp-30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _FILETIME v14; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a3 = 0LL;
  SystemTimeAsFileTime = 0LL;
  if ( a2 )
    SystemTimeAsFileTime = *a2;
  else
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  if ( ILFindHiddenIDOn(Src, -1091633109) )
  {
    v5 = ILClone(Src);
    CoTaskMemFree(0LL);
    v11 = v5;
    v6 = ILFindHiddenIDOn(v5, -1091633109);
    if ( !v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\PinningTimeHelpers.h",
        (const char *)0x80070057LL);
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v11);
      return 2147942487LL;
    }
    *((struct _FILETIME *)v6 + 1) = SystemTimeAsFileTime;
    v11 = 0LL;
    *a3 = v5;
  }
  else
  {
    v13[0] = 16;
    v13[1] = -1091633109;
    v14 = SystemTimeAsFileTime;
    v11 = 0LL;
    v8 = ILCloneWithHiddenID(Src, (const struct _HIDDENITEMID *)v13, &v11);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\PinningTimeHelpers.h",
        (const char *)(unsigned int)v8);
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v11);
      return v9;
    }
    v10 = v11;
    v11 = 0LL;
    *a3 = v10;
  }
  CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v11);
  return 0LL;
}
