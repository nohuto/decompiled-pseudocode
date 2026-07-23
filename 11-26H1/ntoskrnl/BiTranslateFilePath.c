/*
 * XREFs of BiTranslateFilePath @ 0x1409A2C44
 * Callers:
 *     BiCreateBootEntry @ 0x140899C64 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1409A2090 (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A2424 (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14072BAC0 (ZwTranslateFilePath.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiTranslateFilePath(PFILE_PATH InputFilePath, ULONG OutputType, _FILE_PATH **a3)
{
  _FILE_PATH *v5; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  _FILE_PATH *Pool2; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG OutputFilePathLength; // [rsp+68h] [rbp+20h] BYREF

  OutputFilePathLength = 0;
  v11[0] = 0LL;
  v5 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v11);
  if ( v7 < 0 )
    goto LABEL_9;
  v8 = ZwTranslateFilePath(InputFilePath, OutputType, 0LL, &OutputFilePathLength);
  v7 = v8;
  if ( v8 == -1073741789 )
  {
    Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
    v5 = Pool2;
    v7 = Pool2 ? ZwTranslateFilePath(InputFilePath, OutputType, Pool2, &OutputFilePathLength) : -1073741670;
  }
  else if ( v8 >= 0 )
  {
    v7 = -1073741811;
  }
  BiReleasePrivilege(v11);
  if ( v7 < 0 )
  {
LABEL_9:
    if ( v7 != -1073741811 || InputFilePath->Type != 4 )
      BiLogMessage(
        4LL,
        L"BiTranslateFilePath failed. File type: %lu. Status: %x",
        InputFilePath->Type,
        (unsigned int)v7);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
  }
  else
  {
    *a3 = v5;
  }
  return (unsigned int)v7;
}
