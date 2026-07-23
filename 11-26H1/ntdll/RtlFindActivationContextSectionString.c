/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18002C1A0
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x18002B440 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002C6C0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18005E054 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v6; // rcx
  int v7; // r12d
  _PEB *ProcessEnvironmentBlock; // rax
  NTSTATUS NextActivationContextSection; // ebx
  unsigned int v11; // r14d
  _DWORD *v12; // r15
  int UnicodeStringInSection; // eax
  int v14; // eax
  __int64 v15; // r13
  signed __int32 v16; // eax
  void (__fastcall *v17)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v18[4]; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-1Dh] BYREF
  _DWORD *v20; // [rsp+48h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-11h] BYREF
  int v22; // [rsp+54h] [rbp-Dh] BYREF
  __int64 v23; // [rsp+58h] [rbp-9h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+7h] BYREF
  ULONG v26; // [rsp+6Ch] [rbp+Bh]
  PGUID v27; // [rsp+70h] [rbp+Fh]
  ULONG v28; // [rsp+78h] [rbp+17h]
  __int64 v29; // [rsp+7Ch] [rbp+1Bh]
  int v30; // [rsp+84h] [rbp+23h]

  v6 = NtCurrentTeb();
  v7 = (int)StringToFind;
  v30 = 0;
  v20 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( ProcessEnvironmentBlock->ActivationContextData
    || ProcessEnvironmentBlock->SystemDefaultActivationContextData
    || v6->ActivationContextStackPointer->ActiveFrame )
  {
    v19 = 0;
    v22 = -1;
    v21 = 0;
    if ( !StringToFind || (Flags & 0xFFFFFFF8) != 0 )
      return -1073741811;
    if ( (Flags & 7) != 0 )
    {
      if ( !ReturnedData )
        return -1073741811;
    }
    else if ( !ReturnedData )
    {
      goto LABEL_7;
    }
    if ( ReturnedData->cbSize >= 0x40 )
    {
LABEL_7:
      if ( (Flags & 2) != 0
        && &ReturnedData->AssemblyMetadata > (ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *)((char *)ReturnedData
                                                                                           + ReturnedData->cbSize) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else if ( (Flags & 4) != 0
             && &ReturnedData[1] > (PACTCTX_SECTION_KEYED_DATA)((char *)ReturnedData + ReturnedData->cbSize) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else
      {
        v27 = ExtensionGuid;
        v28 = SectionId;
        v25 = 32;
        v26 = Flags;
        v29 = 0LL;
        v23 = 0LL;
        NextActivationContextSection = RtlpFindNextActivationContextSection(
                                         (__int64)&v25,
                                         (int)&v20,
                                         (__int64)&v19,
                                         &v23);
        if ( NextActivationContextSection >= 0 )
        {
          v15 = v23;
          while ( 1 )
          {
            v11 = v19;
            v12 = v20;
            if ( v19 < 0x2C || *v20 != 1682469715 )
            {
              DbgPrintEx(
                0x33u,
                0,
                "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
                v20,
                v19);
              return -1072365565;
            }
            UnicodeStringInSection = RtlpFindUnicodeStringInSection(
                                       (_DWORD)v20,
                                       v19,
                                       v7,
                                       (_DWORD)ReturnedData,
                                       (__int64)&v22,
                                       (__int64)&v21);
            NextActivationContextSection = UnicodeStringInSection;
            if ( UnicodeStringInSection >= 0 )
              break;
            if ( UnicodeStringInSection != -1072365560 )
              return NextActivationContextSection;
            v24 = 0LL;
            if ( v25 < 0x20 || (v26 & 0xFFFFFFF8) != 0 )
              return -1073741811;
            v14 = RtlpFindNextActivationContextSection((__int64)&v25, (int)&v20, (__int64)&v19, (__int64 *)&v24);
            NextActivationContextSection = v14;
            if ( v14 < 0 )
            {
              if ( v14 == -1072365567 )
                return -1072365560;
              return NextActivationContextSection;
            }
            v15 = (__int64)v24;
            if ( v24 && (((unsigned __int64)v24 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *v24 != 0x7FFFFFFF )
            {
              do
              {
                if ( *(_DWORD *)v15 == 0x7FFFFFFF )
                  break;
                v16 = *(_DWORD *)v15;
              }
              while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v15, v16 + 1, v16) );
            }
          }
          if ( ((v15 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
          {
            v17 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v15 + 32);
            if ( v17 )
            {
              if ( (*(_BYTE *)(v15 + 48) & 8) == 0 || (*(_BYTE *)(v15 + 80) & 8) == 0 )
              {
                v18[0] = 0;
                v17(3LL, v15, *(_QWORD *)(v15 + 24), *(_QWORD *)(v15 + 40), 0LL, v18);
                *(_DWORD *)(v15 + 48) |= 8u;
                if ( v18[0] )
                  *(_DWORD *)(v15 + 80) |= 8u;
              }
            }
          }
          if ( !ReturnedData )
            return 0;
          NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                           Flags,
                                           ReturnedData,
                                           v15,
                                           &v25,
                                           v12,
                                           v12[9],
                                           v12[10],
                                           v11);
          if ( NextActivationContextSection >= 0 )
            return 0;
        }
      }
      return NextActivationContextSection;
    }
    return -1073741811;
  }
  return -1072365567;
}
