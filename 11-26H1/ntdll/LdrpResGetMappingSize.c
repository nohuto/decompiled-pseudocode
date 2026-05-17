/*
 * XREFs of LdrpResGetMappingSize @ 0x1800A7DC0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180031F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-88h]
  _QWORD v17[2]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v19; // [rsp+68h] [rbp-60h] BYREF
  __int128 v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+88h] [rbp-40h]

  v15 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17[0] = 3670070LL;
  v17[1] = L"LdrpResGetMappingSize Enter";
  v18[0] = 3538996LL;
  v18[1] = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v17, *(unsigned __int8 *)v14);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v9 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *a2;
    goto LABEL_30;
  }
  if ( (a3 & 0x20000) != 0 )
    v9 = *a2;
  *a2 = 0LL;
  FileSizeFromLoadAsDataTable = 0LL;
  result = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v15);
  if ( (int)result >= 0 )
  {
    if ( *(_WORD *)(v15 + 24) == 267 || *(_WORD *)(v15 + 24) == 523 )
    {
      v12 = *(unsigned int *)(v15 + 80);
      v16 = v12;
    }
    else
    {
      v12 = 0LL;
      v16 = 0LL;
      result = 3221225595LL;
    }
    if ( (int)result >= 0 )
    {
      if ( NtCurrentPeb()->ImageBaseAddress != (void *)a1 || (a3 & 0x100) == 0 || (a1 & 1) != 0 || !v12 )
      {
        if ( !a4 )
          FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
        if ( FileSizeFromLoadAsDataTable )
        {
          v13 = 0;
        }
        else
        {
          v13 = ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 3LL, &v19, 48LL, 0LL);
          if ( v13 >= 0 )
            FileSizeFromLoadAsDataTable = v20;
        }
        if ( !FileSizeFromLoadAsDataTable && v12 )
        {
          FileSizeFromLoadAsDataTable = v12;
          v13 = 0;
        }
        if ( v13 < 0 )
          goto LABEL_24;
        goto LABEL_31;
      }
      FileSizeFromLoadAsDataTable = v12;
LABEL_30:
      v13 = 0;
LABEL_31:
      if ( v9 && v9 < FileSizeFromLoadAsDataTable )
        v13 = -1073741793;
      else
        *a2 = FileSizeFromLoadAsDataTable;
LABEL_24:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v6 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll((unsigned __int16 *)v18, *(unsigned __int8 *)v8);
      }
      return (unsigned int)v13;
    }
  }
  return result;
}
