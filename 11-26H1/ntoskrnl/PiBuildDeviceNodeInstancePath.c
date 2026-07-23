/*
 * XREFs of PiBuildDeviceNodeInstancePath @ 0x1409DAF9C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     PnpFreeDeviceInstancePath @ 0x1409DB0F4 (PnpFreeDeviceInstancePath.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiBuildDeviceNodeInstancePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r12
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  NTSTATUS v14; // ebx
  const wchar_t *v16; // rcx

  if ( a2 && a3 && a4 )
  {
    if ( *(_QWORD *)(a1 + 48) && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 42) )
      PnpCleanupDeviceRegistryValues(a1 + 40);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a4 + 2 * v9) );
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a3 + 2 * v10) );
    do
      ++v8;
    while ( *(_WORD *)(a2 + 2 * v8) );
    v11 = (unsigned int)(2 * (v9 + v10 + v8) + 6);
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      v14 = RtlStringCbPrintfW(Pool2, v11, L"%s\\%s\\%s", a2, a3, a4);
      if ( v14 < 0 || (v16 = *(const wchar_t **)(a1 + 48)) != 0LL && !wcsicmp(v16, v13) )
      {
        ExFreePoolWithTag(v13, 0x49706E50u);
      }
      else
      {
        PnpFreeDeviceInstancePath(a1);
        RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v13);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v14;
}
