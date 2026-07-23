/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x140A17B4C
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140A17D80 (PiCMCaptureInterfaceAliasInputData.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(void *a1, __int64 a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned __int64 v7; // r14
  _WORD *Pool2; // rdi
  unsigned int v10; // esi
  NTSTATUS inited; // ebx
  const WCHAR *v12; // r15
  int v13; // edx
  NTSTATUS v14; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  GUID AliasInterfaceClassGuid; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-11h]

  v20 = 0LL;
  v7 = 0LL;
  *a6 = 0;
  AliasSymbolicLinkName = 0LL;
  Pool2 = 0LL;
  v10 = 0;
  AliasInterfaceClassGuid = 0LL;
  *(_OWORD *)SourceString = 0LL;
  DestinationString = 0LL;
  inited = PiCMCaptureInterfaceAliasInputData(a1);
  if ( inited < 0 )
    goto LABEL_20;
  v12 = SourceString[1];
  if ( !SourceString[1] || *(_DWORD *)&AliasInterfaceClassGuid.Data2 || !a3 || a4 < 0x14 )
  {
    v13 = 0;
    inited = -1073741811;
    goto LABEL_17;
  }
  if ( a4 - 20 >= 2 )
    v7 = a4 - 20;
  if ( (_DWORD)v7 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_16;
    if ( (unsigned int)v7 >= 2 )
      *Pool2 = 0;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v12);
  if ( inited < 0
    || (inited = IoGetDeviceInterfaceAlias(
                   &DestinationString,
                   (const GUID *)AliasInterfaceClassGuid.Data4,
                   &AliasSymbolicLinkName),
        inited >= 0)
    && ((v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1, 2 * (unsigned __int64)v10 > v7)
      ? (inited = -1073741789)
      : (memmove(Pool2, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length), Pool2[v10 - 1] = 0),
        ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0),
        inited < 0) )
  {
    v13 = 2 * v10;
    goto LABEL_17;
  }
LABEL_16:
  v13 = 2 * v10;
  if ( inited < 0 )
  {
LABEL_17:
    v14 = PiCMReturnBufferResultData(inited, v13, 0, 0LL, 0, SHIDWORD(v20), a3, a4, a6);
    goto LABEL_18;
  }
  v14 = PiCMReturnBufferResultData(inited, v13, 0, Pool2, v13, SHIDWORD(v20), a3, a4, a6);
LABEL_18:
  inited = v14;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  return (unsigned int)inited;
}
