/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x14004B568
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x140054450 (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x14003AE80 (ACPIAmliDoubleToNameWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004C994 (ACPIGetProcessorIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // ebp
  unsigned __int64 v14; // r14
  char *v15; // rbx
  int v16; // eax
  _BYTE *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // esi
  char *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 0x1000000000LL) != 0 )
    return ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)a6);
  if ( (v8 & 0x800000000000LL) == 0 )
  {
LABEL_10:
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v13 = 26;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        26LL,
                        1399874369LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0xDuLL, "ACPI\\");
        ACPIAnsiStringToWideHelper(v15, 0xAuLL);
        ACPIAmliDoubleToNameWide((_WORD *)v15 + 5, *(_DWORD *)(a3 + 16), 0);
        goto LABEL_26;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v16 = *(_DWORD *)(a3 + 24);
      v17 = *(_BYTE **)(a3 + 32);
      if ( !v16 )
        return 3221225485LL;
      if ( *v17 == 42 )
      {
        ++v17;
        if ( v16 == 1 )
          return 3221225485LL;
      }
      v18 = -1LL;
      do
        ++v18;
      while ( v17[v18] );
      v19 = v18 + 6;
      v13 = 2 * (v18 + 6);
      v14 = v13;
      v15 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v13,
                      1399874369LL);
      if ( v15 )
      {
        RtlStringCchPrintfA(v15, v19, "ACPI\\%s", v17);
        goto LABEL_9;
      }
    }
    return 3221225626LL;
  }
  v10 = *(_QWORD *)(a1 + 608);
  v11 = -1LL;
  do
    ++v11;
  while ( *(_BYTE *)(v10 + v11) );
  v12 = v11 + 1;
  v13 = 2 * (v11 + 1);
  v14 = v13;
  v15 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
  if ( !v15 )
    return 3221225626LL;
  RtlStringCchPrintfA(v15, v12, "%s", *(_QWORD *)(a1 + 608));
LABEL_9:
  ACPIAnsiStringToWideHelper(v15, v14);
LABEL_26:
  *a5 = v15;
  if ( a6 )
    *a6 = v13;
  return 0LL;
}
