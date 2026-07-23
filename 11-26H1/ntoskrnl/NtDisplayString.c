/*
 * XREFs of NtDisplayString @ 0x14083D5A0
 * Callers:
 *     DifNtDisplayStringWrapper @ 0x14067A070 (DifNtDisplayStringWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     BgkDisplayStringEx @ 0x1405C7D74 (BgkDisplayStringEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  KPROCESSOR_MODE PreviousMode; // di
  volatile void *ULong64FromUser; // rsi
  _WORD *Pool2; // rax
  _WORD *v6; // rdi
  wchar_t *Buffer; // rax
  _WORD *v8; // rax
  char v9; // bl
  int ULongFromUser; // [rsp+30h] [rbp-28h]

  if ( !String )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)&String->Length);
    ULong64FromUser = (volatile void *)RtlReadULong64FromUser(&String->Buffer);
    if ( !ULong64FromUser || !HIWORD(ULongFromUser) )
      return 0;
    ProbeForRead(ULong64FromUser, HIWORD(ULongFromUser), 1u);
    if ( !(unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)ULong64FromUser) )
      return 0;
    Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      RtlCopyFromUser(Pool2, (void *)ULong64FromUser, HIWORD(ULongFromUser));
      v6[(unsigned __int64)HIWORD(ULongFromUser) >> 1] = 0;
      goto LABEL_19;
    }
    return -1073741801;
  }
  Buffer = String->Buffer;
  if ( !Buffer || !String->MaximumLength || !*Buffer )
    return 0;
  v8 = (_WORD *)ExAllocatePool2(0x40uLL);
  v6 = v8;
  if ( !v8 )
    return -1073741801;
  memmove(v8, String->Buffer, String->MaximumLength);
  v6[(unsigned __int64)String->MaximumLength >> 1] = 0;
LABEL_19:
  v9 = BgkDisplayStringEx(v6);
  ExFreePoolWithTag(v6, 0);
  if ( !v9 )
    return -1073741823;
  return 0;
}
