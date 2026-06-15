/*
 * XREFs of ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800AE0A0
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180037A44 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801569BC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x1801540D4 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 */

__int64 __fastcall AtmosCheck::BeginAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // eax
  DWORD *v3; // rdx
  HRESULT v4; // eax
  const char *v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  try
  {
    v9 = CurrentThreadId;
    v3 = (DWORD *)*((_QWORD *)this + 92);
    if ( v3 == *((DWORD **)this + 93) )
    {
      std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((char *)this + 728, v3, &v9);
    }
    else
    {
      *v3 = CurrentThreadId;
      *((_QWORD *)this + 92) += 4LL;
    }
    v4 = CoEnableCallCancellation(0LL);
    v6 = v4;
    if ( v4 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC22,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v4);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC26,
                           (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           v5);
  }
  return result;
}
