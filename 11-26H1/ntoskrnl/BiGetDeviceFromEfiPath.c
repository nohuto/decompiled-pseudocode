/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1409A2424
 * Callers:
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiCreateMergedBootEntry @ 0x1409A2090 (BiCreateMergedBootEntry.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiTranslateFilePath @ 0x1409A2C44 (BiTranslateFilePath.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, unsigned int *a3)
{
  _DWORD *v3; // r14
  _FILE_PATH *v4; // rsi
  char *i; // rbx
  unsigned int v8; // ebx
  _FILE_PATH *Pool2; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  _DWORD *v15; // rax

  v3 = 0LL;
  v4 = 0LL;
  if ( (*Src & 0x7F) == 0x7F )
  {
    v11 = -1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v8 = (_DWORD)i - (_DWORD)Src;
    Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      Pool2->Version = 1;
      Pool2->Length = v8 + 16;
      Pool2->Type = 4;
      memmove(Pool2->FilePath, Src, v8);
      *(_DWORD *)&v4->FilePath[v8] = 327551;
      v10 = BiTranslateFilePath(v4, 3u);
      v11 = v10;
      if ( v10 < 0 )
      {
        if ( v10 == -1073741811 )
          goto LABEL_7;
        goto LABEL_11;
      }
      v13 = MEMORY[4] - 12;
      v14 = MEMORY[4] - 12 + 20;
      v15 = (_DWORD *)ExAllocatePool2(0x102uLL);
      v3 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, v14);
        *v3 = 2;
        memmove(v3 + 5, (const void *)0xC, v13);
        *a3 = v14;
        *a2 = v3;
        goto LABEL_7;
      }
    }
    v11 = -1073741670;
  }
LABEL_11:
  BiLogMessage(4LL, L"BiGetDeviceFromEfiPath failed: %x", v11);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_7:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  return v11;
}
