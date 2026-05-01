/*
 * XREFs of ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x180698620
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ @ 0x180689B00 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x180699180 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x180699A54 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x180699ED8 (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::UpdateForRemovedItemsAsNecessary(CPinnedList *this)
{
  int v2; // esi
  unsigned int v3; // r15d
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rax
  int v8; // eax
  const struct _ITEMIDLIST *v9; // rdx
  int v10; // esi
  __int64 v11; // r8
  int v13; // [rsp+30h] [rbp-39h] BYREF
  LPITEMIDLIST i; // [rsp+38h] [rbp-31h] BYREF
  LPITEMIDLIST pidl; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h] BYREF
  int v17; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-9h] BYREF
  int *v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  int *v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]

  v2 = 0;
  v3 = CPinnedList::_GetRemovedGlobalChangeCount(this);
  if ( (unsigned int)IsProcessAnExplorer() )
  {
    v4 = (_QWORD *)((char *)this - 16);
    if ( v3 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 184LL))((char *)this - 16) )
    {
      v5 = *(_QWORD *)this;
      v6 = 0;
      *((_DWORD *)this + 16) = 1;
      v13 = 0;
      v16 = 0LL;
      v2 = (*(__int64 (__fastcall **)(CPinnedList *, __int64 *))(v5 + 24))(this, &v16);
      if ( v2 >= 0 )
      {
        for ( i = 0LL;
              !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *, _QWORD))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 1LL,
                 &i,
                 0LL);
              ILFree(i) )
        {
          v7 = *(_QWORD *)this;
          pidl = 0LL;
          v8 = (*(__int64 (__fastcall **)(CPinnedList *, _QWORD, __int64, LPITEMIDLIST, LPITEMIDLIST *))(v7 + 48))(
                 this,
                 0LL,
                 17LL,
                 i,
                 &pidl);
          v9 = i;
          v10 = v8;
          if ( v8 < 0 )
          {
            if ( (*(int (__fastcall **)(char *, LPITEMIDLIST, __int64))(v4[4] + 24LL))((char *)this + 16, i, 15LL) >= 0 )
              v6 = 1;
            v13 = v6;
            if ( (byte_1808DB102 & 4) != 0 )
            {
              v21 = 4LL;
              v20 = &v17;
              v23 = 4LL;
              v22 = &v18;
              v18 = 2;
              v17 = v10;
              McGenEventWrite_EventWriteTransfer(
                &Microsoft_Windows_Shell_Core_Provider_Context,
                &Explorer_PinnedListItemRemoved,
                v11,
                3u,
                &v19);
            }
          }
          else
          {
            if ( pidl )
              v9 = pidl;
            CPinnedList::_ResolveTargetLink((CPinnedList *)((char *)this - 16), v9, &v13);
            ILFree(pidl);
            v6 = v13;
          }
        }
        v2 = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *((_DWORD *)this + 16) = 0;
      if ( v6 )
        CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), 0LL, 1);
      (*(void (__fastcall **)(char *, _QWORD))(*v4 + 176LL))((char *)this - 16, v3);
    }
  }
  return (unsigned int)v2;
}
