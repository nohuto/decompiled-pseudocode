/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004453C
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180043C0C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180043F5C (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004B6EC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180091CE8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D1D1C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180162B88 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801AAA5C (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int TransientObjectSecurityDescriptor; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(a1 + 8) = 1;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(8LL, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-2"
             "616377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
            1u,
            (PSECURITY_DESCRIPTOR *)a1,
            0LL) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x46,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsec"
                             "uritydescriptor.cpp",
               v7);
    *(_BYTE *)(a1 + 8) = 0;
    return 0;
  }
  if ( TransientObjectSecurityDescriptor >= 0 )
    return 0;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4C,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecuritydescriptor.cpp",
           (const char *)(unsigned int)TransientObjectSecurityDescriptor,
           a5);
}
