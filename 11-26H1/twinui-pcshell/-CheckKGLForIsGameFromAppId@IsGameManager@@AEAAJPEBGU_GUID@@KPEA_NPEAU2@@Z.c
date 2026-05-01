/*
 * XREFs of ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F3550
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x1800A4A90 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x180316218 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall IsGameManager::CheckKGLForIsGameFromAppId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool *a5,
        struct _GUID *a6)
{
  RTL_SRWLOCK *v10; // rbx
  bool *v11; // r14
  PVOID Ptr; // rcx
  unsigned int v13; // edi
  int v14; // eax
  IsGameManager *v15; // rcx
  unsigned int v16; // esi
  struct KnownGameList::IGameEntry *v17; // rcx
  int IsGameEnabled; // eax
  int updated; // eax
  struct _GUID v21; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct KnownGameList::IGameEntry *v23; // [rsp+90h] [rbp+8h] BYREF

  v10 = this + 4;
  AcquireSRWLockShared(this + 4);
  v23 = 0LL;
  v11 = a5;
  *a5 = 0;
  Ptr = this[3].Ptr;
  if ( !Ptr )
  {
    v13 = -2147467261;
LABEL_15:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    goto LABEL_16;
  }
  v14 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, struct KnownGameList::IGameEntry **))(*(_QWORD *)Ptr + 56LL))(
          Ptr,
          a2,
          &v23);
  v16 = v14;
  v13 = -2147023728;
  if ( v14 != -2147023728 )
  {
    if ( v14 >= 0 )
    {
      IsGameEnabled = IsGameManager::IsGameEnabled(v15, v23, v11);
      v13 = IsGameEnabled;
      if ( IsGameEnabled >= 0 )
      {
        if ( !memcmp_0(a3, &xmmword_18077AA50, 0x10uLL) )
        {
          v21 = *a3;
          updated = IsGameManager::UpdateGameConfigStoreFromKGL((IsGameManager *)this, v23, &v21, a4, 0, 0LL, a6);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4E7,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)updated);
        }
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4DE,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)IsGameEnabled);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4DC,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v14);
      v13 = v16;
    }
    goto LABEL_15;
  }
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_16:
  ReleaseSRWLockShared(v10);
  return v13;
}
