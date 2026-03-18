/*
 * XREFs of BiBindEfiBootManager @ 0x1409D2C60
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409D3864 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BcdDeleteObject @ 0x140891108 (BcdDeleteObject.c)
 *     BiQueryBootOptions @ 0x1409D1A80 (BiQueryBootOptions.c)
 *     BiQueryBootEntryOrder @ 0x1409D2430 (BiQueryBootEntryOrder.c)
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     BiTranslateBootEntryId @ 0x1409D2F40 (BiTranslateBootEntryId.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409D472C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409D4920 (BiSetFirmwareModified.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  __int64 v5; // rcx
  void *v6; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned int *v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // ebx
  __int64 v15; // r12
  int v16; // eax
  unsigned int *v17; // r15
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  unsigned int *v21; // rsi
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  void *v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v30[2]; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h] BYREF
  PVOID v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF

  Pool2 = 0LL;
  v29 = 0;
  v28 = 0;
  v33 = 0LL;
  P = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v34 = 0LL;
  BiLogMessage(1LL, L"BiBindEfiBootManager");
  if ( (int)BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &v27) >= 0 )
  {
    BcdDeleteObject((__int64)v27);
    v6 = 0LL;
    v27 = 0LL;
  }
  else
  {
    v6 = v27;
  }
  v30[0] = 1;
  v30[1] = 269484033;
  LOBYTE(v5) = a1 & 1;
  v7 = BiAcquireBcdSyncMutant(v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdCreateObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    goto LABEL_5;
  }
  v22 = BiCreateObject(a1, (__int64)&GUID_FIRMWARE_BOOTMGR, v30, 0LL, &v27);
  v6 = v27;
  v8 = v22;
  if ( v22 >= 0 && (unsigned __int8)BiIsLinkedToFirmwareVariable(v27, 0LL) )
  {
    LOBYTE(v24) = 1;
    BiSetFirmwareModified(a1, v24);
  }
  LOBYTE(v23) = a1 & 1;
  BiReleaseBcdSyncMutant(v23);
  if ( v8 >= 0 )
  {
    v16 = BiQueryBootEntryOrder(&P, &v28);
    v17 = (unsigned int *)P;
    v8 = v16;
    if ( v16 >= 0 )
    {
      v18 = v28;
      if ( !v28 )
      {
LABEL_23:
        v19 = BiQueryBootOptions(&v32, &v29);
        v21 = (unsigned int *)v32;
        v8 = v19;
        if ( v19 >= 0 )
        {
          if ( *((_DWORD *)v32 + 2) == -1
            || (v33 = *((unsigned int *)v32 + 2), v8 = BcdSetElementDataWithFlags(v6, 620756996LL, v20, &v33, 8),
                                                  v8 >= 0) )
          {
            v25 = v21[4];
            if ( (_DWORD)v25 == -2
              || (int)BiTranslateBootEntryId(a2, v25, &v34) < 0
              || (v8 = BcdSetElementDataWithFlags(v6, 603979778LL, v26, &v34, 16), v8 >= 0) )
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
            v8 = BcdSetElementDataWithFlags(v6, 603979777LL, v12, Pool2, 16 * v13);
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
    BcdDeleteObject((__int64)v6);
    goto LABEL_34;
  }
  if ( v8 < 0 )
LABEL_34:
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v8);
  return (unsigned int)v8;
}
