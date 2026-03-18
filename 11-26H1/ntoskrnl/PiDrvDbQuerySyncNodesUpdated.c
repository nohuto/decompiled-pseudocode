/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0
 * Callers:
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     _PnpCtxRegSetValue @ 0x14090AB14 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x140917E70 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCreateTree @ 0x14091E1FC (_PnpCtxRegCreateTree.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v3; // r15
  unsigned int v5; // edi
  void *Pool2; // rsi
  int PersistedStateLocation; // eax
  int v8; // ebx
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h] BYREF
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF
  int v20; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  v5 = 520;
  v20 = 0;
  v14 = 0;
  v15 = 0;
  LODWORD(v19) = 0;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_28;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(L"DriverDatabaseUpdates", Pool2, v5, (__int64)&v19);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    if ( (unsigned int)v19 <= v5 )
    {
      v8 = -1073741595;
      goto LABEL_28;
    }
    v5 = v19;
  }
  if ( PersistedStateLocation >= 0 )
  {
    v8 = PnpCtxRegCreateTree(0LL, 0LL, Pool2, 0LL, 131103, 0LL, &Handle, 0LL);
    if ( v8 >= 0 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      PiPnpRtlCtx,
                      *(_QWORD *)(i + 24),
                      7,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v20,
                      (__int64)&Source1,
                      8,
                      (__int64)&v14,
                      0) >= 0
            && v20 == 16
            && v14 == 8 )
          {
            v11 = *(_QWORD *)(i + 24);
            LODWORD(v19) = 8;
            v8 = PnpCtxRegQueryValue(v10, Handle, v11, &v15, &Source2, &v19);
            if ( v8 < 0 || v15 != 3 || (_DWORD)v19 != 8 )
            {
              v8 = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              v8 = PnpCtxRegSetValue(v12, Handle, *(_QWORD *)(i + 24), 3LL, &Source1, 8);
              if ( v8 < 0 )
                goto LABEL_28;
            }
          }
          else
          {
            v8 = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
