/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4
 * Callers:
 *     DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x1408A42B4 (DrvDbGetDriverDatabaseCompositeMappedPropertyKeys.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x140A880C0 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140976440 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int DatabaseNode; // ebx
  const UNICODE_STRING *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int i; // edx
  __int64 *v17; // r8
  __int64 (**v18)[3]; // r15
  unsigned int j; // edx
  __int64 (**v20)[3]; // r9
  __int64 *v21; // r8
  __int64 v22; // rdi
  HANDLE v23; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int k; // edx
  int v29; // eax
  __int64 v30; // rax
  int *v31; // rcx
  unsigned int v32; // eax
  size_t v33; // r8
  const wchar_t *v34; // rdx
  int *v35; // rdx
  bool v36; // cf
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  const UNICODE_STRING *v44; // rdx
  unsigned int v45; // ecx
  __int64 (**v46)[3]; // r9
  __int64 *v47; // r8
  __int64 v48; // rcx
  const UNICODE_STRING *v49; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v49 = 0LL;
  *a5 = 0;
  *a8 = 0;
  DatabaseNode = 0;
  v12 = 0LL;
  v13 = wcsicmp(a2, L"*");
  v14 = 0LL;
  if ( !v13 )
  {
    DatabaseNode = -1073741637;
    goto LABEL_22;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 == 2 )
  {
    v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v27 )
    {
      *a5 = 18;
      v30 = -1LL;
      do
        ++v30;
      while ( a2[v30] );
      v31 = a6;
      v32 = 2 * v30 + 2;
      *a8 = v32;
      if ( !a6 || a7 < v32 )
        goto LABEL_46;
      v33 = v32;
      v34 = a2;
      goto LABEL_45;
    }
  }
  for ( i = 0; i < 8; ++i )
  {
    v17 = off_140E0A4D0[i];
    if ( *((_DWORD *)v17 + 4) == v15 )
    {
      v14 = *v17 - *(_QWORD *)a4;
      if ( *v17 == *(_QWORD *)a4 )
        v14 = v17[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v49);
        if ( DatabaseNode < 0 )
          goto LABEL_22;
        v25 = *(_DWORD *)(a4 + 16);
        switch ( v25 )
        {
          case 5:
            v26 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
              v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v26 )
            {
              v35 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                v36 = *(_QWORD *)&v49[6].Length != 0LL;
LABEL_89:
                *(_BYTE *)v35 = -v36;
                goto LABEL_22;
              }
LABEL_46:
              DatabaseNode = -1073741789;
            }
            goto LABEL_22;
          case 6:
            v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v37 )
            {
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                *(_BYTE *)a6 = (*(_QWORD *)(a1 + 48) != (_QWORD)v49) - 1;
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 7:
            v38 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v38 )
              goto LABEL_22;
            v35 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_46;
            v39 = *(_DWORD *)&v49[4].Length & 4;
            goto LABEL_88;
          case 11:
            v40 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
              v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v40 )
            {
              *a5 = 7;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *a6 = *(_DWORD *)(a1 + 12);
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 15:
            v41 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
              v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v41 )
            {
              *a5 = 24;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *a6 = *(_DWORD *)&v49[10].Length;
                goto LABEL_22;
              }
              goto LABEL_46;
            }
            goto LABEL_22;
          case 23:
            v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Extended;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Extended )
              v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v42 )
              goto LABEL_22;
            v35 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_46;
            v39 = *(_DWORD *)&v49[4].Length & 0x10;
LABEL_88:
            v36 = v39 != 0;
            goto LABEL_89;
        }
        if ( v25 != 24 )
          goto LABEL_22;
        v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_ParentNode;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_ParentNode )
          v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v43 )
          goto LABEL_22;
        v44 = v49;
        if ( !*(_QWORD *)&v49[2].Length )
        {
          DatabaseNode = -1073741772;
          goto LABEL_22;
        }
        *a5 = 18;
        v45 = *(unsigned __int16 *)(*(_QWORD *)&v44[2].Length + 16LL) + 2;
        *a8 = v45;
        if ( !a6 || a7 < v45 )
          goto LABEL_46;
        v33 = v45;
        v31 = a6;
        v34 = *(const wchar_t **)(*(_QWORD *)&v44[2].Length + 24LL);
LABEL_45:
        memmove(v31, v34, v33);
        goto LABEL_22;
      }
    }
  }
  v18 = 0LL;
  for ( j = 0; j < 0xC; ++j )
  {
    v14 = 5LL * j;
    v20 = &off_14000F860 + 5 * j;
    v21 = (__int64 *)*v20;
    if ( LODWORD((**v20)[2]) == v15 )
    {
      v14 = *v21 - *(_QWORD *)a4;
      if ( *v21 == *(_QWORD *)a4 )
        v14 = v21[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        v18 = &off_14000F860 + 5 * j;
        break;
      }
    }
  }
  if ( v18 )
  {
    v22 = a1;
    goto LABEL_17;
  }
  v18 = 0LL;
  for ( k = 0; k < 4; ++k )
  {
    v46 = &off_14000FA40 + 5 * k;
    v47 = (__int64 *)*v46;
    if ( LODWORD((**v46)[2]) == v15 )
    {
      v48 = *v47 - *(_QWORD *)a4;
      if ( *v47 == *(_QWORD *)a4 )
        v48 = v47[1] - *(_QWORD *)(a4 + 8);
      if ( !v48 )
      {
        v18 = &off_14000FA40 + 5 * k;
        break;
      }
    }
  }
  if ( !v18 )
  {
    DatabaseNode = -1073741802;
    goto LABEL_22;
  }
  v22 = a1;
  DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v49);
  if ( DatabaseNode >= 0 )
  {
    v12 = v49;
LABEL_17:
    if ( a3 && (!v12 || (*(_DWORD *)&v12[4].Length & 0x10) == 0)
      || (!v12 || (*(_DWORD *)&v12[4].Length & 0x10) == 0
        ? (v29 = DrvDbOpenDriverDatabaseRegKey(v22, a2, 1LL, 0LL))
        : (v29 = DrvDbOpenObjectRegKey(
                   (__int64 *)v22,
                   *(__int64 **)(v22 + 40),
                   1u,
                   (__int64)a2,
                   1u,
                   0,
                   &Handle,
                   0LL,
                   0LL)),
          DatabaseNode = v29,
          v29 >= 0) )
    {
      v23 = a3;
      if ( Handle )
        v23 = Handle;
      DatabaseNode = DrvDbGetRegValueMappedProperty(v14, v23, (__int64)v18, a5, a6, a7, a8);
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
