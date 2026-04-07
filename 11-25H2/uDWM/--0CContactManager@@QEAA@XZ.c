/*
 * XREFs of ??0CContactManager@@QEAA@XZ @ 0x18002B2AC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002A120 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 */

CContactManager *__fastcall CContactManager::CContactManager(CContactManager *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r9

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 56, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 88, v2, v3);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 120, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 152, v6, v7);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 184, v8, v9);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 216, v10, v11);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 248, v12, v13);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 280, v14, v15);
  *((_QWORD *)this + 39) = v16;
  *((_DWORD *)this + 80) = v16;
  CContactManager::RefreshPresentationModeSettings(this);
  return this;
}
