/*
 * XREFs of ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x180193308
 * Callers:
 *     ?SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z @ 0x18018C358 (-SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z.c)
 *     ?StopFeedbackImpl@PenHapticDevice@@QEAAJXZ @ 0x18018C4CC (-StopFeedbackImpl@PenHapticDevice@@QEAAJXZ.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticInterface@@QEAAJGMII@Z @ 0x180193274 (-SendHapticFeedbackForPlayCount@PenHapticInterface@@QEAAJGMII@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18004BB30 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_compare@GU-.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x1801922C8 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?GetHapticsChannel@PenHapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z @ 0x180192BC8 (-GetHapticsChannel@PenHapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x18019363C (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall PenHapticInterface::SendHapticFeedbackInternal(
        PenHapticInterface *this,
        unsigned __int16 a2,
        float a3,
        ULONG a4,
        unsigned int a5,
        ULONG a6)
{
  ULONG v8; // r15d
  ULONG v10; // r14d
  enum _HIDP_REPORT_TYPE v11; // edx
  __int64 v12; // rcx
  __int64 appended; // rax
  enum _HIDP_REPORT_TYPE v14; // edx
  __int64 v15; // rax
  void *v16; // rax
  CHAR *Report; // rbx
  unsigned int v18; // ebx
  const struct std::nothrow_t *v19; // rdx
  NTSTATUS v20; // eax
  unsigned int LastError; // eax
  DWORD v22; // r8d
  void *v23; // rcx
  const struct std::nothrow_t *v24; // rdx
  const char *v25; // r9
  unsigned __int8 v27[8]; // [rsp+48h] [rbp-59h] BYREF
  DWORD NumberOfBytesWritten; // [rsp+50h] [rbp-51h] BYREF
  void *v29[2]; // [rsp+58h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v30; // [rsp+68h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]
  unsigned __int16 v32; // [rsp+100h] [rbp+5Fh] BYREF

  v32 = a2;
  v8 = 0;
  v10 = 0;
  memset_0(&v30, 0, sizeof(v30));
  *(_WORD *)v27 = a2;
  if ( (unsigned __int16)(a2 - 1) > 1u )
  {
    appended = std::_Fnv1a_append_bytes(v12, v27, 2uLL);
    if ( !std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Find_last<unsigned short>(
            (_QWORD *)this + 3,
            (__int64 **)v29,
            v27,
            appended)[1] )
      return 2147942487LL;
  }
  if ( !PenHapticInterface::GetHapticsChannel(this, v11, 0x21u, &v30) )
    return 2147942487LL;
  if ( PenHapticInterface::GetHapticsChannel(this, v14, 0x23u, &v30) )
    v10 = (int)(float)((float)(v30.LogicalMax - v30.LogicalMin) * a3);
  if ( a4 )
  {
    v15 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
            (_QWORD *)this + 3,
            (__int64)v29,
            (unsigned __int8 *)&v32);
    v8 = *(_DWORD *)(*(_QWORD *)v15 + 24LL) + a5;
  }
  v16 = operator new[](*((unsigned __int16 *)this + 83), (const struct std::nothrow_t *)&std::nothrow);
  v29[0] = v16;
  Report = (CHAR *)v16;
  if ( !v16 )
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
      (const char *)0x8007000ELL);
LABEL_15:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v29, v19);
    return v18;
  }
  memset_0(v16, 0, *((unsigned __int16 *)this + 83));
  *Report = v30.ReportID;
  v20 = HidP_SetUsageValue(
          HidP_Output,
          0xEu,
          *((_WORD *)this + 8),
          0x21u,
          v32,
          *((PHIDP_PREPARSED_DATA *)this + 19),
          Report,
          *((unsigned __int16 *)this + 83));
  if ( v20 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x138,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penh"
                           "apticinterface.cpp",
                  (const char *)(unsigned int)v20);
LABEL_14:
    v18 = LastError;
    goto LABEL_15;
  }
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x24u,
    a4,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x25u,
    v8,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x23u,
    v10,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x28u,
    a6,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  InputTraceLogging::Haptics::WriteOutput();
  v22 = *((unsigned __int16 *)this + 83);
  v23 = (void *)*((_QWORD *)this + 32);
  NumberOfBytesWritten = 0;
  if ( !WriteFile(v23, Report, v22, &NumberOfBytesWritten, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x166,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
                  v25);
    goto LABEL_14;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v29, v24);
  return 0LL;
}
