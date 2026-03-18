/*
 * XREFs of ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x140212244
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14008DACC (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x14008DB40 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x14008F0A8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzCleanupInputSpaces(CInputConfig **this, const struct tagPROCESSINFO *a2, int a3)
{
  __int64 UserSessionState; // r14
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  PERESOURCE *v9; // rsi
  struct _ERESOURCE *v10; // rcx
  CInputConfig *v11; // rdx
  CInputConfig *v12; // rdi
  char *v13; // rcx
  CInputConfig *v14; // rbp
  __int64 v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  CInputConfig *v17; // rcx
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  v9 = (PERESOURCE *)(W32GetUserSessionState(v7, v6, v8) + 18688);
  v10 = *v9;
  v18[0] = v9;
  ExEnterCriticalRegionAndAcquireResourceShared(v10);
  v11 = *this;
  v18[1] = this;
  v12 = *(CInputConfig **)v11;
  while ( 1 )
  {
    v13 = 0LL;
    v18[3] = v12;
    v18[2] = v11;
    v14 = v12;
    if ( v11 != (CInputConfig *)this )
      v13 = (char *)v11 + 16;
    if ( !v13 )
      break;
    v15 = 16LL;
    if ( v11 != (CInputConfig *)this )
      v15 = (__int64)v11 + 32;
    if ( *(const struct tagPROCESSINFO **)v15 == a2 )
    {
      v16 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v18);
      CInputConfig::_FreeInputSpace(v17, v16);
    }
    v12 = *(CInputConfig **)v12;
    v11 = v14;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v9);
  CInputConfig::_EnsureInputSpace((CInputConfig *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  CInputConfig::_zzzNotifyExternalComponents((CInputConfig *)this);
}
