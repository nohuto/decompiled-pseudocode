/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x140C4A1F8
 * Callers:
 *     ViThunkSnapSharedExports @ 0x140C4A140 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x1405386E0 (_stricmp.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(char *BaseOfImage, const char **a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // r12
  __int64 v10; // rax
  const char *v11; // rbx
  __int64 *v13; // r14
  char *v14; // rbx
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 8) = -1;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 1u, &Size);
  v8 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, &Size);
  v9 = v8;
  if ( v7 && v8 )
  {
    while ( 1 )
    {
      v10 = v7[3];
      if ( !(_DWORD)v10 || !*v7 )
        break;
      v11 = &BaseOfImage[v10];
      if ( !stricmp(&BaseOfImage[v10], "ntoskrnl.exe") || !stricmp(v11, "hal.dll") )
      {
        v13 = (__int64 *)&BaseOfImage[*v7];
        v14 = &BaseOfImage[v7[4]];
        while ( *v13 )
        {
          if ( *v13 >= 0 && !stricmp(&BaseOfImage[*v13 + 2], *a2) )
          {
            *(_QWORD *)a3 = v14;
            v3 = 1;
            *(_QWORD *)(a3 + 16) = a2;
            *(_DWORD *)(a3 + 8) = (unsigned __int64)(v14 - v9) >> 3;
            return v3;
          }
          ++v13;
          v14 += 8;
        }
      }
      v7 += 5;
    }
  }
  return v3;
}
