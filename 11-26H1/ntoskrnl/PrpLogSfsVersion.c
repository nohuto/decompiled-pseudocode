/*
 * XREFs of PrpLogSfsVersion @ 0x1406E1EDC
 * Callers:
 *     SfsGetFwVersions @ 0x1406E1300 (SfsGetFwVersions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall PrpLogSfsVersion(__int64 a1, _DWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *v5; // rsi
  _DWORD *Data; // r14
  _DWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  _DWORD *v19; // rax
  UNICODE_STRING *v20; // rdx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int Flink_high; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Flink_high = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM\\SFS");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v5 = (_DWORD *)(a1 + 8);
    v4 = ZwSetValueKey(KeyHandle, &SfsStatusU, 0, 4u, (PVOID)(a1 + 8), 4u);
    if ( v4 >= 0 )
    {
      Data = (_DWORD *)(a1 + 12);
      v4 = ZwSetValueKey(KeyHandle, &SfsExtStatusU, 0, 4u, Data, 4u);
      if ( v4 >= 0 )
      {
        if ( *v5 || *Data )
        {
          Flink_high = HIDWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink);
          v4 = ZwSetValueKey(KeyHandle, &SfsLastAttemptU, 0, 4u, &Flink_high, 4u);
          if ( v4 < 0 )
            goto LABEL_56;
        }
        else
        {
          v4 = ZwDeleteValueKey(KeyHandle, &SfsLastAttemptU);
          if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741772 )
            goto LABEL_56;
        }
        v4 = ZwSetValueKey(KeyHandle, &SfsApiVersionU, 0, 4u, a2, 4u);
        if ( v4 < 0 )
          goto LABEL_56;
        v4 = ZwSetValueKey(KeyHandle, &SfsCurrentPatchLevelU, 0, 4u, a2 + 1, 4u);
        if ( v4 < 0 )
          goto LABEL_56;
        v4 = ZwSetValueKey(KeyHandle, &SfsSysPatchLevelU, 0, 4u, a2 + 2, 4u);
        if ( v4 < 0 )
          goto LABEL_56;
        v7 = a2 + 3;
        v4 = ZwSetValueKey(KeyHandle, &SfsFwCountU, 0, 4u, a2 + 3, 4u);
        if ( v4 < 0 )
          goto LABEL_56;
        v8 = 0LL;
        if ( !*v7 )
          goto LABEL_56;
        do
        {
          v9 = 3 * v8;
          v10 = a2[3 * v8 + 4];
          if ( v10 > 10 )
          {
            v21 = v10 - 256;
            if ( !v21 )
            {
              v19 = &a2[v9 + 5];
              v20 = &SocAgesaBlVersionU;
LABEL_54:
              v4 = ZwSetValueKey(KeyHandle, v20, 0, 4u, v19, 4u);
              if ( v4 < 0 )
                break;
              goto LABEL_55;
            }
            v22 = v21 - 1;
            if ( !v22 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SocAspVersionU;
              goto LABEL_54;
            }
            v23 = v22 - 1;
            if ( !v23 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SocPmfwVersionU;
              goto LABEL_54;
            }
            v24 = v23 - 1;
            if ( !v24 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)&SocTmpmVersionU;
              goto LABEL_54;
            }
            v25 = v24 - 2;
            if ( !v25 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)&SocMp5VersionU;
              goto LABEL_54;
            }
            v26 = v25 - 1;
            if ( !v26 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)&SocMpioVersionU;
              goto LABEL_54;
            }
            v27 = v26 - 210;
            if ( !v27 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SystemSfsUpdatePackageU;
              goto LABEL_54;
            }
            v28 = v27 - 1;
            if ( !v28 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SystemSfsDriverVersionU;
              goto LABEL_54;
            }
            if ( v28 == 5 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SystemSfsSubDriverVersionU;
              goto LABEL_54;
            }
          }
          else
          {
            if ( v10 == 10 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverSfsVersionU;
              goto LABEL_54;
            }
            v11 = v10 - 1;
            if ( !v11 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverSysVersionU;
              goto LABEL_54;
            }
            v12 = v11 - 1;
            if ( !v12 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverSocVersionU;
              goto LABEL_54;
            }
            v13 = v12 - 1;
            if ( !v13 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverHadVersionU;
              goto LABEL_54;
            }
            v14 = v13 - 1;
            if ( !v14 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverBootVersionU;
              goto LABEL_54;
            }
            v15 = v14 - 1;
            if ( !v15 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverIntVersionU;
              goto LABEL_54;
            }
            v16 = v15 - 1;
            if ( !v16 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverRasVersionU;
              goto LABEL_54;
            }
            v17 = v16 - 1;
            if ( !v17 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverSevVersionU;
              goto LABEL_54;
            }
            v18 = v17 - 1;
            if ( !v18 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverSpdmVersionU;
              goto LABEL_54;
            }
            if ( v18 == 1 )
            {
              v19 = &a2[v9 + 5];
              v20 = (UNICODE_STRING *)SfsDriverKeyMgrVersionU;
              goto LABEL_54;
            }
          }
LABEL_55:
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *v7 );
      }
    }
  }
LABEL_56:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
