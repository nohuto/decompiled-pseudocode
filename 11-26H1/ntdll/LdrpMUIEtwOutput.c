/*
 * XREFs of LdrpMUIEtwOutput @ 0x180112D28
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800E56D0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     _itow_s @ 0x180132A00 (_itow_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMUIEtwOutput(PVOID BaseAddress, __int64 a2, unsigned int a3, char a4)
{
  PVOID v4; // rax
  int ModuleInfoFromVirtualMemory; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  wchar_t *v11; // rax
  __int64 v12; // rcx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v15; // [rsp+50h] [rbp-B0h]
  PCWSTR Source[5]; // [rsp+58h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+100h] [rbp+0h] BYREF

  v4 = BaseAddress;
  v15 = BaseAddress;
  Source[0] = L"Type:";
  Source[1] = L" Name:";
  Source[2] = L" Language:";
  Source[3] = L" Item:";
  ModuleInfoFromVirtualMemory = 0;
  v9 = 2147353476LL;
  Destination = 0LL;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    v10 = 0;
    RtlAppendUnicodeToString(&Destination, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&Destination, Source[v10]);
      v11 = *(wchar_t **)(a2 + 8LL * v10);
      if ( (unsigned __int64)v11 < 0x10000 || v10 == 3 )
      {
        itow_s((int)v11, Buffer, 0x40uLL, 10);
        v11 = Buffer;
      }
      RtlAppendUnicodeToString(&Destination, v11);
      ++v10;
    }
    while ( v10 < a3 );
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll(&Destination.Length, *(unsigned __int8 *)v12);
    memset_thunk_772440563353939046(SourceString, 0, Destination.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&Destination, SourceString);
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&Destination.Length, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
