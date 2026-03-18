/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x14091DE9C
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenContext @ 0x14089F29C (DrvDbOpenContext.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B29ACC (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14089FEB4 (DrvDbInitializeDatabaseNodeVersion.c)
 *     DrvDbUnloadDatabaseNode @ 0x14091E08C (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x14091E1FC (_PnpCtxRegCreateTree.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B234C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  __int64 v4; // r14
  void *v6; // r13
  __int64 v7; // r12
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  void *SecurityDescriptor; // rax
  __int64 v18; // r8
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  int DriverDatabaseMappedProperty; // eax
  int v22; // eax
  unsigned int *v23; // r14
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  CachedContextBaseKey = 0;
  v4 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v28 = 0;
  v7 = 0LL;
  v27 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    if ( v7 )
    {
      v9 = guard_dispatch_icall_no_overrides((__int64)a1, *(_QWORD *)(a2 + 24));
      if ( v9 == -1073741822 )
      {
        v7 = 0LL;
      }
      else if ( v9 < 0 )
      {
        CachedContextBaseKey = v9;
LABEL_8:
        v11 = guard_dispatch_icall_no_overrides((__int64)a1, *(_QWORD *)(a2 + 24));
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
        goto LABEL_9;
      }
    }
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v16 = *(unsigned int *)(a2 + 40);
      if ( (_DWORD)v16 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v16, &v29);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        LODWORD(v4) = v29;
      }
      CachedContextBaseKey = PnpCtxRegOpenKey(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, a2 + 96);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_7:
        if ( !v7 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 64);
    if ( (v10 & 8) != 0 )
      goto LABEL_7;
    v18 = *(_QWORD *)(a2 + 96);
    v19 = (_DWORD *)(a2 + 68);
    v20 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v20,
                                     v18,
                                     DEVPKEY_DriverDatabase_Version,
                                     &v27,
                                     a2 + 68,
                                     4,
                                     &v28);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v22 = *((_DWORD *)a1 + 2);
      if ( v22 && v22 != -1 )
      {
        *v19 = v22;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
        goto LABEL_42;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v27 != 7 || v28 != 4 )
        *v19 = -1;
LABEL_42:
      v23 = (unsigned int *)(a2 + 72);
      CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                               a1,
                               *(_QWORD *)(a2 + 24),
                               *(_QWORD *)(a2 + 96),
                               DEVPKEY_DriverDatabase_SchemaVersion,
                               &v27,
                               a2 + 72,
                               4,
                               &v28);
      if ( CachedContextBaseKey < 0 )
      {
        *v23 = 0;
        CachedContextBaseKey = 0;
      }
      else if ( v27 != 7 || v28 != 4 )
      {
        *v23 = -1;
      }
      v24 = *(_DWORD *)(a2 + 68);
      if ( v24 )
      {
        if ( v24 == -1 )
          goto LABEL_57;
        v25 = v24 & 0xFFFF0000;
        if ( v25 < 0x6020000 || v25 > ((_DWORD)a1[1] & 0xFFFF0000) )
          goto LABEL_57;
        v23 = (unsigned int *)(a2 + 72);
      }
      v26 = *v23;
      if ( *v23 != -1 && (v26 < 0x10001 || HIWORD(v26) == 1) )
        goto LABEL_7;
LABEL_57:
      DrvDbUnloadDatabaseNode(a1, a2);
      *(_DWORD *)(a2 + 64) |= 4u;
      CachedContextBaseKey = -1073740697;
      goto LABEL_7;
    }
    *v19 = 0;
    goto LABEL_42;
  }
  v13 = a2 + 96;
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_9;
  v14 = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v14, &v29);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v4 = v29;
  }
  v15 = PnpCtxRegOpenKey(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, v13);
  CachedContextBaseKey = v15;
  if ( v15 != -1073741772 )
  {
    if ( v15 < 0 )
      goto LABEL_9;
    goto LABEL_6;
  }
  SecurityDescriptor = DrvDbGetSecurityDescriptor();
  v6 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(
                           *a1,
                           v4,
                           *(_QWORD *)(a2 + 56),
                           0LL,
                           0x2000000,
                           SecurityDescriptor,
                           v13,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
    goto LABEL_6;
  }
LABEL_9:
  *(_DWORD *)(a2 + 160) = CachedContextBaseKey;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)CachedContextBaseKey;
}
