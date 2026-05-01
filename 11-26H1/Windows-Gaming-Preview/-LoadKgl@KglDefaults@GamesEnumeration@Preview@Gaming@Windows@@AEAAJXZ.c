/*
 * XREFs of ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B188
 * Callers:
 *     ?LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B5A0 (-LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PEBG1PEAVString@Internal@5@@Z @ 0x18003AF88 (-GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PE.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003DA90 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int KnownFolderSubFolder; // eax
  unsigned int v6; // ebx
  HSTRING v8; // rbx
  const WCHAR *StringRawBuffer; // rax
  const struct _GUID *v10; // rdx
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v11; // rcx
  const unsigned __int16 *v12; // r9
  int v13; // eax
  unsigned int v14; // edi
  HSTRING v15; // rdi
  struct KnownGameList::IQueryKnownGameList **v16; // rsi
  const unsigned __int16 *v17; // r8
  RTL_SRWLOCK *v18; // r14
  PVOID Ptr; // rcx
  int QueryKnownGameListInstance; // eax
  int v21; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  HSTRING v24; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v25; // [rsp+78h] [rbp+20h]

  v24 = 0LL;
  string = 0LL;
  KnownFolderSubFolder = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
                           (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)this,
                           a2,
                           L"Microsoft\\GameDVR",
                           a4,
                           &string);
  v6 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder >= 0 )
  {
    v8 = string;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    CreateDirectoryW(StringRawBuffer, 0LL);
    v13 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
            v11,
            v10,
            L"Microsoft\\GameDVR\\KnownGameList.bin",
            v12,
            &v24);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v25 = this + 2;
      AcquireSRWLockExclusive(this + 2);
      v15 = v24;
      v16 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer(v24, 0LL);
      v18 = this + 1;
      Ptr = this[1].Ptr;
      if ( Ptr )
      {
        v18->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)&this[1], v16, v17);
      v21 = QueryKnownGameListInstance;
      if ( (unsigned int)(QueryKnownGameListInstance + 2147024894) > 1 && QueryKnownGameListInstance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB2,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
          (const char *)(unsigned int)QueryKnownGameListInstance);
      ReleaseSRWLockExclusive(this + 2);
      if ( v21 >= 0 )
      {
        v25 = this + 2;
        AcquireSRWLockShared(this + 2);
        (*(void (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)v18->Ptr + 80LL))(v18->Ptr, this + 3);
        ReleaseSRWLockShared(this + 2);
      }
      if ( v8 )
        WindowsDeleteString(v8);
      if ( v15 )
        WindowsDeleteString(v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v13);
      if ( v8 )
        WindowsDeleteString(v8);
      if ( v24 )
        WindowsDeleteString(v24);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    if ( string )
      WindowsDeleteString(string);
    return v6;
  }
}
