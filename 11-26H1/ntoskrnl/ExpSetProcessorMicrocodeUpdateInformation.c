/*
 * XREFs of ExpSetProcessorMicrocodeUpdateInformation @ 0x140839448
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MmLoadSystemImage @ 0x140A39A30 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 */

__int64 __fastcall ExpSetProcessorMicrocodeUpdateInformation(unsigned int *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  unsigned int v6; // ebx
  unsigned int ULongFromUser; // eax
  unsigned int v8; // eax
  int SystemImage; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    if ( !SeSinglePrivilegeCheck(SeExports->SeLoadDriverPrivilege, a3) )
    {
      v6 = -1073741727;
      goto LABEL_21;
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)&ExpSysDbgLock.Spare26) != 1 )
    {
      v6 = -1073741757;
      goto LABEL_21;
    }
  }
  if ( a2 < 4 )
  {
    v6 = -1073741820;
    goto LABEL_21;
  }
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser(a1);
  else
    ULongFromUser = *a1;
  v8 = ULongFromUser - 1;
  if ( !v8 )
  {
    v11 = ExpMicrocodeInformationLoad();
    goto LABEL_20;
  }
  if ( v8 != 2 )
  {
    v6 = -1073741811;
    goto LABEL_21;
  }
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\sfsupdate_AuthenticAMD.dll");
  SystemImage = MmLoadSystemImage((unsigned int)&DestinationString, 0, 0, 0, (__int64)&v15, (__int64)&v13);
  if ( SystemImage >= 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(v15, v10);
LABEL_20:
    v6 = v11;
    goto LABEL_21;
  }
  v6 = 0;
  if ( SystemImage != -1073741772 )
    v6 = SystemImage;
LABEL_21:
  if ( v15 )
    MmUnloadSystemImage(v15);
  if ( a3 && v6 != -1073741727 )
    _InterlockedDecrement((volatile signed __int32 *)&ExpSysDbgLock.Spare26);
  return v6;
}
