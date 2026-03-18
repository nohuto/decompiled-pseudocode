/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x14004CE50
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToHardwareID @ 0x140061164 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetProcessorIDWide @ 0x14004C994 (ACPIGetProcessorIDWide.c)
 *     ACPIAmliDoubleToName @ 0x1400519AC (ACPIAmliDoubleToName.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, int *a6)
{
  _BYTE *v6; // rdi
  char v7; // r15
  __int64 v10; // rax
  int v11; // ebx
  char *v12; // rbx
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebp
  int v17; // ebx
  char *Pool2; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  char *v24; // rax
  char *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0;
  v25 = 0LL;
  v26 = 0;
  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_11;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (v10 & 0x1000000000LL) == 0 )
  {
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 608);
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(v14 + v15) );
      v16 = v15 - 4;
      v17 = a4 & 0x8000000;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        (unsigned int)(v15 - 4),
                        1399874369LL);
      v6 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v7 = 1;
      RtlStringCchCopyNA(Pool2, v16, (STRSAFE_PCNZCH)(*(_QWORD *)(a1 + 608) + 5LL), v16 - 1);
      goto LABEL_25;
    }
LABEL_11:
    if ( (int)a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v17 = a4 & 0x8000000;
      v16 = 8;
      v22 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 8LL, 1399874369LL);
      v6 = (_BYTE *)v22;
      if ( !v22 )
        return (unsigned int)-1073741670;
      v7 = 1;
      ACPIAmliDoubleToName(v22, *(unsigned int *)(a3 + 16));
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v20 = *(_DWORD *)(a3 + 24);
      v6 = *(_BYTE **)(a3 + 32);
      if ( !v20 )
        return 3221225485LL;
      if ( *v6 == 42 )
      {
        ++v6;
        if ( v20 == 1 )
          return 3221225485LL;
      }
      v21 = -1LL;
      do
        ++v21;
      while ( v6[v21] );
      v16 = v21 + 1;
      v17 = a4 & 0x8000000;
    }
LABEL_25:
    v23 = 2 * v16 + 7;
    v13 = 2 * v23;
    v24 = (char *)ExAllocatePool2((-(__int64)(v17 != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 2 * v23, 1399874369LL);
    v12 = v24;
    if ( !v24 )
    {
      v11 = -1073741670;
LABEL_31:
      if ( v7 == 1 )
        ExFreePoolWithTag(v6, 0);
      return (unsigned int)v11;
    }
    RtlStringCchPrintfA(v24, v23, "ACPI\\%s", v6);
    RtlStringCchPrintfA(&v12[v16 + 5], v23 - (v16 + 5), "*%s", v6);
    ACPIAnsiStringToWideHelper(v12, 2 * v23);
LABEL_28:
    *a5 = v12;
    if ( a6 )
      *a6 = v13;
    v11 = 0;
    goto LABEL_31;
  }
  v11 = ACPIGetProcessorIDWide(a1, a2, a3, a4, &v25, &v26);
  if ( v11 >= 0 )
  {
    v12 = v25;
    v13 = v26;
    goto LABEL_28;
  }
  return (unsigned int)v11;
}
