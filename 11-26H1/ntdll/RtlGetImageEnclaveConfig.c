/*
 * XREFs of RtlGetImageEnclaveConfig @ 0x18014EFF4
 * Callers:
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlULongLongSub @ 0x1800E2E10 (RtlULongLongSub.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlGetImageEnclaveConfig(char *BaseOfImage, char *a2)
{
  NTSTATUS result; // eax
  int v5; // ebx
  _DWORD *Config; // rax
  __int64 v7; // r10
  char *v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // eax
  PIMAGE_NT_HEADERS v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  result = RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v12);
  if ( result >= 0 )
  {
    v5 = -1073741701;
    Config = LdrImageDirectoryEntryToLoadConfigEx(BaseOfImage);
    if ( Config )
    {
      if ( *Config >= 0x100u
        && (int)RtlULongLongSub(*((_QWORD *)Config + 31), v12->OptionalHeader.ImageBase, (__int64 *)&v13) >= 0 )
      {
        v8 = &BaseOfImage[v13];
        if ( v13 )
        {
          v9 = *(unsigned int *)(v7 + 80);
          if ( v13 < v9 && v13 + 4 >= v13 && v13 + 4 <= v9 )
          {
            v10 = *(unsigned int *)v8;
            if ( v10 + v13 >= v13 && v10 + v13 < v9 && (unsigned int)v10 >= 4 )
            {
              v11 = 0;
              if ( (unsigned int)v10 >= 8 )
                v11 = *((_DWORD *)v8 + 1);
              if ( v11 < 4 )
                v11 = 4;
              if ( v11 <= 0x50 )
              {
                if ( (unsigned int)v10 > 0x50 )
                  v10 = 80LL;
                memmove(a2, v8, (unsigned int)v10);
                if ( (unsigned int)v10 < 0x50 )
                  memset_thunk_772440563353939046(&a2[v10], 0, 80LL - (unsigned int)v10);
                return 0;
              }
            }
          }
        }
      }
    }
    return v5;
  }
  return result;
}
