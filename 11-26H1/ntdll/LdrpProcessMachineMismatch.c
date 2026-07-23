/*
 * XREFs of LdrpProcessMachineMismatch @ 0x1800D2654
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     NtRaiseHardError @ 0x180161CF0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpProcessMachineMismatch(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rax
  NTSTATUS v4; // ecx
  unsigned __int64 Parameters[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG Response; // [rsp+50h] [rbp+8h] BYREF
  ULONG Size; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  Response = 0;
  v3 = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 0xEu, &Size);
  if ( v3 && (v3[16] & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0;
  }
  else
  {
    v4 = 1073741838;
    if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
    {
      Parameters[0] = v1 + 72;
      v4 = NtRaiseHardError(1073741838, 1u, 1u, Parameters, 2u, &Response);
      if ( v4 >= 0 )
      {
        if ( Response == 3 )
        {
          if ( LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
          return (unsigned int)-1073741701;
        }
        else
        {
          *(_DWORD *)(v1 + 104) &= ~4u;
        }
      }
    }
  }
  return (unsigned int)v4;
}
