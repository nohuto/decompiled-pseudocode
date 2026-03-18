/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50
 * Callers:
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 * Callees:
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000BD3C (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14000BDA4 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401DE2A0 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1401E2764 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401FDD68 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(
        struct tagMENU ***a1,
        struct _HEAD **a2,
        __int64 a3,
        unsigned __int16 *a4,
        _DWORD *a5)
{
  int v9; // r12d
  int v10; // r15d
  struct tagMENU *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  char *v15; // r15
  int v16; // r12d
  struct _HEAD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  struct _HEAD **v20; // r12
  struct _HEAD *v21; // rax
  struct _HEAD *v22; // rcx
  struct _HEAD *v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // r15d
  struct _HEAD *v27; // rax
  __int64 v28; // rdx
  int MenuDepth; // ebx
  _QWORD *v30; // rdx
  struct tagMENU *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  struct tagMENU *Menu; // rax
  struct _HEAD *v37; // rcx
  _QWORD v38[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-48h] BYREF
  struct _HEAD *v40; // [rsp+60h] [rbp-38h]
  int BaseAddress; // [rsp+B0h] [rbp+18h]

  v9 = 0;
  BaseAddress = 0;
  v10 = 0;
  *a5 = 0;
  v11 = (struct tagMENU *)a1[2];
  if ( !v11 )
    v11 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v11) )
    *((_DWORD *)*a2 + 26) = -1;
  if ( (*(_DWORD *)(a3 + 4) & 0x100) != 0 )
  {
    *(_DWORD *)*a2 &= 0xFFFC949B;
    *(_DWORD *)*a2 |= *(_DWORD *)(a3 + 8);
    if ( (*(_DWORD *)(a3 + 8) & 0x800) != 0 )
      *((_DWORD *)*a2 + 1) |= 3u;
    v9 = 1;
    BaseAddress = 1;
    v10 = *(_DWORD *)(a3 + 8) & 0x100;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x40) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      v14 = *((_QWORD *)**a1 + 3);
      if ( (*(_DWORD *)(v14 + 48) & 8) != 0 )
      {
        v15 = 0LL;
      }
      else
      {
        LOBYTE(v13) = 1;
        v15 = (char *)DesktopAllocInternal(v14, (unsigned int)*a4 + 2, v12, v13);
        if ( !v15 )
        {
          v35 = *(_DWORD **)(W32GetUserSessionState(v33, v32) + 19904);
          if ( (*v35 & 0x100) != 0 )
          {
            _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v35, v34) + 19904), 0xFFFFFEFF);
            UserLogError(2147483891LL);
          }
        }
      }
      if ( !v15 )
        return 0LL;
      memmove(v15, *((const void **)a4 + 1), *a4);
      v16 = *a4 >> 1;
    }
    else
    {
      v16 = 0;
      v15 = 0LL;
    }
    v17 = a2[3];
    if ( v17 )
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)**a1 + 3) + 136LL), 0, v17);
    *((_QWORD *)*a2 + 5) = 0LL;
    *((_DWORD *)*a2 + 12) = v16;
    if ( v15 )
      *((_QWORD *)*a2 + 5) = &v15[a2[1] - *a2];
    else
      *((_QWORD *)*a2 + 5) = 0LL;
    a2[3] = (struct _HEAD *)v15;
    a2[11] = (struct _HEAD *)((char *)a2[11] + 1);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 0x80u) != 0 )
  {
    *((_QWORD *)*a2 + 12) = 0LL;
    *((_QWORD *)*a2 + 12) = *(_QWORD *)(a3 + 72);
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
    *((_DWORD *)*a2 + 26) = -1;
    v24 = *a2;
    v25 = *((_QWORD *)*a2 + 12);
    if ( v25 && v25 < 0xC )
      *((_DWORD *)v24 + 1) |= 0x20000000u;
    else
      *((_DWORD *)v24 + 1) &= ~0x20000000u;
  }
  if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    *((_DWORD *)*a2 + 2) = *(_DWORD *)(a3 + 16);
  if ( (*(_DWORD *)(a3 + 4) & 0x20) != 0 )
    *((_QWORD *)*a2 + 7) = *(_QWORD *)(a3 + 48);
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    *((_DWORD *)*a2 + 1) &= 0xFFFFFFF4;
    *((_DWORD *)*a2 + 1) |= *(_DWORD *)(a3 + 12);
    if ( (*(_DWORD *)*a2 & 0x800) != 0 )
      *((_DWORD *)*a2 + 1) |= 3u;
    if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 0x400) != 0 )
      {
        UserSetLastError(87);
        return 0LL;
      }
      *(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) |= 0x400u;
    }
    v9 = 1;
    BaseAddress = 1;
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
  {
    *((_QWORD *)*a2 + 3) = *(_QWORD *)(a3 + 32);
    *((_QWORD *)*a2 + 4) = *(_QWORD *)(a3 + 40);
    v10 = 1;
  }
  if ( (*(_DWORD *)(a3 + 4) & 4) == 0 )
    goto LABEL_39;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39, 0);
  v18 = *(_QWORD *)(a3 + 24);
  if ( v18 )
  {
    v19 = ValidateHmenu(v18, 16LL);
    v40 = 0LL;
    if ( v19 != *(_QWORD *)v39[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v39);
      if ( v19 )
      {
        v39[0] = *(_QWORD *)(v19 + 152);
        ++*(_DWORD *)(v39[0] + 8);
      }
      else
      {
        v39[0] = gSmartObjNullRef;
      }
    }
  }
  v20 = a2 + 2;
  v21 = a2[2];
  if ( v21 != *(struct _HEAD **)v39[0] )
  {
    if ( v21 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38);
      RemoveParentMenu(a1, a2);
      DestroyMenu(*v20);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v38);
    }
    if ( !v40 && !*(_QWORD *)v39[0] )
    {
      UnlockSubMenu(a1, a2);
LABEL_64:
      v10 = 1;
      goto LABEL_38;
    }
    v26 = 0;
    if ( v40 )
    {
      if ( v40 != (struct _HEAD *)a1[2] )
        goto LABEL_55;
    }
    else if ( *(struct tagMENU **)v39[0] != **a1 )
    {
      goto LABEL_55;
    }
    Menu = InternalCreateMenu(0);
    v40 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v39, (__int64)Menu);
    if ( !v40 && !*(_QWORD *)v39[0] )
    {
LABEL_66:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
      return 0LL;
    }
    v26 = 1;
