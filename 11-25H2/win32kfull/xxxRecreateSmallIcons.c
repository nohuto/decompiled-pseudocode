/*
 * XREFs of xxxRecreateSmallIcons @ 0x140226FA0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x14005C6EC (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1400693D8 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x140069574 (xxxCreateClassSmIcon.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     DestroyClassSmIcon @ 0x1400B3A20 (DestroyClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1400C12A0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1400C2F04 (ClassLock.c)
 *     ClassUnlock @ 0x1400C3290 (ClassUnlock.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(struct tagWND *a1)
{
  __int64 v2; // rdx
  bool v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // di
  __int64 result; // rax
  __int64 *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v9, *((_QWORD *)a1 + 17));
  v3 = (unsigned int)DestroyClassSmIcon(v9) && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v9, v2);
  if ( v3 )
  {
    v5 = *((_QWORD *)a1 + 17);
    v10 = 0LL;
    v11 = 0LL;
    if ( (unsigned int)ClassLock(v5, &v10) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v9, *((_QWORD *)a1 + 17));
      xxxCreateClassSmIcon((__int64 *)v9);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)v9, v6);
      ClassUnlock(*((struct tagCLS **)a1 + 17), &v10);
    }
  }
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1, v4) && !v7 )
    xxxCreateWindowSmIcon((__int64)a1, *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL));
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
