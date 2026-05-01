/*
 * XREFs of ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DSA_GetItemPtr @ 0x1801FE380 (DSA_GetItemPtr.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x1802198EC (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5F74 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x18030D920 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x18030D9B0 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1805C4FD0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     _DSA_MaybeShrink @ 0x18065DC44 (_DSA_MaybeShrink.c)
 *     DSA_Preallocate @ 0x18065E20C (DSA_Preallocate.c)
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x18066823C (-Destruct@PINENTRY@@QEAAXXZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180668568 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x18066BD60 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x18066BF40 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18066FA60 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x180671B9C (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x180671C30 (_CacheAppIDInIDList.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x180672200 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180672AA0 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall CPinList::ReplacePidl(
        HDSA *a1,
        struct CPinnedList *a2,
        struct _ITEMIDLIST *a3,
        const struct _ITEMIDLIST *a4,
        char a5,
        struct _ITEMIDLIST **a6)
{
  int v9; // ebx
  const ITEMIDLIST **PidlOrAppID; // rax
  CPinList *v11; // rcx
  const ITEMIDLIST **v12; // rdi
  CPinList *v13; // rcx
  int Tombstone; // eax
  HDSA v15; // rbx
  int v16; // ecx
  __int128 v17; // xmm0
  int v18; // ebx
  int v19; // esi
  __int128 v20; // xmm1
  int v21; // edi
  struct _DSA *v22; // rcx
  int v23; // eax
  const ITEMIDLIST **ItemPtr; // rax
  int TimestampFromPidl; // eax
  int v26; // ecx
  struct _DSA *v27; // r14
  int v28; // eax
  int v29; // r13d
  int v30; // eax
  PVOID v31; // rax
  __int64 v32; // rbx
  int v33; // edx
  void *v34; // rdi
  PVOID v35; // rax
  int v36; // eax
  HDSA v37; // rbx
  CPinList *v38; // rcx
  const struct _ITEMIDLIST *ID; // rbx
  const struct _ITEMIDLIST *HiddenID; // rsi
  const struct _ITEMIDLIST *v41; // r14
  struct _ITEMIDLIST *v42; // rbx
  int v43; // edx
  ITEMIDLIST *v44; // rsi
  int i[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _ITEMIDLIST *v47; // [rsp+28h] [rbp-D8h]
  _OWORD Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszPath[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v47 = a3;
  if ( a6 )
    *a6 = 0LL;
  i[0] = 0;
  v9 = -2147023728;
  PidlOrAppID = CPinList::FindPidlOrAppID(a1, a3, 1, i);
  v12 = PidlOrAppID;
  if ( PidlOrAppID )
  {
    if ( !a6 || (v9 = SHILClone(*PidlOrAppID, a6), v9 >= 0) )
    {
      pszPath[0] = 0;
      if ( !a4 )
      {
        CPinList::_GetBackupShortcutToDelete(v11, a2, *v12, pszPath);
        if ( (a5 & 1) == 0 )
        {
LABEL_10:
          PINENTRY::Destruct((PINENTRY *)v12);
          v15 = *a1;
          if ( i[0] >= 0 )
          {
            v16 = *(_DWORD *)v15;
            if ( i[0] < *(_DWORD *)v15 )
            {
              if ( i[0] < v16 - 1 )
                memmove_0(
                  (void *)(*((_QWORD *)v15 + 1) + (unsigned int)(i[0] * *((_DWORD *)v15 + 5))),
                  (const void *)(*((_QWORD *)v15 + 1) + (unsigned int)(*((_DWORD *)v15 + 5) * (i[0] + 1))),
                  (unsigned int)(*((_DWORD *)v15 + 5) * (v16 - i[0] - 1)));
              --*(_DWORD *)v15;
              DSA_MaybeShrink((__int64)v15);
            }
          }
          goto LABEL_50;
        }
        Tombstone = CPinList::_CreateTombstone(v13, a2, pszPath, (struct PINENTRY *)v12);
        if ( Tombstone < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB35,
            (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)Tombstone);
          goto LABEL_10;
        }
LABEL_50:
        v9 = CPinList::Save((CPinList *)a1, a2);
LABEL_67:
        if ( pszPath[0] )
        {
          SHRemoveLocalizedName(pszPath);
          DeleteFileW(pszPath);
        }
        return (unsigned int)v9;
      }
      if ( (unsigned __int64)a4 >= 0x10000 )
      {
        if ( !ILIsEqual(*v12, a4) )
          CPinList::_GetBackupShortcutToDelete(v38, a2, *v12, pszPath);
        *(_QWORD *)i = 0LL;
        v9 = SHILClone(a4, (struct _ITEMIDLIST **)i);
        if ( v9 >= 0 )
        {
          v9 = CacheAppIDInIDList(*(struct _ITEMIDLIST **)i);
          if ( v9 < 0 )
          {
            v44 = *(ITEMIDLIST **)i;
          }
          else
          {
            if ( ILFindHiddenIDOn(*v12, -1091633108)
              && (ID = ILFindLastID(*v12),
                  HiddenID = (const struct _ITEMIDLIST *)ILFindFirstHiddenID(ID),
                  v41 = (const struct _ITEMIDLIST *)((char *)ID + ID->mkid.cb),
                  HiddenID) )
            {
              v42 = *(struct _ITEMIDLIST **)i;
              do
              {
                v43 = *(_DWORD *)((char *)&HiddenID[1].mkid.cb + 1);
                if ( v43 != -1091633108 && !ILFindHiddenIDOn(v42, v43) )
                  v42 = ILAppendHiddenID(v42, (const struct _HIDDENITEMID *)HiddenID);
                HiddenID = ILNextHidden((const struct _HIDDENITEMID *)HiddenID, v41);
              }
              while ( HiddenID );
            }
            else
            {
              v42 = *(struct _ITEMIDLIST **)i;
            }
            ILFree((LPITEMIDLIST)*v12);
            *v12 = v42;
            v44 = 0LL;
            PINENTRY::UpdateShellLink((PINENTRY *)v12);
            v9 = CPinList::Save((CPinList *)a1, a2);
          }
          ILFree(v44);
        }
        goto LABEL_67;
      }
      v17 = *(_OWORD *)v12;
      v18 = (_DWORD)a4 - 1;
      v19 = 0;
      v20 = *((_OWORD *)v12 + 1);
      v21 = 0;
      Src[0] = v17;
      Src[1] = v20;
      if ( v18 > 0 )
      {
        do
        {
          v22 = *a1;
          if ( *a1 )
            v23 = *(_DWORD *)v22;
          else
            v23 = 0;
          if ( v19 >= v23 )
            break;
          ItemPtr = (const ITEMIDLIST **)DSA_GetItemPtr(v22, v19);
          TimestampFromPidl = GetTimestampFromPidl(*ItemPtr, -1091633108, &v49);
          v26 = v21 + 1;
          if ( TimestampFromPidl >= 0 )
            v26 = v21;
          ++v19;
          v21 = v26;
        }
        while ( v26 < v18 );
      }
      v27 = *a1;
      if ( *a1 )
        v28 = *(_DWORD *)v27;
      else
        v28 = 0;
      if ( v19 > v28 )
      {
        v9 = -2147483637;
        goto LABEL_67;
      }
      v29 = i[0];
      if ( i[0] >= v19 )
      {
        if ( i[0] <= v19 )
        {
LABEL_41:
          i[0] = 0;
          if ( (int)GetPinSourceForPinnedItem(v47, (enum TaskbarPinningSource *)i) >= 0 && i[0] != -1 )
          {
            v36 = SetPinSourceForPinnedItem(*(_QWORD *)&Src[0], Src, (unsigned int)i[0]);
            if ( v36 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xB6C,
                (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v36);
          }
          v37 = *a1;
          if ( v19 < 0 )
            goto LABEL_50;
          if ( v19 >= *(_DWORD *)v37 )
          {
            if ( !(unsigned int)DSA_Preallocate((__int64)*a1, v19 - *(_DWORD *)v37 + 1) )
              goto LABEL_50;
            memset_0(
              (void *)(*((_QWORD *)v37 + 1) + (unsigned int)(*(_DWORD *)v37 * *((_DWORD *)v37 + 5))),
              0,
              (unsigned int)(*((_DWORD *)v37 + 5) * (v19 - *(_DWORD *)v37)));
            *(_DWORD *)v37 = v19 + 1;
          }
          memcpy_0(
            (void *)(*((_QWORD *)v37 + 1) + (unsigned int)(v19 * *((_DWORD *)v37 + 5))),
            Src,
            *((unsigned int *)v37 + 5));
          goto LABEL_50;
        }
        v31 = DSA_GetItemPtr(*a1, v19 + 1);
        v33 = v19;
        v32 = v29 - v19;
      }
      else
      {
        if ( v27 )
          v30 = *(_DWORD *)v27;
        else
          v30 = 0;
        if ( v19 >= v30 )
        {
          if ( v27 )
            v19 = *(_DWORD *)v27;
          else
            v19 = 0;
        }
        --v19;
        v31 = DSA_GetItemPtr(*a1, i[0]);
        v32 = v19 - v29;
        v33 = v29 + 1;
      }
      v34 = v31;
      v35 = DSA_GetItemPtr(v27, v33);
      memmove_0(v34, v35, 32 * v32);
      goto LABEL_41;
    }
  }
  return (unsigned int)v9;
}
