/*
 * XREFs of ACPIGetProcessorIDWide @ 0x14004C994
 * Callers:
 *     ACPIGetConvertToDeviceIDWide @ 0x14004B568 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004CE50 (ACPIGetConvertToHardwareIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfExA @ 0x14004AEC8 (RtlStringCchPrintfExA.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  size_t v6; // rbx
  void *v8; // rdi
  char *v9; // r14
  char *v10; // r13
  char *v11; // rax
  unsigned int v12; // ebx
  char *v13; // rsi
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // esi
  size_t v21; // rax
  void *Pool2; // rax
  __int64 i; // rcx
  char v24; // dl
  __int64 v25; // rcx
  unsigned __int64 v26; // r12
  char *v27; // r15
  size_t v28; // rdx
  char *v29; // rcx
  size_t v30; // rdx
  char *v31; // rcx
  char v33[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-3Ch] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-30h] BYREF
  char *v37; // [rsp+58h] [rbp-28h]
  char **v38; // [rsp+60h] [rbp-20h]
  _DWORD *v39; // [rsp+68h] [rbp-18h]
  char v40[8]; // [rsp+70h] [rbp-10h] BYREF

  v6 = (unsigned __int16)AcpiProcessorString;
  v38 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v39 = a6;
  v10 = 0LL;
  strcpy(v40, "ACPI\\");
  *(_WORD *)v33 = 42;
  ReturnLength = 0;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  v37 = 0LL;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  if ( (a4 & 0x40) == 0 )
  {
    v21 = (unsigned __int16)AcpiProcessorString;
    v20 = a4 & 0x20;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_32;
    if ( ZwQuerySystemInformation(SystemProcessorBrandString, 0LL, 0, &ReturnLength) == -1073741820 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, ReturnLength, 1399874369LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        if ( ZwQuerySystemInformation(SystemProcessorBrandString, Pool2, ReturnLength, &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v8, 0x53706341u);
          v8 = 0LL;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < ReturnLength; i = (unsigned int)(i + 1) )
          {
            v24 = *((_BYTE *)v8 + i);
            if ( !v24 )
              break;
            if ( (unsigned __int8)(v24 - 32) > 0x5Fu || v24 == 44 )
              *((_BYTE *)v8 + i) = 32;
          }
        }
      }
    }
    v25 = -1LL;
    do
      ++v25;
    while ( v40[v25] );
    v6 += (unsigned int)v25;
    pcchRemaining = v6;
    v21 = v6;
    if ( !v8 )
    {
LABEL_32:
      v26 = 2 * v21;
      v27 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v21,
                      1399874369LL);
      if ( !v27 )
      {
        v12 = -1073741670;
        goto LABEL_43;
      }
      if ( v20 )
      {
        if ( v8 )
          RtlStringCchPrintfA(v27, v6, "%s%s - %s", v40, *((const char **)&AcpiProcessorString + 1), (const char *)v8);
        else
          RtlStringCchPrintfA(v27, v6, "%s%s", v40, *((_QWORD *)&AcpiProcessorString + 1));
      }
      else
      {
        if ( !(_DWORD)ppszDestEnd )
          goto LABEL_41;
        ppszDestEnd = v27;
        RtlStringCchPrintfExA(v27, v6, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v9);
        v28 = pcchRemaining - 1;
        v29 = ppszDestEnd + 1;
        *(v37 - 1) = 0;
        RtlStringCchPrintfExA(v29, v28, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v33, v9);
        v30 = pcchRemaining - 1;
        v31 = ppszDestEnd + 1;
        *(v10 - 1) = 0;
        RtlStringCchPrintfExA(v31, v30, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v40, v9);
        RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v33, v9);
      }
      ACPIAnsiStringToWideHelper(v27, v26);
LABEL_41:
      v12 = 0;
      *v38 = v27;
      if ( v39 )
        *v39 = v26;
LABEL_43:
      if ( !v9 )
        goto LABEL_45;
      goto LABEL_44;
    }
    v6 += ReturnLength + 3;
LABEL_31:
    v21 = v6;
    pcchRemaining = v6;
    goto LABEL_32;
  }
  v11 = (char *)ExAllocatePool2(64LL, (unsigned __int16)AcpiProcessorString, 1399874369LL);
  v9 = v11;
  if ( !v11 )
    return (unsigned int)-1073741670;
  RtlStringCchCopyNA(v11, v6, *((STRSAFE_PCNZCH *)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
  v13 = strstr(v9, "Model");
  v37 = v13;
  v14 = strstr(v9, "Family");
  v10 = v14;
  if ( v13 && v14 )
  {
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( v40[v16] );
    v17 = -1LL;
    do
      ++v17;
    while ( v33[v17] );
    v18 = (unsigned int)(3 * v17);
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    do
      ++v15;
    while ( v13[v15] );
    v6 = (unsigned int)(3 * v16) + v18 + 6 * v6 - (unsigned int)(2 * v15) - (unsigned int)(2 * v19) + 1;
    v20 = a4 & 0x20;
    goto LABEL_31;
  }
  v12 = -1073741823;
LABEL_44:
  ExFreePoolWithTag(v9, 0x53706341u);
LABEL_45:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53706341u);
  return v12;
}
