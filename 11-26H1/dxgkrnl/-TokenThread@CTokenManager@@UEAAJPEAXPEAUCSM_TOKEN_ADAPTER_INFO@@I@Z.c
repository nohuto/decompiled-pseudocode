/*
 * XREFs of ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x140059190
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x14005925C (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::TokenThread(
        CTokenManager *this,
        void *a2,
        struct CSM_TOKEN_ADAPTER_INFO *a3,
        unsigned int a4)
{
  int v7; // ebx
  __int64 Win32kImportTable; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  v7 = CTokenManager::ValidateUserEvent(a2, &v11);
  if ( v7 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v7 = (*(__int64 (__fastcall **)(HANDLE *))(Win32kImportTable + 488))(&Handle);
    if ( v7 >= 0 )
      v7 = CTokenManager::ProcessTokens(this, v11, Handle, a3, a4);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v11 )
    ObCloseHandle(v11, 0);
  return (unsigned int)v7;
}
