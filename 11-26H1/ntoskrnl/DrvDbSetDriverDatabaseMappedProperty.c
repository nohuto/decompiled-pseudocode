/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C
 * Callers:
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x1408A62B4 (DrvDbInitializeDatabaseNodeVersion.c)
 *     DrvDbDispatchDriverDatabase @ 0x140A880C0 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077E60C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140978AEC (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        int a5,
        int *SourceString,
        unsigned int a7)
{
  __int64 (**v7)[3]; // r15
  int DatabaseNode; // edi
  __int64 v12; // r13
  int v13; // eax
  int v14; // r9d
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int i; // edx
  __int64 *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  struct _KTHREAD *v27; // rax
  int v28; // eax
  struct _ERESOURCE *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 j; // rdx
  __int64 (**v34)[3]; // r10
  __int64 *v35; // r8
  __int64 v36; // rcx
  __int64 k; // rdx
  __int64 (**v38)[3]; // r10
  __int64 *v39; // r8
  __int64 v40; // rcx
  HANDLE v41; // rcx
  int v42; // eax
  __int64 v43; // rax
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING v45; // xmm0
  __int64 v47; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  v47 = 0LL;
  DatabaseNode = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = wcsicmp(a2, L"*");
  v14 = *(_DWORD *)(a4 + 16);
  if ( v13 )
  {
    if ( v14 == 2 )
    {
      v20 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v20 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v20 )
      {
LABEL_27:
        DatabaseNode = -1073741790;
        goto LABEL_125;
      }
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 8 )
      {
        for ( j = 0LL; (unsigned int)j < 0xC; j = (unsigned int)(j + 1) )
        {
          v34 = &off_14000F860 + 5 * j;
          v35 = (__int64 *)*v34;
          if ( LODWORD((**v34)[2]) == v14 )
          {
            v36 = *v35 - *(_QWORD *)a4;
            if ( *v35 == *(_QWORD *)a4 )
              v36 = v35[1] - *(_QWORD *)(a4 + 8);
            if ( !v36 )
            {
              v7 = &off_14000F860 + 5 * j;
              break;
            }
          }
        }
        if ( !v7 )
        {
          for ( k = 0LL; (unsigned int)k < 4; k = (unsigned int)(k + 1) )
          {
            v38 = &off_14000FA40 + 5 * k;
            v39 = (__int64 *)*v38;
            if ( LODWORD((**v38)[2]) == v14 )
            {
              v40 = *v39 - *(_QWORD *)a4;
              if ( *v39 == *(_QWORD *)a4 )
                v40 = v39[1] - *(_QWORD *)(a4 + 8);
              if ( !v40 )
              {
                v7 = &off_14000FA40 + 5 * k;
                break;
              }
            }
          }
          if ( !v7 )
          {
            DatabaseNode = -1073741802;
            goto LABEL_125;
          }
          DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v47);
          if ( DatabaseNode < 0 )
            goto LABEL_125;
          v12 = v47;
        }
        if ( a5 != *((_DWORD *)v7 + 2) && a5 )
          goto LABEL_124;
        v41 = a3;
        if ( !a3 )
        {
          if ( v12 )
            v42 = DrvDbOpenObjectRegKey(a1, *(_QWORD *)(a1 + 40), 1, (_DWORD)a2, 2, 1, (__int64)&Handle, 0LL, 0LL);
          else
            v42 = DrvDbOpenDriverDatabaseRegKey(a1, a2, 2LL, 0LL);
          DatabaseNode = v42;
          if ( v42 < 0 )
            goto LABEL_125;
          v41 = 0LL;
        }
        if ( Handle )
          v41 = Handle;
        DatabaseNode = DrvDbSetRegValueMappedProperty((__int64)v41, (__int64)v41, (__int64)v7, a5, SourceString, a7);
        if ( DatabaseNode >= 0 && v12 && (*(_DWORD *)(v12 + 64) & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
        {
          v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
            v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( !v43 && a5 )
          {
            if ( a7 >= 2 && SourceString && !*((_WORD *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
            {
              if ( !RtlCreateUnicodeString(&DestinationString, (PCWSTR)SourceString) )
              {
                DatabaseNode = -1073741670;
                goto LABEL_125;
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 152), 1u);
              RtlFreeAnsiString((PUNICODE_STRING)(v12 + 48));
              v45 = DestinationString;
              *(_DWORD *)(v12 + 40) = 0;
              *(UNICODE_STRING *)(v12 + 48) = v45;
              v29 = *(struct _ERESOURCE **)(v12 + 152);
              goto LABEL_123;
            }
            goto LABEL_124;
          }
        }
        goto LABEL_125;
      }
      v22 = off_140E0A4D0[i];
      if ( *((_DWORD *)v22 + 4) == v14 )
      {
        v23 = *v22 - *(_QWORD *)a4;
        if ( *v22 == *(_QWORD *)a4 )
          v23 = v22[1] - *(_QWORD *)(a4 + 8);
        if ( !v23 )
          break;
      }
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v47);
    if ( DatabaseNode < 0 )
      goto LABEL_125;
    v24 = *(_DWORD *)(a4 + 16);
    switch ( v24 )
    {
      case 5:
        v25 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v25 )
          goto LABEL_125;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          v26 = v47;
          if ( (*(_DWORD *)(v47 + 64) & 1) != 0 )
            goto LABEL_27;
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 152), 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v28 = DrvDbLoadDatabaseNode(a1, v26);
          else
            v28 = DrvDbUnloadDatabaseNode(a1, v26);
          v29 = *(struct _ERESOURCE **)(v26 + 152);
          DatabaseNode = v28;
LABEL_123:
          ExReleaseResourceLite(v29);
          KeLeaveCriticalRegion();
          goto LABEL_125;
        }
        goto LABEL_124;
      case 6:
        v30 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
          v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v30 )
          goto LABEL_125;
        if ( a5 != 17 || a7 != 1 || !SourceString )
          goto LABEL_124;
        if ( *(_BYTE *)SourceString == 0xFF )
        {
          *(_QWORD *)(a1 + 48) = v47;
          goto LABEL_125;
        }
        if ( v47 != *(_QWORD *)(a1 + 48) )
        {
          v16 = v47 == 0;
          goto LABEL_10;
        }
        goto LABEL_11;
      case 7:
        v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
          v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v31 )
          goto LABEL_125;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_DWORD *)(v47 + 64) |= 4u;
          else
            *(_DWORD *)(v47 + 64) &= ~4u;
          goto LABEL_125;
        }
        goto LABEL_124;
    }
    if ( v24 != 11 )
      goto LABEL_125;
    v32 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v32 )
      goto LABEL_125;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_124;
    if ( v47 != *(_QWORD *)(a1 + 32) )
      goto LABEL_27;
    v18 = *SourceString;
    goto LABEL_20;
  }
  if ( v14 != 6 )
  {
    if ( v14 != 11 )
      goto LABEL_22;
    v17 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v17 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v17 )
      goto LABEL_22;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_124;
    v18 = *SourceString;
LABEL_20:
    v19 = v18 & 0xD0000000;
    *(_DWORD *)(a1 + 12) = v19;
    if ( v19 == 0x10000000 )
      *(_DWORD *)(a1 + 12) = -805306368;
    goto LABEL_125;
  }
  v15 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
    v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v15 )
  {
LABEL_22:
    DatabaseNode = -1073741637;
    goto LABEL_125;
  }
  if ( a5 != 17 || a7 != 1 || !SourceString )
  {
LABEL_124:
    DatabaseNode = -1073741811;
    goto LABEL_125;
  }
  v16 = *(_BYTE *)SourceString == 0xFF;
LABEL_10:
  if ( v16 )
LABEL_11:
    *(_QWORD *)(a1 + 48) = 0LL;
LABEL_125:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
