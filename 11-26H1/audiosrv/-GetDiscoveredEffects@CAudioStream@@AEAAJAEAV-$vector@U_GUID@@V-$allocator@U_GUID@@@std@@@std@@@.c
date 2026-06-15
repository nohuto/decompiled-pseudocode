/*
 * XREFs of ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x18003685C
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180082F44 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800ABEAC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800B0D64 (--1-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800D3D28 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::GetDiscoveredEffects(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  char *v6; // rax
  char *v7; // rbx
  int v8; // r15d
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  const char *v13; // r9
  __int64 result; // rax
  char *v15; // r8
  _OWORD *v16; // rdx
  int v17; // [rsp+34h] [rbp-34h] BYREF
  char *v18; // [rsp+38h] [rbp-30h] BYREF
  char v19[8]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 360) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v5 = 16LL * *(unsigned int *)(a1 + 320);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 320), 0x10uLL) )
    v5 = -1LL;
  v6 = (char *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v7 = v6;
    v18 = v6;
    v8 = *(_DWORD *)(a1 + 320);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 352) + 40LL))(*(_QWORD *)(a1 + 352), v19);
    v17 = 0;
    v10 = NtQueryWnfStateData(v9, 0LL, 0LL, &v17);
    if ( v10 >= 0 )
    {
      if ( v17 )
      {
        while ( v4 < (v8 & 0xFFFFFFFu) )
        {
          v15 = &v7[16 * v4];
          v16 = *(_OWORD **)(a2 + 8);
          if ( v16 == *(_OWORD **)(a2 + 16) )
          {
            std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(a2, v16, v15);
          }
          else
          {
            *v16 = *(_OWORD *)v15;
            *(_QWORD *)(a2 + 8) += 16LL;
          }
          ++v4;
        }
        std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v18);
        return 0LL;
      }
    }
    else
    {
      v11 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x2EF,
              (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
              (const char *)(unsigned int)v10,
              (int)v7);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x740,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v11);
        if ( v7 )
          operator delete(v7);
        return v12;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x741,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
    std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v18);
    result = 2147500037LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x74B,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v13);
  }
  return result;
}
