/*
 * XREFs of BiCreateMergedBootEntry @ 0x1409A2090
 * Callers:
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiGetFilePathFromEfiPath @ 0x1409A1EF8 (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A2424 (BiGetDeviceFromEfiPath.c)
 *     BiTranslateFilePath @ 0x1409A2C44 (BiTranslateFilePath.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  _DWORD *v8; // rdi
  _WORD *v9; // r14
  _FILE_PATH *v10; // r12
  unsigned int v11; // edx
  int v12; // r9d
  int v13; // r8d
  _DWORD *v14; // rax
  _DWORD *v15; // r15
  __int64 v16; // rcx
  size_t v17; // r8
  int v18; // eax
  int DeviceFromEfiPath; // ebx
  _WORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  _FILE_PATH *Pool2; // rax
  __int64 v28; // rbx
  size_t v29; // r8
  int v30; // eax
  int FilePathFromEfiPath; // eax
  char v32; // [rsp+20h] [rbp-30h]
  size_t v33; // [rsp+24h] [rbp-2Ch] BYREF
  _WORD *v34; // [rsp+30h] [rbp-20h] BYREF
  size_t v35; // [rsp+38h] [rbp-18h]
  size_t Size; // [rsp+40h] [rbp-10h]
  char v38; // [rsp+A0h] [rbp+50h]
  _WORD *v39; // [rsp+A8h] [rbp+58h]

  v39 = a4;
  v5 = -1LL;
  v6 = a2;
  v33 = 0LL;
  Size = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  v38 = 0;
  v9 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v32 = 0;
  if ( !a3 )
  {
    v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_3;
    v35 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v8 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_18;
    a4 = v39;
    v21 = (_WORD *)(Size + 20);
    goto LABEL_22;
  }
  if ( *a3 == 5 )
  {
    DeviceFromEfiPath = -1073741810;
    goto LABEL_18;
  }
  if ( *a3 != 2 )
  {
    DeviceFromEfiPath = -1073741811;
    goto LABEL_18;
  }
  v21 = a3 + 5;
  if ( a4 )
  {
LABEL_22:
    v9 = a4;
    goto LABEL_23;
  }
  v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v35 = (size_t)v8;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath((__int64)(v8 + 3), (__int64 *)&v34, &v33);
  v9 = v34;
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath < 0 )
    goto LABEL_18;
  v32 = 1;
LABEL_23:
  v22 = -1LL;
  v23 = -1LL;
  do
    ++v23;
  while ( v21[v23] );
  v24 = 2 * v23 + 2;
  HIDWORD(v33) = v24;
  do
    ++v22;
  while ( v9[v22] );
  LODWORD(v33) = 2 * v22 + 2;
  v25 = v24 + v33;
  if ( v24 + (unsigned int)v33 < v24 )
  {
LABEL_17:
    DeviceFromEfiPath = -1073741675;
    goto LABEL_18;
  }
  v26 = v25 + 12;
  if ( v25 + 12 < v25 )
  {
    DeviceFromEfiPath = -1073741675;
    goto LABEL_18;
  }
  Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
  v10 = Pool2;
  if ( !Pool2 )
    goto LABEL_40;
  Pool2->Length = v26;
  v28 = HIDWORD(v33);
  v29 = HIDWORD(v33);
  Pool2->Version = 1;
  Pool2->Type = 3;
  memmove(Pool2->FilePath, v21, v29);
  memmove(&v10->FilePath[v28], v9, (unsigned int)v33);
  v30 = BiTranslateFilePath(v10, 4u);
  v8 = (_DWORD *)v35;
  DeviceFromEfiPath = v30;
  if ( v30 >= 0 )
  {
    v6 = a2;
    v5 = -1LL;
    v38 = 1;
LABEL_3:
    if ( !v6 )
      v6 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
    do
      ++v5;
    while ( v6[v5] );
    v11 = a1[6];
    v12 = 2 * v5 + 2;
    LODWORD(v35) = v12;
    if ( v11 + v12 >= v11 )
    {
      v13 = v8[1];
      if ( v11 + v12 + v13 + 36 >= v11 + v12 )
      {
        LODWORD(v34) = (v11 + 31) & 0xFFFFFFFC;
        LODWORD(v33) = (v12 + (_DWORD)v34 + 3) & 0xFFFFFFFC;
        HIDWORD(v33) = v13 + v33;
        Size = (unsigned int)(v13 + v33);
        v14 = (_DWORD *)ExAllocatePool2(0x102uLL);
        v15 = v14;
        if ( v14 )
        {
          memset_0(v14, 0, Size);
          v16 = (unsigned int)v34;
          v17 = (unsigned int)v35;
          v15[1] = HIDWORD(v33);
          *v15 = 1;
          v15[2] = a1[2];
          v15[3] = a1[3];
          v18 = v33;
          v15[4] = v16;
          v15[5] = v18;
          v15[6] = a1[6];
          memmove((char *)v15 + v16, v6, v17);
          memmove((char *)v15 + (unsigned int)v33, v8, (unsigned int)v8[1]);
          memmove(v15 + 7, a1 + 7, (unsigned int)a1[6]);
          *a5 = v15;
          DeviceFromEfiPath = 0;
          goto LABEL_10;
        }
LABEL_40:
        DeviceFromEfiPath = -1073741670;
        goto LABEL_18;
      }
    }
    goto LABEL_17;
  }
LABEL_18:
  BiLogMessage(4LL, L"BiCreateMergedBootEntry failed %x", (unsigned int)DeviceFromEfiPath);
LABEL_10:
  if ( v38 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( v32 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
