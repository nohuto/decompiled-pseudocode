/*
 * XREFs of ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1801FCB00
 * Callers:
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1801FCA74 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800D0EDC (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallerIdentity::CheckProcessCapability(
        DWORD dwProcessId,
        void *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  char *v6; // rax
  void **v7; // r9
  char *v8; // rbx
  unsigned int LastError; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v14; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v8 = v6;
  v14 = v6;
  if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v11 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)v6, a2, a3, v7);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
        (const char *)(unsigned int)v11);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v14);
    return v12;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x44,
                  (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
                  (const char *)v7);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v8);
    return LastError;
  }
}
