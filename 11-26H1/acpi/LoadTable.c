/*
 * XREFs of LoadTable @ 0x140070D90
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall LoadTable(char *Entry, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned int v6; // ebx
  __int64 v7; // rbx
  char *Pool2; // r12
  unsigned int v9; // r13d
  const void *v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // eax
  const void *v13; // rdx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  char *v17; // r13
  int v18; // eax
  int v19; // eax
  int DDB; // edi
  unsigned int v21; // ecx
  int NameSpaceObject; // eax
  char *v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  const void *v27; // [rsp+30h] [rbp-20h]
  const void *v28; // [rsp+38h] [rbp-18h]
  const void *v29; // [rsp+40h] [rbp-10h]
  unsigned int v30; // [rsp+98h] [rbp+48h] BYREF
  const void *v31; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v32 = 0LL;
  v6 = ValidateArgTypes((__int64)Entry, v3, 0, "ZZZ");
  if ( v6 )
    return v6;
  v7 = *(_QWORD *)(a2 + 80);
  v30 = 0;
  Pool2 = 0LL;
  v9 = *(_DWORD *)(v7 + 64) - 1;
  v10 = *(const void **)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 104) - 1;
  v28 = *(const void **)(v7 + 72);
  v27 = *(const void **)(v7 + 112);
  v12 = *(_DWORD *)(v7 + 24) - 1;
  v29 = v10;
  v31 = (const void *)v12;
  if ( v12 > 4 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    v13 = v31;
    v14 = 100;
LABEL_4:
    PrintDebugMessage(v14, v13, 0LL, 0LL, 0LL);
    return v6;
  }
  LODWORD(v31) = 0;
  memmove(&v31, v10, v12);
  if ( v9 > 6 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    v13 = (const void *)v9;
    v14 = 96;
    goto LABEL_4;
  }
  if ( v11 > 8 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    v13 = (const void *)v11;
LABEL_9:
    v14 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v17 = "\\";
LABEL_15:
    if ( *(_DWORD *)(a2 + 76) >= 5u )
    {
      v18 = ValidateArgTypes((__int64)Entry, v7 + 160, 0, "Z");
      v6 = v18;
      if ( v18 )
      {
        LogError(v18);
        AcpiDiagTraceAmlError((__int64)Entry, v6);
        v16 = 98;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(a2 + 76) < 6u )
      {
        v6 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
        v13 = 0LL;
        goto LABEL_9;
      }
    }
    if ( !ghMapTable )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(0x5Eu, 0LL, 0LL, 0LL, 0LL);
      DDB = -1072431098;
      goto LABEL_39;
    }
    v19 = ghMapTable((unsigned int)v31, v28, v27, 0LL, &v30);
    DDB = v19;
    if ( v19 != -1073741789 )
    {
      if ( v19 == -1073741275 )
        DDB = -1073741772;
      goto LABEL_39;
    }
    Pool2 = (char *)ExAllocatePool2(64LL, v30, 1114402113LL);
    if ( !Pool2 )
    {
      LogError(DDB + 119);
      AcpiDiagTraceAmlError((__int64)Entry, DDB + 119);
      v21 = 87;
LABEL_25:
      PrintDebugMessage(v21, 0LL, 0LL, 0LL, 0LL);
LABEL_39:
      LogError(DDB);
      AcpiDiagTraceAmlError((__int64)Entry, DDB);
      PrintDebugMessage(0x59u, v29, v28, v27, 0LL);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      goto LABEL_40;
    }
    if ( ghMapTable )
    {
      DDB = ghMapTable((unsigned int)v31, v28, v27, Pool2, &v30);
      if ( !DDB )
      {
        NameSpaceObject = GetNameSpaceObject(v17, *((_QWORD *)Entry + 10), &v32, 0x80000000);
        DDB = NameSpaceObject;
        if ( NameSpaceObject )
        {
          LogError(NameSpaceObject);
          AcpiDiagTraceAmlError((__int64)Entry, DDB);
          v23 = v17;
          v24 = 93;
        }
        else
        {
          v25 = PushPost((__int64)Entry, (__int64)ProcessLoadTable, (__int64)Pool2, a2, *(_QWORD *)(a2 + 88));
          DDB = v25;
          if ( !v25 )
          {
            DDB = LoadDDB(Entry, Pool2, v32, *(_QWORD *)(a2 + 88));
            DereferenceObjectEx(v32);
LABEL_40:
            v6 = DDB;
            if ( DDB && Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_43;
          }
          LogError(v25);
          AcpiDiagTraceAmlError((__int64)Entry, DDB);
          v23 = 0LL;
          v24 = 90;
        }
        PrintDebugMessage(v24, v23, 0LL, 0LL, 0LL);
        v4 = v32;
        goto LABEL_40;
      }
    }
    else
    {
      DDB = -1072431098;
    }
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    v21 = 91;
    goto LABEL_25;
  }
  v15 = ValidateArgTypes((__int64)Entry, v7 + 120, 0, "Z");
  v6 = v15;
  if ( !v15 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    v17 = *(char **)(v7 + 152);
    goto LABEL_15;
  }
  LogError(v15);
  AcpiDiagTraceAmlError((__int64)Entry, v6);
  v16 = 99;
LABEL_18:
  PrintDebugMessage(v16, 0LL, 0LL, 0LL, 0LL);
LABEL_43:
  if ( v4 )
    DereferenceObjectEx(v4);
  return v6;
}
