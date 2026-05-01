/*
 * XREFs of ?DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z @ 0x1800EF31C
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1800EDA28 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IsGameManager::DelayGameConfigStoreUpdate(IsGameManager *this, bool *a2)
{
  ULONGLONG TickCount64; // rax
  DWORD v5; // edx

  *a2 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    TickCount64 = GetTickCount64();
    v5 = 0;
    if ( TickCount64 < *((_QWORD *)this + 13) )
      v5 = *((_DWORD *)this + 26) - TickCount64;
    if ( WaitForSingleObject(*((HANDLE *)this + 12), v5) )
      *((_QWORD *)this + 13) = GetTickCount() + 1000;
    else
      *a2 = 1;
  }
}
