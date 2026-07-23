/*
 * XREFs of KsepPatchDriverImportsTable @ 0x1407C0BE8
 * Callers:
 *     KsepApplyShimsToDriver @ 0x1407C091C (KsepApplyShimsToDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     VfIsVerificationEnabledForImage @ 0x1406442E0 (VfIsVerificationEnabledForImage.c)
 *     KsepPatchImportTableEntry @ 0x1407C0D84 (KsepPatchImportTableEntry.c)
 *     VfGetHookAddressForOriginal @ 0x140C2E3EC (VfGetHookAddressForOriginal.c)
 */

__int64 __fastcall KsepPatchDriverImportsTable(__int64 a1, __int64 a2)
{
  PVOID v4; // r13
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int i; // r12d
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // r9
  __int64 HookAddressForOriginal; // rax
  __int64 v12; // rbp
  ULONG v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  if ( a1 && a2 )
  {
    v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v13);
    if ( !v4 )
      return 3221225473LL;
    v6 = *(_QWORD *)(a2 + 48);
    if ( v6 )
    {
      for ( i = 0; ; v6 = *(_QWORD *)(a2 + 48) + 24LL * i )
      {
        if ( !v6 || *(_DWORD *)v6 == 4 )
          return 0LL;
        if ( *(_DWORD *)v6 <= 2u )
          break;
LABEL_26:
        ++i;
      }
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 )
      {
        v9 = 0;
        while ( 2 )
        {
          if ( !v8 || *(_DWORD *)v8 == 2 )
            goto LABEL_26;
          if ( !*(_QWORD *)(v8 + 16) )
            return 3221225485LL;
          v10 = *(_QWORD *)(v8 + 24);
          if ( !v10 || *(_DWORD *)v8 )
            return 3221225485LL;
          result = KsepPatchImportTableEntry(a1, (_DWORD)v4, v13, v10, *(_QWORD *)(v8 + 16));
          if ( (_DWORD)result == -1073741275 )
          {
            if ( !(unsigned int)VfIsVerifierEnabled() )
              goto LABEL_25;
            if ( !(unsigned int)VfIsVerificationEnabledForImage(a1) )
              goto LABEL_25;
            HookAddressForOriginal = VfGetHookAddressForOriginal(*(_QWORD *)(v8 + 8));
            v12 = HookAddressForOriginal;
            if ( !HookAddressForOriginal )
              goto LABEL_25;
            result = KsepPatchImportTableEntry(a1, (_DWORD)v4, v13, HookAddressForOriginal, *(_QWORD *)(v8 + 16));
            if ( (int)result >= 0 )
            {
              *(_QWORD *)(v8 + 24) = v12;
LABEL_25:
              v8 = *(_QWORD *)(v6 + 16) + 32LL * (unsigned int)++v9;
              continue;
            }
          }
          else if ( (int)result >= 0 )
          {
            goto LABEL_25;
          }
          break;
        }
        if ( (_DWORD)result != -1073741275 )
          return result;
        goto LABEL_25;
      }
    }
  }
  return 3221225485LL;
}
