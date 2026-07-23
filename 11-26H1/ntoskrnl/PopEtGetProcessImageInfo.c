/*
 * XREFs of PopEtGetProcessImageInfo @ 0x1409CA204
 * Callers:
 *     PopEtGetProcessAppId @ 0x1409C9DD4 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1404B6680 (PsGetProcessSectionBaseAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

__int64 __fastcall PopEtGetProcessImageInfo(__int64 a1, __int64 a2)
{
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v4; // rax
  PIMAGE_NT_HEADERS v5; // rdi

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) == 0 )
  {
    ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      v5 = v4;
      if ( v4 )
      {
        *(_DWORD *)a2 = RtlReadULongFromUser(&v4->OptionalHeader.CheckSum);
        *(_DWORD *)(a2 + 4) = RtlReadULongFromUser(&v5->FileHeader.TimeDateStamp);
      }
    }
  }
  return 0LL;
}
