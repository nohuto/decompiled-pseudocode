/*
 * XREFs of RaGetUnitPerfCounterIdString @ 0x140039668
 * Callers:
 *     RaUnitSendInstanceCounters @ 0x140039378 (RaUnitSendInstanceCounters.c)
 * Callees:
 *     RaTrimString @ 0x140039BB8 (RaTrimString.c)
 *     RtlStringCbPrintfExA @ 0x140039D18 (RtlStringCbPrintfExA.c)
 *     RtlUnicodeStringCatString @ 0x140058830 (RtlUnicodeStringCatString.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaGetUnitPerfCounterIdString(__int64 a1, struct _UNICODE_STRING *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  unsigned __int16 Length; // cx
  __int64 v6; // r14
  int i; // ebx
  int v8; // ebx
  __int64 v9; // r14
  const char *Pool2; // r8
  unsigned __int64 v11; // rax
  char *v12; // rcx
  char *v13; // rdx
  char v14; // r9
  char *v15; // rax
  int v16; // ebx
  __int16 v17; // di
  unsigned __int16 v18; // di
  __int64 v19; // r15
  char *v20; // r14
  __int64 v21; // r12
  __int64 v22; // rax
  void *v23; // r15
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  PVOID v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  const wchar_t *v30; // rdx
  PVOID v31; // rcx
  PVOID P[2]; // [rsp+58h] [rbp-39h] BYREF
  struct _STRING v33; // [rsp+68h] [rbp-29h] BYREF
  struct _STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  PVOID v35[2]; // [rsp+88h] [rbp-9h] BYREF
  struct _STRING v36; // [rsp+98h] [rbp+7h] BYREF
  struct _STRING v37; // [rsp+A8h] [rbp+17h] BYREF
  struct _STRING SourceString; // [rsp+B8h] [rbp+27h] BYREF

  v36 = 0LL;
  *(_OWORD *)P = 0LL;
  v37 = 0LL;
  *(_OWORD *)v35 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v33 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(a1 + 168));
  if ( DestinationString.Length )
  {
    v3 = 0;
    v4 = 0LL;
    while ( isspace(DestinationString.Buffer[v4]) )
    {
      Length = DestinationString.Length;
      ++v3;
      ++v4;
      if ( v3 >= DestinationString.Length )
        goto LABEL_5;
    }
    Length = DestinationString.Length;
LABEL_5:
    v6 = Length;
    for ( i = Length - 1; --v6 >= 0 && isspace(DestinationString.Buffer[v6]); --i )
      ;
    if ( v3 <= i )
    {
      v8 = i - v3;
      v9 = v8 + 2;
      Pool2 = (const char *)ExAllocatePool2(64LL, v9, 1229218130LL);
      if ( !Pool2 )
      {
        v16 = -1073741670;
        goto LABEL_36;
      }
      if ( (unsigned __int64)(v9 - 1) <= 0x7FFFFFFE )
      {
        v11 = v8 + 1LL;
        if ( v11 > 0x7FFFFFFE )
        {
          *Pool2 = 0;
        }
        else
        {
          v12 = (char *)Pool2;
          v13 = (char *)(&DestinationString.Buffer[v3] - (char *)Pool2);
          do
          {
            if ( !v11 )
              break;
            v14 = v12[(_QWORD)v13];
            if ( !v14 )
              break;
            *v12 = v14;
            --v11;
            ++v12;
            --v9;
          }
          while ( v9 );
          v15 = v12 - 1;
          if ( v9 )
            v15 = v12;
          *v15 = 0;
        }
      }
      RtlInitAnsiString(&v33, Pool2);
    }
  }
  RtlInitAnsiString(&v36, (PCSZ)(a1 + 177));
  v16 = RaTrimString(1229218130LL, &v36, P);
  if ( v16 < 0 )
    goto LABEL_36;
  if ( !v33.Buffer && !P[1] )
  {
    v16 = -1073741811;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 3432) == 17 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5144LL);
    if ( v28 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *(_WORD *)(v28 + 2 * v29) );
    }
    else
    {
      LOWORD(v29) = 0;
    }
    v18 = v29 + LOWORD(P[0]) + 4;
  }
  else
  {
    RtlInitAnsiString(&v37, (PCSZ)(a1 + 242));
    v16 = RaTrimString(1229218130LL, &v37, v35);
    if ( v16 < 0 )
      goto LABEL_36;
    if ( LOWORD(v35[0]) )
      v17 = LOWORD(v35[0]) + v33.Length + 5;
    else
      v17 = v33.Length + 32;
    v18 = LOWORD(P[0]) + v17;
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = (char *)ExAllocatePool2(64LL, v18, 1229218130LL);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    v22 = ExAllocatePool2(64LL, 2LL * v18, 1229218130LL);
    v23 = (void *)v22;
    if ( v22 || !v21 )
    {
      if ( v22 )
      {
        if ( *(_DWORD *)(a1 + 3432) == 17 )
        {
          v24 = RtlStringCbPrintfExA(v20, v18, 0LL, 0LL, 0, "%s : ", (const char *)P[1]);
        }
        else if ( LOWORD(v35[0]) )
        {
          if ( v33.Length )
          {
            v27 = &unk_14015304C;
            if ( P[1] )
              v27 = P[1];
            v24 = RtlStringCbPrintfExA(v20, v18, 0LL, 0LL, 0, "%s %s : %s", v33.Buffer, v27, v35[1]);
          }
          else
          {
            v24 = RtlStringCbPrintfExA(v20, v18, 0LL, 0LL, 0, "%s : %s", P[1], v35[1]);
          }
        }
        else if ( v33.Length )
        {
          v31 = &unk_14015304C;
          if ( P[1] )
            v31 = P[1];
          v24 = RtlStringCbPrintfExA(
                  v20,
                  v18,
                  0LL,
                  0LL,
                  0,
                  "%s %s : LUN %d",
                  v33.Buffer,
                  v31,
                  *(unsigned __int8 *)(a1 + 106));
        }
        else
        {
          v24 = RtlStringCbPrintfExA(v20, v18, 0LL, 0LL, 0, "%s : LUN %d", P[1], *(unsigned __int8 *)(a1 + 106));
        }
        v16 = v24;
        if ( v24 < 0 )
        {
          ExFreePoolWithTag(v23, 0x49446152u);
        }
        else
        {
          a2->Buffer = (wchar_t *)v23;
          a2->Length = 0;
          a2->MaximumLength = 2 * v18;
          RtlInitAnsiString(&SourceString, v20);
          v25 = RtlAnsiStringToUnicodeString(a2, &SourceString, 0);
          v16 = v25;
          if ( *(_DWORD *)(a1 + 3432) == 17 && v25 >= 0 )
          {
            v30 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 5144LL);
            if ( v30 )
              RtlUnicodeStringCatString(a2, v30);
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      RaidLogAllocationFailure(v21, 64, 2 * v18, 1229218130, 0x80000000);
    }
    v16 = -1073741801;
LABEL_35:
    ExFreePoolWithTag(v20, 0x49446152u);
    goto LABEL_36;
  }
  if ( v19 )
    RaidLogAllocationFailure(v19, 64, v18, 1229218130, 0x80000000);
  v16 = -1073741801;
LABEL_36:
  if ( v35[1] )
    ExFreePoolWithTag(v35[1], 0x49446152u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x49446152u);
  if ( v33.Buffer )
    ExFreePoolWithTag(v33.Buffer, 0x49446152u);
  return (unsigned int)v16;
}
