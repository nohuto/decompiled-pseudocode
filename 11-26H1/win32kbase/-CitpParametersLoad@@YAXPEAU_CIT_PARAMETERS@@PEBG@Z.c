/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x14016BC30
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x14016B920 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x14016BDD4 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x14016BE78 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x14016BEBC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, PCWSTR SourceString)
{
  NTSTATUS v4; // eax
  const char *v5; // rdx
  unsigned int v6; // eax
  void *v7; // rcx
  bool v8; // cf
  unsigned int v9; // eax
  void *v10; // rcx
  unsigned int v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 < 0 )
    {
      CitpLogFailureWorker(v4, v5, 0x643u);
    }
    else
    {
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1);
      if ( *(_DWORD *)a1 >= 4u )
      {
        if ( *(_DWORD *)a1 > 0x7FFFu )
          *(_DWORD *)a1 = 0x7FFF;
      }
      else
      {
        *(_DWORD *)a1 = 4;
      }
      v14 = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", &v14);
      v6 = v14;
      v7 = KeyHandle;
      v8 = v14 == 0;
      *((_DWORD *)a1 + 2) = 1;
      if ( v8 )
        v6 = 1;
      *((_DWORD *)a1 + 1) = 1000 * v6;
      CitpParameterGetInt32(v7, L"AggFlags", (unsigned int *)a1 + 2);
      v14 = 60;
      CitpParameterGetInt32(KeyHandle, L"AggPeriod", &v14);
      v9 = 1000 * v14;
      v10 = KeyHandle;
      v14 = 1;
      *((_DWORD *)a1 + 3) = v9;
      CitpParameterGetInt32(v10, L"AggBitPeriod", &v14);
      v11 = 1000 * v14;
      *((_DWORD *)a1 + 4) = 1000 * v14;
      if ( !v11 )
        *((_DWORD *)a1 + 4) = 1;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1);
}
