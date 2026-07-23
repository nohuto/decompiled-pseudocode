/*
 * XREFs of BiGetNtPartitionPath @ 0x1408987B8
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     BiTranslateSymbolicLink @ 0x140B244E4 (BiTranslateSymbolicLink.c)
 *     BiVerifyBootPartition @ 0x140B2E8B0 (BiVerifyBootPartition.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  int v3; // ebx
  void *Pool2; // rax
  char v5; // al
  __int64 v7; // rax
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = BiVerifyBootPartition(
         a1,
         (unsigned int)&v10,
         (unsigned int)&v10 + 8,
         (unsigned int)&v9 + 8,
         (__int64)&v8 + 8,
         0LL);
  if ( v3 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    *(_QWORD *)&v9 = Pool2;
    if ( !Pool2 )
    {
      v3 = -1073741801;
      goto LABEL_13;
    }
    if ( *((_QWORD *)&v8 + 1) && !(_QWORD)v10 )
    {
      v5 = BYTE1(v8);
      if ( !*((_QWORD *)&v10 + 1) )
        v5 = 1;
      BYTE1(v8) = v5;
    }
    v3 = SyspartEnumerateDisks(BiGetNtPartitionPathCallback, &v8);
    if ( v3 >= 0 )
    {
      if ( (_BYTE)v8 )
      {
        if ( (int)BiTranslateSymbolicLink((PCWSTR)v9) < 0 )
        {
          v7 = v9;
        }
        else
        {
          ExFreePoolWithTag((PVOID)v9, 0x4B444342u);
          v7 = 0LL;
          *(_QWORD *)&v9 = 0LL;
        }
        *a2 = v7;
        v3 = 0;
        goto LABEL_15;
      }
      v3 = -1073741811;
    }
  }
  Pool2 = (void *)v9;
LABEL_13:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
LABEL_15:
  if ( *((_QWORD *)&v8 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v8 + 1), 0x4B444342u);
  return (unsigned int)v3;
}
