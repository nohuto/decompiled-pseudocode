/*
 * XREFs of PopEtGetProcessImageInfo @ 0x14094E8C4
 * Callers:
 *     PopEtGetProcessAppId @ 0x14094E494 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1404BCEA0 (PsGetProcessSectionBaseAddress.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

__int64 __fastcall PopEtGetProcessImageInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 ProcessSectionBaseAddress; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rdi

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) == 0 )
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      v5 = v4;
      if ( v4 )
      {
        *(_DWORD *)a2 = RtlReadULongFromUser(v4 + 22);
        *(_DWORD *)(a2 + 4) = RtlReadULongFromUser(v5 + 2);
      }
    }
  }
  return 0LL;
}
