/*
 * XREFs of IopCreateLegacyDeviceIds @ 0x1407B52F8
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r14
  wchar_t *v8; // rax
  unsigned int v9; // r15d
  wchar_t *Pool2; // rsi
  NTSTATUS v11; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && *(_QWORD *)(v4 + 48) )
  {
    v5 = -1LL;
    if ( a3 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( v6 > 18 || v6 < -1 )
        v6 = 18;
    }
    else
    {
      v6 = 0;
    }
    v7 = v6;
    v8 = off_14000C198[v6];
    do
      ++v5;
    while ( v8[v5] );
    v9 = 2 * (v5 + *a2) + 42;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v11 = RtlStringCchPrintfExW(
              Pool2,
              (unsigned __int64)v9 >> 1,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"%ws%ws\\%wZ",
              L"DETECTED",
              off_14000C198[v7],
              a2);
      if ( v11 >= 0 )
      {
        v11 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
        if ( v11 >= 0 )
          v11 = CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(v4 + 48), 0, 3, 7, (__int64)Pool2, v9, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
