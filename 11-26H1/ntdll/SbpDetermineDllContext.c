/*
 * XREFs of SbpDetermineDllContext @ 0x1800848E0
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180084ADC (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int MajorSubsystemVersion; // ebp
  unsigned int MinorSubsystemVersion; // r14d
  char *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  char *v11; // r9
  __int64 v12; // r10
  unsigned int i; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-248h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-240h]
  __int64 v19; // [rsp+30h] [rbp-238h]
  _BYTE v20[512]; // [rsp+40h] [rbp-228h] BYREF

  v2 = 0LL;
  v19 = 512LL;
  BaseAddress = v20;
  if ( !a2 || !ActivationContext )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, ActivationContext, 0LL, &OutHeaders);
  MajorSubsystemVersion = OutHeaders->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = OutHeaders->OptionalHeader.MinorSubsystemVersion;
  if ( MajorSubsystemVersion >= 0xA )
  {
    v7 = (char *)&unk_1801709B0;
    goto LABEL_5;
  }
  if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && BaseAddress )
  {
    MinorSubsystemVersion += MajorSubsystemVersion << 16;
    if ( *(_DWORD *)BaseAddress )
    {
      v11 = (char *)BaseAddress + 8;
      v12 = *(unsigned int *)BaseAddress;
      do
      {
        if ( *((_DWORD *)v11 + 4) == 1 )
        {
          for ( i = 0; i < 5; ++i )
          {
            v14 = 32LL * i;
            v15 = *(_QWORD *)v11 - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4);
            if ( *(_QWORD *)v11 == *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4) )
              v15 = *((_QWORD *)v11 + 1) - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 12);
            if ( !v15 )
            {
              v16 = (*(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 20) << 16)
                  + *(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 22);
              if ( v16 >= MinorSubsystemVersion )
                MinorSubsystemVersion = v16;
              break;
            }
          }
        }
        v11 += 32;
        --v12;
      }
      while ( v12 );
    }
    if ( BaseAddress != v20 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    MajorSubsystemVersion = HIWORD(MinorSubsystemVersion);
  }
  v9 = -1LL;
  v10 = &unk_180170946;
  while ( (unsigned __int16)MajorSubsystemVersion > *(v10 - 1) )
  {
LABEL_11:
    v9 = v2;
LABEL_12:
    ++v2;
    v10 += 16;
    if ( v2 >= 5 )
      goto LABEL_13;
  }
  if ( (_WORD)MajorSubsystemVersion == *(v10 - 1) )
  {
    if ( (unsigned __int16)MinorSubsystemVersion < *v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( (unsigned __int16)MajorSubsystemVersion >= *(v10 - 1) )
    goto LABEL_12;
LABEL_13:
  if ( v9 == -1 )
    v7 = (char *)&SbSupportedOsList;
  else
    v7 = (char *)&SbSupportedOsList + 32 * v9;
LABEL_5:
  result = 1LL;
  *a2 = v7;
  return result;
}
