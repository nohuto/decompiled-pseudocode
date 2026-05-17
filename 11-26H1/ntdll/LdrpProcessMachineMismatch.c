/*
 * XREFs of LdrpProcessMachineMismatch @ 0x1800D2784
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     NtRaiseHardError @ 0x180161DF0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpProcessMachineMismatch(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rax
  int v4; // ecx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v3 = RtlImageDirectoryEntryToData(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8);
  if ( v3 && (v3[4] & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0;
  }
  else
  {
    v4 = 1073741838;
    if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
    {
      v6[0] = v1 + 72;
      v4 = NtRaiseHardError(1073741838LL, 1LL, 1LL, v6, 2, &v7);
      if ( v4 >= 0 )
      {
        if ( v7 == 3 )
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
