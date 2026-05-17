/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18004DED0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18006468C (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800E86A0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlPcToFileHeader @ 0x18004BC60 (RtlPcToFileHeader.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x1800CD080 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpGetActivationContextData @ 0x1800CD7E0 (RtlpGetActivationContextData.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E4260 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E6F88 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x180102E48 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1801092B4 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180113B3C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1801146AC (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        struct _ACTIVATION_CONTEXT *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  struct _ACTIVATION_CONTEXT *ActivationContext; // rsi
  __int64 v10; // r14
  int LoadedDllByHandle; // ebx
  PVOID v12; // rax
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

  ActivationContext = a2;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v22 = 0;
  v10 = 0LL;
  v24 = 0LL;
  DWORD2(v28) = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: %s() - Caller passed invalid flags (0x%08lx)\n", "RtlQueryInformationActivationContext", a1);
    LoadedDllByHandle = -1073741585;
    goto LABEL_70;
  }
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
    LoadedDllByHandle = -1073741585;
    goto LABEL_70;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    LoadedDllByHandle = -1073741583;
    goto LABEL_70;
  }
  if ( !a6 )
  {
    if ( !a7 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
        "RtlQueryInformationActivationContext");
      LoadedDllByHandle = -1073741580;
      goto LABEL_69;
    }
LABEL_17:
    if ( (a1 & 7) != 0 )
    {
      if ( (a1 & 7) == 1 )
      {
        if ( a2 )
        {
          DbgPrintEx(
            51,
            0,
            "SXS: %s() - caller asked to use active activation context but passed %p\n",
            "RtlQueryInformationActivationContext",
            a2);
          LoadedDllByHandle = -1073741584;
          goto LABEL_69;
        }
        ActiveFrame = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
        if ( ActiveFrame )
          ActivationContext = ActiveFrame->ActivationContext;
      }
      else
      {
        if ( (a1 & 7) != 2 )
        {
          if ( (a1 & 7) != 4 )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
              "RtlQueryInformationActivationContext",
              a1);
LABEL_22:
            LoadedDllByHandle = -1073741585;
            goto LABEL_69;
          }
          BaseOfImage = 0LL;
          if ( !a2 )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
              "RtlQueryInformationActivationContext");
LABEL_25:
            LoadedDllByHandle = -1073741584;
            goto LABEL_69;
          }
          v12 = RtlPcToFileHeader(a2, &BaseOfImage);
          BaseOfImage = v12;
          if ( !v12 )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
              "RtlQueryInformationActivationContext",
              ActivationContext);
            LoadedDllByHandle = -1073741515;
            goto LABEL_69;
          }
          ActivationContext = (struct _ACTIVATION_CONTEXT *)v12;
        }
        if ( !ActivationContext )
        {
          DbgPrintEx(
            51,
            0,
            "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
            "RtlQueryInformationActivationContext");
          goto LABEL_25;
        }
        LoadedDllByHandle = LdrpFindLoadedDllByHandle(ActivationContext, &v24, &v22);
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
            51,
            0,
            "SXS: %s() - Caller passed invalid hmodule (%p)\n",
            "RtlQueryInformationActivationContext",
            ActivationContext);
          goto LABEL_69;
        }
        ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v24 + 136);
      }
    }
    v15 = &v27;
    if ( (a1 & 0x40000000) == 0 )
      v15 = 0LL;
    LoadedDllByHandle = RtlpGetActivationContextData(1LL, ActivationContext, v15, &v26);
    if ( LoadedDllByHandle >= 0 )
    {
      v19 = v26;
      if ( !v26 )
      {
        switch ( a4 )
        {
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            goto LABEL_22;
          default:
            break;
        }
      }
      switch ( a4 )
      {
        case 1:
          v23 = a1 < 0;
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                           v23,
                                                           (_DWORD)ActivationContext,
                                                           v26,
                                                           v17,
                                                           a5,
                                                           a6,
                                                           (__int64)a7);
          goto LABEL_66;
        case 2:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                           v26,
                                                           0x180000000uLL,
                                                           a5,
                                                           a6,
                                                           a7);
          goto LABEL_66;
        case 3:
          if ( !v18 )
          {
            LoadedDllByHandle = -1073741811;
            goto LABEL_69;
          }
          InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                           v26,
                                                           *v18,
                                                           a5,
                                                           a6,
                                                           a7);
          goto LABEL_66;
        case 4:
          if ( !v18 )
          {
            LoadedDllByHandle = -1073741811;
            goto LABEL_69;
          }
          InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                           v26,
                                                           (_DWORD)v18,
                                                           a5,
                                                           a6,
                                                           (__int64)a7);
LABEL_66:
          LoadedDllByHandle = InformationActivationContextBasicInformation;
          if ( InformationActivationContextBasicInformation >= 0 )
            goto LABEL_67;
          goto LABEL_69;
        case 5:
          if ( a6 >= 0xC )
          {
            *(_QWORD *)a5 = 0LL;
            *(_DWORD *)(a5 + 8) = 0;
            LoadedDllByHandle = RtlpQueryRunLevel(v16, v19, a5);
            if ( LoadedDllByHandle >= 0 )
            {
              if ( a7 )
              {
                *a7 = 12LL;
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
            if ( a7 )
              *a7 = 12LL;
          }
          break;
        case 6:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                           v26,
                                                           a5,
                                                           a6,
                                                           a7);
          goto LABEL_66;
        case 7:
          InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                           v26,
                                                           a5,
                                                           a6,
                                                           a7);
          goto LABEL_66;
        default:
          DbgPrintEx(
            51,
            0,
            "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
            "RtlQueryInformationActivationContext",
            a4);
          LoadedDllByHandle = -1073741595;
          goto LABEL_69;
      }
    }
    goto LABEL_69;
  }
  if ( a5 )
    goto LABEL_17;
  DbgPrintEx(
    51,
    0,
    "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
    "RtlQueryInformationActivationContext");
  LoadedDllByHandle = -1073741582;
LABEL_69:
  v10 = v24;
LABEL_70:
  if ( v10 )
    LdrpDereferenceModule(v10);
  return (unsigned int)LoadedDllByHandle;
}
