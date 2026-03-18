/*
 * XREFs of ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F89B4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1401F7794 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F819C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzCleanupInputSpaces(CInputConfig **this, const struct tagPROCESSINFO *a2)
{
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PERESOURCE *v7; // r14
  struct _ERESOURCE *v8; // rcx
  CInputConfig *v9; // rdx
  CInputConfig *i; // rdi
  char *v11; // rcx
  __int64 v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  CInputConfig *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(this, a2);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18640));
  v7 = (PERESOURCE *)(W32GetUserSessionState(v6, v5) + 18640);
  v8 = *v7;
  v17[0] = v7;
  ExEnterCriticalRegionAndAcquireResourceShared(v8);
  v9 = *this;
  v17[1] = this;
  for ( i = *(CInputConfig **)v9; ; i = *(CInputConfig **)i )
  {
    v11 = 0LL;
    v17[3] = i;
    v17[2] = v9;
    if ( v9 != (CInputConfig *)this )
      v11 = (char *)v9 + 16;
    if ( !v11 )
      break;
    v12 = 16LL;
    if ( v9 != (CInputConfig *)this )
      v12 = (__int64)v9 + 32;
    if ( *(const struct tagPROCESSINFO **)v12 == a2 )
    {
      v13 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v17, (__int64)v9);
      CInputConfig::_FreeInputSpace(v14, v13);
    }
    v9 = i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v7);
  CInputConfig::_EnsureInputSpace((CInputConfig *)this, v15);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18640));
  CInputConfig::_zzzNotifyExternalComponents((CInputConfig *)this, v16);
}
