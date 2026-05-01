/*
 * XREFs of ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801E779C
 * Callers:
 *     ?Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z @ 0x1801E76A0 (-Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z.c)
 * Callees:
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x1802198EC (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x18066BD60 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18066D35C (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedListEnum::_NextPidlFromStream(CPinnedListEnum *this, struct _ITEMIDLIST **a2)
{
  int v4; // r13d
  char v5; // r15
  bool v6; // r12
  char v7; // r14
  HRESULT v8; // ebx
  IStream *v9; // rcx
  bool v10; // zf
  LPITEMIDLIST v11; // rax
  int v13; // [rsp+30h] [rbp-30h] BYREF
  LPITEMIDLIST ppidlOut; // [rsp+38h] [rbp-28h] BYREF
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-20h] BYREF
  _BYTE pv[8]; // [rsp+48h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = *((_DWORD *)this + 12) & 4;
  v5 = *((_BYTE *)this + 48) & 1;
  v6 = !v5 || (*((_BYTE *)this + 48) & 2) != 0;
  pv[0] = 0;
  while ( 1 )
  {
    v7 = 0;
    v8 = IStream_Read(*((IStream **)this + 4), pv, 1u);
    if ( v8 < 0 )
      break;
    if ( pv[0] == 0xFF )
      return 1;
    ppidl = 0LL;
    v8 = SHGetSpecialFolderLocation(0LL, pv[0], &ppidl);
    if ( v8 >= 0 )
    {
      v9 = (IStream *)*((_QWORD *)this + 4);
      ppidlOut = 0LL;
      v8 = IStream_ReadPidl(v9, &ppidlOut);
      if ( v8 >= 0 )
      {
        if ( (int)GetTimestampFromPidl(ppidlOut, 3203334188LL, &v13) < 0 )
          v10 = !v6;
        else
          v10 = v5 == 0;
        if ( v10 || !v4 && IsExpiredTombstone(ppidlOut) )
        {
          v7 = 1;
        }
        else
        {
          v11 = ILCombine(ppidl, ppidlOut);
          *a2 = v11;
          if ( v11 )
          {
            v8 = 0;
            v13 = 0;
            if ( (int)GetPinSourceForPinnedItem(v11, (enum TaskbarPinningSource *)&v13) >= 0 && v13 != -1
              || (v8 = SetPinSourceForPinnedItem(*a2, a2, 0LL), v8 >= 0) )
            {
              if ( *((_DWORD *)this + 10) )
                v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _ITEMIDLIST **))(**((_QWORD **)this + 2)
                                                                                              + 96LL))(
                       *((_QWORD *)this + 2),
                       *((unsigned int *)this + 11),
                       *a2,
                       a2);
            }
          }
          else
          {
            v8 = -2147024882;
          }
        }
        ILFree(ppidlOut);
      }
      ILFree(ppidl);
      if ( v7 )
        continue;
    }
    return (unsigned int)v8;
  }
  return (unsigned int)v8;
}
