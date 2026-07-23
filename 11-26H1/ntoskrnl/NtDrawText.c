/*
 * XREFs of NtDrawText @ 0x1406CF650
 * Callers:
 *     DifNtDrawTextWrapper @ 0x14067A1E0 (DifNtDrawTextWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BgkDrawText @ 0x140C5564C (BgkDrawText.c)
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS v2; // edi
  void *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  volatile void *ULong64FromUser; // r14
  void *Pool2; // rax
  unsigned __int16 i; // dx
  __int128 v9; // [rsp+20h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v10 = 0LL;
  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( !Text )
    return -1073741811;
  if ( !PreviousMode )
    goto LABEL_12;
  DWORD1(v9) = 0;
  LODWORD(v9) = RtlReadULongFromUser(Text);
  ULong64FromUser = (volatile void *)RtlReadULong64FromUser(&Text->Buffer);
  *((_QWORD *)&v9 + 1) = ULong64FromUser;
  v10 = v9;
  if ( ULong64FromUser && WORD1(v9) )
  {
    ProbeForRead(ULong64FromUser, WORD1(v9), 1u);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v3 = Pool2;
    if ( !Pool2 )
    {
      v2 = -1073741801;
      goto LABEL_19;
    }
    RtlCopyFromUser(Pool2, (void *)ULong64FromUser, WORD1(v9));
    *((_QWORD *)&v10 + 1) = v3;
    Text = (PUNICODE_STRING)&v10;
LABEL_12:
    v2 = -1073741811;
    for ( i = Text->MaximumLength >> 1; i; --i )
    {
      if ( !Text->Buffer[i - 1] )
      {
        v2 = 0;
        break;
      }
    }
    if ( v2 >= 0 )
      v2 = BgkDrawText(Text->Buffer);
  }
LABEL_19:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