LABEL_55:
    v27 = v40;
    if ( !v40 )
      v27 = *(struct _HEAD **)v39[0];
    if ( v27 )
      v28 = *((_QWORD *)v27 + 6);
    else
      v28 = 0LL;
    *((_QWORD *)*a2 + 2) = v28;
    v38[0] = a2 + 2;
    v38[1] = v27;
    HMAssignmentLock(v38, 0LL);
    *(_DWORD *)(*((_QWORD *)*v20 + 5) + 40LL) |= 1u;
    MenuDepth = GetMenuDepth((__int64)v39, 25);
    if ( (unsigned int)GetMenuAncestors((__int64)a1) + MenuDepth < 0x19 )
    {
      v30 = (_QWORD *)Win32AllocPoolZInit(16LL, 1953066325LL);
      if ( v30 )
      {
        v31 = (struct tagMENU *)a1[2];
        if ( !v31 )
          v31 = **a1;
        v30[1] = v31;
        *v30 = *(_QWORD *)(*(_QWORD *)v39[0] + 104LL);
        *(_QWORD *)(*(_QWORD *)v39[0] + 104LL) = v30;
        goto LABEL_64;
      }
    }
    *(_DWORD *)(*((_QWORD *)*v20 + 5) + 40LL) &= ~1u;
    *((_QWORD *)*a2 + 2) = 0LL;
    HMAssignmentUnlock(a2 + 2);
    if ( v26 )
    {
      v37 = v40;
      if ( !v40 )
        v37 = *(struct _HEAD **)v39[0];
      DestroyMenu(v37);
    }
    goto LABEL_66;
  }
LABEL_38:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
  v9 = BaseAddress;
LABEL_39:
  v22 = *a2;
  if ( (*(_DWORD *)*a2 & 0x900) == 0 && !a2[3] && !*((_QWORD *)v22 + 12) )
  {
    *(_DWORD *)v22 = 2048;
    *((_DWORD *)*a2 + 1) |= 3u;
  }
  if ( v9 )
  {
    *((_DWORD *)*a2 + 20) = 0;
    *((_DWORD *)*a2 + 21) = 0x7FFFFFFF;
    *((_DWORD *)*a2 + 22) = 0;
    *((_DWORD *)**a1 + 16) = 0;
    *((_DWORD *)**a1 + 17) = 0;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
