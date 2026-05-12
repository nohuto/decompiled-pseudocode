/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1401BD5E4
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1401842F0 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCbCopyW @ 0x14003DB18 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x14004308C (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     RaidAdapterFreeDriverInfo @ 0x140061244 (RaidAdapterFreeDriverInfo.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, __int64 a2, struct _UNICODE_STRING **a3, _BYTE *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  size_t v10; // rdi
  wchar_t *Pool; // rax
  wchar_t *v12; // rbp
  _QWORD *i; // rdi
  struct _UNICODE_STRING *v14; // rax
  struct _UNICODE_STRING *v15; // rdi
  wchar_t **p_Buffer; // rax
  wchar_t *v17; // rax
  __int64 v18; // r11
  wchar_t *v19; // rax
  wchar_t *v20; // r11
  int FullDriverPath; // eax
  unsigned int v22; // ebp
  __int64 v23; // rax
  int v24; // eax
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING *v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v26 = 0LL;
  *a4 = 0;
  *a3 = 0LL;
  RaidDriverGetName(v6, (__int64)&v26);
  v10 = (unsigned int)(unsigned __int16)v26 + 10;
  Pool = (wchar_t *)RaidAllocatePool(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( Pool )
  {
    RtlStringCbPrintfW(Pool, v10, L"%ws.sys", *((_QWORD *)&v26 + 1));
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( !_wcsicmp((const wchar_t *)i[3], v12) )
      {
        *a3 = (struct _UNICODE_STRING *)(i - 1);
        *a4 = 1;
LABEL_10:
        ExFreePoolWithTag(v12, 0x44436152u);
        return v7;
      }
    }
    v14 = (struct _UNICODE_STRING *)RaidAllocatePool(64LL, 176LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v27 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v7 = -1073741670;
      goto LABEL_10;
    }
    p_Buffer = &v14->Buffer;
    p_Buffer[1] = (wchar_t *)p_Buffer;
    *p_Buffer = (wchar_t *)p_Buffer;
    *(_DWORD *)&v15->Length = 176;
    v15[1].Buffer = (wchar_t *)RaUnitStorageDumpControl;
    *(_QWORD *)&v15[2].Length = v12;
    v17 = (wchar_t *)RaidAllocatePool(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v17 )
      goto LABEL_16;
    RtlStringCbCopyW(v17, 0x22uLL, L"dumpstorport.sys");
    *(_QWORD *)&v15[3].Length = v18;
    v19 = (wchar_t *)RaidAllocatePool(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v19 )
      goto LABEL_16;
    RtlStringCbCopyW(v19, 0x1AuLL, L"storport.sys");
    v15[3].Buffer = v20;
    RtlInitUnicodeString(v15 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
    FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), &v15[8]);
    v22 = 0;
    if ( FullDriverPath >= 0 )
      v22 = FullDriverPath;
    v23 = RaidAllocatePool(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v23 )
    {
      *(_DWORD *)(&v15[4].MaximumLength + 1) = 208;
      v15[4].Buffer = (wchar_t *)v23;
      *(_QWORD *)&v15[7].Length = v28;
      if ( (*(_DWORD *)(a1 + 604) & 1) != 0 || (v24 = *(_DWORD *)(a1 + 4340), v24 == 10) || v24 == 1 )
        *(_DWORD *)&v15[4].Length |= 1u;
      *a3 = v15;
      return v22;
    }
    else
    {
LABEL_16:
      v7 = -1073741670;
      RaidAdapterFreeDriverInfo((PVOID *)&v27);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
