/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180038450
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180084ADC (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800E78B0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlPcToFileHeader @ 0x1800361E0 (RtlPcToFileHeader.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x1800CA7F0 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpGetActivationContextData @ 0x1800CAF50 (RtlpGetActivationContextData.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E2114 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E59E8 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x1801021C8 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180108C54 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1801133D4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x180113EA8 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rsi
  void *v10; // r14
  NTSTATUS LoadedDllByHandle; // ebx
  _ACTIVATION_CONTEXT *v12; // rax
  int v13; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // rax
  __int128 *v15; // r8
  __int64 v16; // rcx
  int v17; // r9d
  unsigned int *v18; // r11
  __int64 v19; // r10
  int InformationActivationContextBasicInformation; // eax
  int v22; // [rsp+44h] [rbp-74h] BYREF
  BOOL v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+58h] [rbp-60h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  __int128 v27; // [rsp+68h] [rbp-50h] BYREF
  __int128 v28; // [rsp+78h] [rbp-40h]

  v8 = ActivationContext;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v22 = 0;
  v10 = 0LL;
  v24 = 0LL;
  DWORD2(v28) = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    LoadedDllByHandle = -1073741585;
    goto LABEL_70;
  }
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
    LoadedDllByHandle = -1073741585;
    goto LABEL_70;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    LoadedDllByHandle = -1073741583;
    goto LABEL_70;
  }
  if ( !ActivationContextInformationLength )
  {
    if ( !ReturnLength )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
        "RtlQueryInformationActivationContext");
      LoadedDllByHandle = -1073741580;
      goto LABEL_69;
    }
LABEL_17:
    if ( (Flags & 7) != 0 )
    {
      if ( (Flags & 7) == 1 )
      {
        if ( ActivationContext )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - caller asked to use active activation context but passed %p\n",
            "RtlQueryInformationActivationContext",
            ActivationContext);
          LoadedDllByHandle = -1073741584;
          goto LABEL_69;
        }
        ActiveFrame = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
        if ( ActiveFrame )
          v8 = ActiveFrame->ActivationContext;
      }
      else
      {
        if ( (Flags & 7) != 2 )
        {
          if ( (Flags & 7) != 4 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
              "RtlQueryInformationActivationContext",
              Flags);
LABEL_22:
            LoadedDllByHandle = -1073741585;
            goto LABEL_69;
          }
          BaseOfImage = 0LL;
          if ( !ActivationContext )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
              "RtlQueryInformationActivationContext");
LABEL_25:
            LoadedDllByHandle = -1073741584;
            goto LABEL_69;
          }
          v12 = (_ACTIVATION_CONTEXT *)RtlPcToFileHeader(ActivationContext, &BaseOfImage);
          BaseOfImage = v12;
          if ( !v12 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
              "RtlQueryInformationActivationContext",
              v8);
            LoadedDllByHandle = -1073741515;
            goto LABEL_69;
          }
          v8 = v12;
        }
        if ( !v8 )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
            "RtlQueryInformationActivationContext");
          goto LABEL_25;
        }
        LoadedDllByHandle = LdrpFindLoadedDllByHandle(v8, &v24, &v22);
        if ( LoadedDllByHandle >= 0 && v22 < 5 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          LdrpDrainWorkQueue(0LL);
          v13 = LoadedDllByHandle;
          if ( *(_DWORD *)(*(_QWORD *)(v24 + 152) + 56LL) != 9 )
            v13 = -1073741515;
          LoadedDllByHandle = v13;
          LdrpDropLastInProgressCount();
        }
        if ( LoadedDllByHandle < 0 )
        {
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - Caller passed invalid hmodule (%p)\n",
            "RtlQueryInformationActivationContext",
            v8);
          goto LABEL_69;
        }
        v8 = *(PACTIVATION_CONTEXT *)(v24 + 136);
      }
    }
    v15 = &v27;
    if ( (Flags & 0x40000000) == 0 )
      v15 = 0LL;
    LoadedDllByHandle = RtlpGetActivationContextData(1LL, v8, v15, &v26);
    if ( LoadedDllByHandle >= 0 )
    {
      v19 = v26;
      if ( !v26 )
      {
        switch ( ActivationContextInformationClass )
        {
          case ActivationContextDetailedInformation:
          case AssemblyDetailedInformationInActivationContext:
          case FileInformationInAssemblyOfAssemblyInActivationContext:
          case RunlevelInformationInActivationContext:
          case CompatibilityInformationInActivationContext:
          case ActivationContextManifestResourceName:
            goto LABEL_22;
          default:
            break;
        }
      }
      switch ( ActivationContextInformationClass )
      {
        case ActivationContextBasicInformation:
          v23 = (Flags & 0x80000000) != 0;
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                           v23,
                                                           (_DWORD)v8,
                                                           v26,
                                                           v17,
                                                           (__int64)ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           (__int64)ReturnLength);
          goto LABEL_66;
        case ActivationContextDetailedInformation:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                           v26,
                                                           0x180000000uLL,
                                                           ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           ReturnLength);
          goto LABEL_66;
        case AssemblyDetailedInformationInActivationContext:
          if ( !v18 )
          {
            LoadedDllByHandle = -1073741811;
            goto LABEL_69;
          }
          InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                           v26,
                                                           *v18,
                                                           ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           ReturnLength);
          goto LABEL_66;
        case FileInformationInAssemblyOfAssemblyInActivationContext:
          if ( !v18 )
          {
            LoadedDllByHandle = -1073741811;
            goto LABEL_69;
          }
          InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                           v26,
                                                           (_DWORD)v18,
                                                           (_DWORD)ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           (__int64)ReturnLength);
LABEL_66:
          LoadedDllByHandle = InformationActivationContextBasicInformation;
          if ( InformationActivationContextBasicInformation >= 0 )
            goto LABEL_67;
          goto LABEL_69;
        case RunlevelInformationInActivationContext:
          if ( ActivationContextInformationLength >= 0xC )
          {
            *(_QWORD *)ActivationContextInformation = 0LL;
            *((_DWORD *)ActivationContextInformation + 2) = 0;
            LoadedDllByHandle = RtlpQueryRunLevel(v16, v19, ActivationContextInformation);
            if ( LoadedDllByHandle >= 0 )
            {
              if ( ReturnLength )
              {
                *ReturnLength = 12LL;
                LoadedDllByHandle = 0;
              }
              else
              {
LABEL_67:
                LoadedDllByHandle = 0;
              }
            }
          }
          else
          {
            LoadedDllByHandle = -1073741789;
            if ( ReturnLength )
              *ReturnLength = 12LL;
          }
          break;
        case CompatibilityInformationInActivationContext:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                           v26,
                                                           ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           ReturnLength);
          goto LABEL_66;
        case ActivationContextManifestResourceName:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                           v26,
                                                           ActivationContextInformation,
                                                           ActivationContextInformationLength,
                                                           ReturnLength);
          goto LABEL_66;
        default:
          DbgPrintEx(
            0x33u,
            0,
            "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
            "RtlQueryInformationActivationContext",
            ActivationContextInformationClass);
          LoadedDllByHandle = -1073741595;
          goto LABEL_69;
      }
    }
    goto LABEL_69;
  }
  if ( ActivationContextInformation )
    goto LABEL_17;
  DbgPrintEx(
    0x33u,
    0,
    "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
    "RtlQueryInformationActivationContext");
  LoadedDllByHandle = -1073741582;
LABEL_69:
  v10 = (void *)v24;
LABEL_70:
  if ( v10 )
    LdrpDereferenceModule(v10);
  return LoadedDllByHandle;
}
