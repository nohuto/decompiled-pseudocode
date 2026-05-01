/*
 * XREFs of ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x180034308
 * Callers:
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x180127890 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x180034428 (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall GameDVRTraceProvider::Shell_IsGameManager_DirChangeCallback<unsigned short const * &>(const WCHAR **a1)
{
  __int64 v2; // rax
  __int64 v3; // r10
  const WCHAR *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  const WCHAR *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v2 = wil::details::static_lazy<GameDVRTraceProvider>::get(
         a1,
         _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = 2 * v5 + 2;
    }
    else
    {
      v4 = &pvData;
      v6 = 2;
    }
    v14 = v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v3 + 8);
    v13 = v4;
    v15 = 0;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v10 = &unk_1807E8A21;
    UserData.Reserved = 2;
    v11 = 54;
    v12 = 1;
    LODWORD(v2) = EventWriteTransfer(*(_QWORD *)(v3 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v2;
}
