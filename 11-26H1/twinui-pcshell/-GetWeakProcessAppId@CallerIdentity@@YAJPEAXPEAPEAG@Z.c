/*
 * XREFs of ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1801741C8
 * Callers:
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1805EB7CC (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall CallerIdentity::GetWeakProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  NTSTATUS v5; // eax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  char *i; // rbx
  __int64 v9; // rbx
  _WORD *v10; // rax
  _WORD *v11; // rdi
  size_t v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int ReturnLength; // [rsp+20h] [rbp-258h]
  ULONG v18[4]; // [rsp+30h] [rbp-248h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-238h] BYREF
  unsigned __int16 v20; // [rsp+44h] [rbp-234h]
  _BYTE Src[506]; // [rsp+46h] [rbp-232h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  *a2 = 0LL;
  memset_0(&ProcessInformation, 0, 0x200uLL);
  v18[0] = 0;
  v5 = NtQueryInformationProcess(
         ProcessHandle,
         ProcessExecuteFlags|ProcessUserModeIOPL,
         &ProcessInformation,
         0x200u,
         v18);
  if ( v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x191,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
             (const char *)(unsigned int)v5,
             ReturnLength);
  if ( (ProcessInformation & 0x1000) == 0 )
    return 0;
  v6 = (unsigned __int64)v20 >> 1;
  v7 = v6;
  for ( i = Src; v7; --v7 )
  {
    if ( !*(_WORD *)i )
      break;
    i += 2;
  }
  v9 = (i - Src) >> 1;
  v10 = CoTaskMemAlloc(2 * v6 + 2);
  v11 = v10;
  if ( v10 )
  {
    v12 = 2 * v9;
    if ( v12 )
    {
      if ( 2 * v6 + 2 < v12 )
      {
        memset_0(v10, 0, 2 * v6 + 2);
        *(_DWORD *)_o__errno(v15, v14, v16) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v10, Src, v12);
      }
    }
    v11[v12 / 2] = 0;
    v11[v6] = 0;
  }
  *a2 = v11;
  if ( *a2 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)0x8007000ELL);
  return -2147024882;
}
