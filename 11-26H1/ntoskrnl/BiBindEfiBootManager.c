/*
 * XREFs of BiBindEfiBootManager @ 0x1409A3C40
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409A4844 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BiQueryBootOptions @ 0x1409A2A60 (BiQueryBootOptions.c)
 *     BiQueryBootEntryOrder @ 0x1409A3410 (BiQueryBootEntryOrder.c)
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BiTranslateBootEntryId @ 0x1409A3F20 (BiTranslateBootEntryId.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409A5900 (BiSetFirmwareModified.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(HANDLE BcdStoreHandle, __int64 a2)
{
  char *Pool2; // r14
  __int64 v5; // rcx
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // ebx
  unsigned int *v10; // rsi
  int v11; // eax
  BCD_FLAGS v12; // r8d
  int v13; // ecx
  int v14; // ebx
  __int64 v15; // r12
  int v16; // eax
  unsigned int *v17; // r15
  ULONG v18; // esi
  int v19; // eax
  BCD_FLAGS v20; // r8d
  unsigned int *v21; // rsi
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  BCD_FLAGS v26; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-50h] BYREF
  ULONG v28; // [rsp+38h] [rbp-48h] BYREF
  ULONG v29; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v30[2]; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h] BYREF
  PVOID v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 Buffer; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF

  Pool2 = 0LL;
  v29 = 0;
  v28 = 0;
  Buffer = 0LL;
  P = 0LL;
  v32 = 0LL;
  BcdObjectHandle = 0LL;
  v34 = 0LL;
  BiLogMessage(1LL, L"BiBindEfiBootManager");
  if ( BcdOpenObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    v6 = 0LL;
    BcdObjectHandle = 0LL;
  }
  else
  {
    v6 = BcdObjectHandle;
  }
  v30[0] = 1;
  v30[1] = 269484033;
  LOBYTE(v5) = (unsigned __int8)BcdStoreHandle & 1;
  v7 = BiAcquireBcdSyncMutant(v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdCreateObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    goto LABEL_5;
  }
  v22 = BiCreateObject((__int64)BcdStoreHandle, (__int64)&GUID_FIRMWARE_BOOTMGR, v30, 0LL, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  v8 = v22;
  if ( v22 >= 0 && (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, 0LL) )
  {
    LOBYTE(v24) = 1;
    BiSetFirmwareModified(BcdStoreHandle, v24);
  }
  LOBYTE(v23) = (unsigned __int8)BcdStoreHandle & 1;
  BiReleaseBcdSyncMutant(v23);
  if ( v8 >= 0 )
  {
    v16 = BiQueryBootEntryOrder((ULONG **)&P, &v28);
    v17 = (unsigned int *)P;
    v8 = v16;
    if ( v16 >= 0 )
    {
      v18 = v28;
      if ( !v28 )
      {
LABEL_23:
        v19 = BiQueryBootOptions((_BOOT_OPTIONS **)&v32, &v29);
        v21 = (unsigned int *)v32;
        v8 = v19;
        if ( v19 >= 0 )
        {
          if ( *((_DWORD *)v32 + 2) == -1
            || (Buffer = *((unsigned int *)v32 + 2),
                v8 = BcdSetElementDataWithFlags(v6, 0x25000004u, v20, &Buffer, 8u),
                v8 >= 0) )
          {
            v25 = v21[4];
            if ( (_DWORD)v25 == -2
              || (int)BiTranslateBootEntryId(a2, v25, &v34) < 0
              || (v8 = BcdSetElementDataWithFlags(v6, 0x24000002u, v26, &v34, 0x10u), v8 >= 0) )
            {
              v8 = 0;
            }
          }
        }
        if ( v21 )
          ExFreePoolWithTag(v21, 0x4B444342u);
        goto LABEL_14;
      }
      v15 = v28;
      Pool2 = (char *)ExAllocatePool2(0x102uLL);
      if ( Pool2 )
      {
        v14 = 0;
        if ( v18 )
        {
          v10 = v17;
          do
          {
            v11 = BiTranslateBootEntryId(a2, *v10, &Pool2[16 * v14]);
            v13 = v14 + 1;
            ++v10;
            if ( v11 < 0 )
              v13 = v14;
            v14 = v13;
            --v15;
          }
          while ( v15 );
          if ( v13 )
          {
            v8 = BcdSetElementDataWithFlags(v6, 0x24000001u, v12, Pool2, 16 * v13);
            if ( v8 < 0 )
              goto LABEL_14;
          }
        }
        goto LABEL_23;
      }
      v8 = -1073741670;
    }
LABEL_14:
    if ( v17 )
      ExFreePoolWithTag(v17, 0x4B444342u);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
LABEL_5:
  if ( v6 )
  {
    if ( v8 >= 0 )
    {
      BcdCloseObject(v6);
      return (unsigned int)v8;
    }
    BcdDeleteObject(v6);
    goto LABEL_34;
  }
  if ( v8 < 0 )
LABEL_34:
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v8);
  return (unsigned int)v8;
}
