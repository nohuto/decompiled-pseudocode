/*
 * XREFs of EtwpBuildProcessEvent @ 0x1408FBCAC
 * Callers:
 *     EtwpTraceProcessRundown @ 0x1409BC8DC (EtwpTraceProcessRundown.c)
 *     EtwpWriteProcessEvent @ 0x1409D04C4 (EtwpWriteProcessEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1409D3984 (EtwpQueryProcessOtherInfo.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        __int64 a1,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *PackageSize,
        PSTRING DestinationString,
        unsigned __int16 *a10,
        PVOID *a11)
{
  PSTRING v11; // r13
  PVOID *v14; // r12
  int v15; // eax
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  int *v18; // r15
  unsigned int v19; // ebp
  unsigned __int64 v20; // rax
  int v21; // ecx
  _QWORD *v22; // rsi
  void *v23; // rax
  ULONG_PTR *v24; // r15
  void *v25; // rdi
  NTSTATUS v26; // ebx
  __int64 *v27; // rdx
  int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rdi
  char v31; // di
  unsigned __int16 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ebp
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // ebp
  __int64 v40; // rcx
  unsigned int *result; // rax
  const UNICODE_STRING *v42; // rdx
  char *Buffer; // rdx
  char *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  bool v47; // zf
  int v48; // ecx
  __int16 v49; // ax
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v51; // [rsp+68h] [rbp+10h]
  char v52; // [rsp+70h] [rbp+18h]

  v52 = a3;
  v51 = a2;
  v11 = DestinationString;
  TokenInformation = 0LL;
  RtlInitAnsiString(DestinationString, 0LL);
  v14 = a11;
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 464);
  v15 = *(_DWORD *)(a1 + 720);
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 16) = PsGetSessionIdEx(a1);
  v18 = (int *)(a4 + 32);
  v19 = 4;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 1364);
  v20 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v20;
  if ( *(_QWORD *)(a1 + 784) && ((v49 = *(_WORD *)(a1 + 1772), v49 == 332) || v49 == 452) )
  {
    *v18 = 2;
    v21 = 6;
  }
  else
  {
    v21 = 4;
  }
  if ( (*(_BYTE *)(a1 + 1530) & 7) != 0 )
    *v18 = v21;
  v22 = a6;
  *a6 = a4;
  v22[1] = 36LL;
  v23 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v16, v17);
  v24 = PackageSize;
  v25 = v23;
  EtwpQueryTokenPackageInfo(v23, PackageSize);
  v26 = SeQueryInformationToken(v25, TokenUser, &TokenInformation);
  ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v25, 0x746C6644u);
  if ( v26 < 0 )
  {
    v28 = 4;
    TokenInformation = &EtwpNull;
    v27 = &EtwpNull;
  }
  else
  {
    v27 = (__int64 *)TokenInformation;
    *v14 = TokenInformation;
    v28 = 4 * *(unsigned __int8 *)(*v27 + 1) + 24;
  }
  v22[2] = v27;
  *((_DWORD *)v22 + 7) = 0;
  v29 = a1 + 824;
  v30 = -1LL;
  *((_DWORD *)v22 + 6) = v28;
  do
    ++v30;
  while ( *(_BYTE *)(v29 + v30) );
  if ( (_DWORD)v30 == 14 )
  {
    v42 = *(const UNICODE_STRING **)(a1 + 848);
    if ( v42 )
    {
      if ( v42->Length && RtlUnicodeStringToAnsiString(v11, v42, 1u) >= 0 )
      {
        Buffer = v11->Buffer;
        v29 = (__int64)&Buffer[v11->Length];
        v44 = (char *)v29;
        v45 = v29;
        while ( 1 )
        {
          v46 = v45;
          if ( v44 == Buffer )
            break;
          v29 = v45 - 1;
          v47 = *(_BYTE *)(v45 - 1) == 92;
          v44 = (char *)--v45;
          if ( v47 )
          {
            v29 = v46;
            break;
          }
        }
        LODWORD(v30) = LODWORD(v11->Buffer) - v29 + v11->Length;
      }
    }
  }
  *((_DWORD *)v22 + 10) = v30;
  v31 = v52;
  v22[4] = v29;
  *((_DWORD *)v22 + 11) = 0;
  v22[6] = &EtwpNull;
  v22[7] = 1LL;
  if ( v31 )
    EtwpQueryProcessOtherInfo(a1, a5);
  else
    *a5 = 0LL;
  v32 = a10;
  *a10 = 0;
  if ( *(_QWORD *)(a1 + 736) )
  {
    if ( v31 )
    {
      EtwpQueryProcessCommandLine(a1, v32);
      v48 = *v32;
      if ( (_WORD)v48 )
      {
        v19 = 5;
        v22[8] = *((_QWORD *)v32 + 1);
        *((_DWORD *)v22 + 18) = v48;
        *((_DWORD *)v22 + 19) = 0;
      }
    }
  }
  v33 = 2LL * v19;
  v34 = v19 + 1;
  v35 = v19 + 2;
  v34 *= 2LL;
  v22[v33] = &EtwpNull;
  v22[v33 + 1] = 2LL;
  v36 = *(_DWORD *)v24;
  v22[v34] = v24 + 3;
  LODWORD(v22[v34 + 1]) = v36;
  HIDWORD(v22[v34 + 1]) = 0;
  v37 = *((_DWORD *)v24 + 2);
  v38 = v35;
  v39 = v35 + 1;
  v38 *= 2LL;
  v22[v38] = v24 + 35;
  v22[v38 + 1] = v37;
  if ( v51 == 807 )
  {
    v40 = 2LL * v39++;
    v22[v40] = a1 + 1472;
    v22[v40 + 1] = 8LL;
  }
  result = a7;
  *a7 = v39;
  return result;
}
