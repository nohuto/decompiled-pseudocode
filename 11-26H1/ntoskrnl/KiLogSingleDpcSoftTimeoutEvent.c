/*
 * XREFs of KiLogSingleDpcSoftTimeoutEvent @ 0x1405EBB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1406C8BA4 (EtwTraceSingleDpcSoftTimeout.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiLogSingleDpcSoftTimeoutEvent(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  unsigned __int64 v8; // rcx
  int v9; // ebp
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-138h] BYREF
  char v12; // [rsp+40h] [rbp-128h] BYREF

  v4 = *(_QWORD *)(a2 + 14544);
  DestinationString = 0LL;
  v8 = *(_QWORD *)(v4 + 64);
  v9 = *(_DWORD *)(v4 + 72);
  *(_DWORD *)(*(_QWORD *)(a2 + 14544) + 72LL) = 0;
  DestinationString.MaximumLength = 256;
  DestinationString.Buffer = (wchar_t *)&v12;
  if ( (int)RtlPcToFileName(v8, &DestinationString) < 0 )
    RtlInitUnicodeString(&DestinationString, L"unknown_module");
  return EtwTraceSingleDpcSoftTimeout(a3, a4, a2, v9, *(_DWORD *)(a2 + 14540), (__int64)&DestinationString);
}
