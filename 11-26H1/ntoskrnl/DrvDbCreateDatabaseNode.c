/*
 * XREFs of DrvDbCreateDatabaseNode @ 0x1408A5A58
 * Callers:
 *     DrvDbOpenContext @ 0x1408A569C (DrvDbOpenContext.c)
 *     DrvDbRegisterDatabase @ 0x1408A584C (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x1408A5D90 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        int a4,
        PCWSTR SourceString,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v11; // rbx
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // rax
  WCHAR *v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 Pool2; // rax
  struct _ERESOURCE *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  int v24; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF

  Handle = 0LL;
  v11 = a3;
  v24 = 0;
  v13 = 0LL;
  *a9 = 0LL;
  if ( (a6 & 0x20) != 0 && (a6 & 0x10) != 0
    || (a6 & 1) != 0 && *(_QWORD *)(a1 + 32)
    || (a6 & 0x20) != 0 && (v15 = *(_QWORD *)(a1 + 40)) != 0 && v15 != *(_QWORD *)(a1 + 32) )
  {
    return (unsigned int)-1073741811;
  }
  if ( SourceString )
  {
    v16 = (WCHAR *)SourceString;
LABEL_25:
    Pool2 = ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 68) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 80) = a7;
      *(_QWORD *)(Pool2 + 88) = a8;
      *(_DWORD *)(Pool2 + 72) = 0x10000;
      *(_DWORD *)(Pool2 + 64) = a6;
      *(_DWORD *)(Pool2 + 40) = a4;
      *(_QWORD *)(Pool2 + 32) = v11;
      if ( RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), a2)
        && RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 48), v16)
        && (v21 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL), (*(_QWORD *)(v13 + 152) = v21) != 0LL) )
      {
        v14 = ExInitializeResourceLite(v21);
        if ( v14 >= 0 )
        {
          if ( (a6 & 0x20) == 0 )
          {
            v22 = *(__int64 **)(a1 + 24);
            if ( *v22 != a1 + 16 )
              __fastfail(3u);
            *(_QWORD *)v13 = a1 + 16;
            *(_QWORD *)(v13 + 8) = v22;
            *v22 = v13;
            *(_QWORD *)(a1 + 24) = v13;
          }
          if ( (a6 & 0x10) == 0
            || (v23 = *(_QWORD *)(a1 + 40)) == 0
            || (v14 = DrvDbOpenObjectRegKey(a1, v23, 1, (_DWORD)a2, 0x2000000, 1, (__int64)&Handle, (__int64)&v24, 0LL),
                v14 >= 0)
            && (v24 != 1
             || (v14 = DrvDbSetDriverDatabaseMappedProperty(
                         a1,
                         a2,
                         Handle,
                         (__int64)&DEVPKEY_DriverDatabase_RegistryPath,
                         18,
                         *(int **)(v13 + 56),
                         (unsigned int)*(unsigned __int16 *)(v13 + 48) + 2),
                 v14 >= 0)) )
          {
            if ( (a6 & 0x20) != 0 )
              *(_QWORD *)(a1 + 40) = v13;
            if ( (a6 & 1) != 0 )
            {
              *(_QWORD *)(a1 + 32) = v13;
              if ( !*(_QWORD *)(a1 + 40) )
                *(_QWORD *)(a1 + 40) = v13;
            }
            *a9 = v13;
            v13 = 0LL;
          }
        }
        else
        {
          ExFreePoolWithTag(*(PVOID *)(v13 + 152), 0);
          *(_QWORD *)(v13 + 152) = 0LL;
        }
      }
      else
      {
        v14 = -1073741670;
      }
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( a2[v17] );
  v18 = (unsigned int)(2 * v17 + 68);
  v16 = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( v16 )
  {
    v14 = RtlStringCchPrintfExW(
            v16,
            v18 >> 1,
            0LL,
            0LL,
            0x800u,
            L"%ws\\%ws\\%ws",
            L"\\REGISTRY\\MACHINE",
            a2,
            L"DriverDatabase");
    if ( v14 < 0 )
      goto LABEL_15;
    v11 = a3;
    goto LABEL_25;
  }
LABEL_14:
  v14 = -1073741801;
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v13 )
  {
    *(_QWORD *)(v13 + 80) = 0LL;
    DrvDbDestroyDatabaseNode(a1, v13);
  }
  if ( v16 && v16 != SourceString )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)v14;
}
