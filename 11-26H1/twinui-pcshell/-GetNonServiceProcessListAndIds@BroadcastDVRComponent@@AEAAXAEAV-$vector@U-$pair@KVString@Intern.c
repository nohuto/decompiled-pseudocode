/*
 * XREFs of ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004F948
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x18004FB4C (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1802B7C54 (--$_Reallocate@$0A@@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVStr.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x18030F3C0 (--$_Emplace_reallocate@U-$pair@KVString@Internal@Windows@@@std@@@-$vector@U-$pair@KVString@Inter.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall BroadcastDVRComponent::GetNonServiceProcessListAndIds(__int64 a1, __int64 a2)
{
  const char *v4; // r9
  DWORD v5; // edi
  __int64 i; // rsi
  DWORD v7; // r14d
  PCWSTR StringRawBuffer; // rax
  HSTRING v9; // rax
  __int64 v10; // rdx
  HSTRING v11; // rcx
  HSTRING string; // [rsp+20h] [rbp-1068h] BYREF
  DWORD cbNeeded; // [rsp+28h] [rbp-1060h] BYREF
  __int128 v14; // [rsp+30h] [rbp-1058h] BYREF
  __int64 v15; // [rsp+40h] [rbp-1048h]
  DWORD v16; // [rsp+48h] [rbp-1040h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-1038h]
  DWORD idProcess[1024]; // [rsp+60h] [rbp-1028h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1088h] [rbp+0h]

  cbNeeded = 0;
  if ( K32EnumProcesses(idProcess, 0x1000u, &cbNeeded) )
  {
    v14 = 0LL;
    v15 = 0LL;
    v5 = cbNeeded >> 2;
    string = (HSTRING)(cbNeeded >> 2);
    if ( cbNeeded >> 2 )
      std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocate<0>(&v14, &string);
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
    {
      string = 0LL;
      v7 = idProcess[i];
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, HSTRING *))(**(_QWORD **)(a1 + 256) + 104LL))(
             *(_QWORD *)(a1 + 256),
             v7,
             &string) >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( (unsigned int)_o__wcsicmp(StringRawBuffer, L"svchost.exe") )
        {
          v16 = v7;
          v9 = string;
          v17 = string;
          string = 0LL;
          v10 = *((_QWORD *)&v14 + 1);
          if ( *((_QWORD *)&v14 + 1) == v15 )
          {
            std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Emplace_reallocate<std::pair<unsigned long,Windows::Internal::String>>(
              &v14,
              *((_QWORD *)&v14 + 1),
              &v16);
            v11 = v17;
          }
          else
          {
            **((_DWORD **)&v14 + 1) = v7;
            *(_QWORD *)(v10 + 8) = v9;
            v11 = 0LL;
            *((_QWORD *)&v14 + 1) += 16LL;
          }
          if ( v11 )
            WindowsDeleteString(v11);
        }
      }
      if ( string )
        WindowsDeleteString(string);
    }
    if ( (__int128 *)a2 != &v14 )
    {
      std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(a2);
      *(_OWORD *)a2 = v14;
      *(_QWORD *)(a2 + 16) = v15;
      v14 = 0LL;
      v15 = 0LL;
    }
    std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v14);
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x853,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      v4);
  }
}
