/*
 * XREFs of BiTranslateFilePath @ 0x1409D1C64
 * Callers:
 *     BiCreateBootEntry @ 0x140893864 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1409D10B0 (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x1409D1444 (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x140726EF0 (ZwTranslateFilePath.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiTranslateFilePath(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int v7; // ebx
  int v8; // eax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  Pool2 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v10);
  if ( v7 < 0 )
    goto LABEL_9;
  v8 = ZwTranslateFilePath(a1, a2);
  v7 = v8;
  if ( v8 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    v7 = Pool2 ? ZwTranslateFilePath(a1, a2) : -1073741670;
  }
  else if ( v8 >= 0 )
  {
    v7 = -1073741811;
  }
  BiReleasePrivilege(v10);
  if ( v7 < 0 )
  {
LABEL_9:
    if ( v7 != -1073741811 || *(_DWORD *)(a1 + 8) != 4 )
      BiLogMessage(
        4LL,
        L"BiTranslateFilePath failed. File type: %lu. Status: %x",
        *(unsigned int *)(a1 + 8),
        (unsigned int)v7);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
  else
  {
    *a3 = Pool2;
  }
  return (unsigned int)v7;
}
