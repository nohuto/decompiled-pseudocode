/*
 * XREFs of SmpLogFailureString @ 0x140001D34
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002770 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 *     SmpCleanupStalePageFiles @ 0x14000F040 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFile @ 0x14000F9C0 (SmpCreatePagingFile.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FA78 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateVolumeDescriptor @ 0x14000FF10 (SmpCreateVolumeDescriptor.c)
 *     SmpGetPagingFileSize @ 0x140010CFC (SmpGetPagingFileSize.c)
 *     SmpTrimPagingFileExtents @ 0x1400114AC (SmpTrimPagingFileExtents.c)
 *     SmpBuildSubSystemLists @ 0x1400132D0 (SmpBuildSubSystemLists.c)
 *     SmpConfigureEnvironment @ 0x1400137E0 (SmpConfigureEnvironment.c)
 *     SmpConfigureObjectDirectories @ 0x140013B40 (SmpConfigureObjectDirectories.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140013FA0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpDeleteFile @ 0x140014588 (SmpDeleteFile.c)
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 *     SmpInitializeDosDevices @ 0x1400152F0 (SmpInitializeDosDevices.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x1400168F0 (SmpLoadDeferredSubsystem.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpOpenKnownDllsHandles @ 0x140016EC0 (SmpOpenKnownDllsHandles.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 *     SmpStartServerSilo @ 0x140018B00 (SmpStartServerSilo.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpLogFailureString(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r11
  _WORD *v10; // r10
  __int16 v11; // ax
  _WORD *v12; // rax
  _BYTE v14[64]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v15[160]; // [rsp+60h] [rbp-B8h] BYREF

  memset_0(v14, 0, 0xE0uLL);
  if ( a3 )
  {
    v8 = a3 - (_QWORD)v15;
    v9 = 64LL;
    v10 = v15;
    do
    {
      if ( v9 == -2147483582 )
        break;
      v11 = *(_WORD *)((char *)v10 + v8);
      if ( !v11 )
        break;
      *v10++ = v11;
      --v9;
    }
    while ( v9 );
    v12 = v10 - 1;
    if ( v9 )
      v12 = v10;
    *v12 = 0;
  }
  return SmpInternalLogFailure(a1, a2, a4, v14);
}
