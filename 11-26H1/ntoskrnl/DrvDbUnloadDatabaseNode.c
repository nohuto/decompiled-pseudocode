/*
 * XREFs of DrvDbUnloadDatabaseNode @ 0x140978AEC
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x1408A5D90 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140977EEC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DrvDbUnloadDatabaseNode(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  NTSTATUS v3; // ebx
  int v6; // eax
  unsigned int v7; // eax
  _QWORD *v9; // rsi
  unsigned int v10; // r14d
  HANDLE *v11; // rsi

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  if ( v2 )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 24));
    if ( v6 == -1073741822 )
    {
      v2 = 0LL;
    }
    else if ( v6 < 0 )
    {
      v3 = v6;
LABEL_6:
      v7 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 24));
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741822 && !v3 )
        return v7;
      return (unsigned int)v3;
    }
  }
  if ( *(_QWORD *)(a2 + 96) )
  {
    v9 = (_QWORD *)(a2 + 96);
    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    {
      v10 = 0;
      v11 = (HANDLE *)(a2 + 104);
      do
      {
        if ( *v11 )
        {
          v3 = ZwClose(*v11);
          if ( v3 < 0 )
            goto LABEL_5;
          *v11 = 0LL;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < 6 );
      v9 = (_QWORD *)(a2 + 96);
    }
    v3 = ZwClose(*(HANDLE *)(a2 + 96));
    if ( v3 >= 0 )
      *v9 = 0LL;
  }
LABEL_5:
  if ( v2 )
    goto LABEL_6;
  return (unsigned int)v3;
}
