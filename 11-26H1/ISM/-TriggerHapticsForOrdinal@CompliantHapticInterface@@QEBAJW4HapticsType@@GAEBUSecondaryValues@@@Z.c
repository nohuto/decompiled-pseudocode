/*
 * XREFs of ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019EE5C
 * Callers:
 *     ?SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z @ 0x18018AB50 (-SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z.c)
 *     ?StopFeedback@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018B380 (-StopFeedback@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z @ 0x18018CD20 (-SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z.c)
 *     ?StopFeedback@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018CDC0 (-StopFeedback@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED5D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D90C (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-.c)
 */

__int64 __fastcall CompliantHapticInterface::TriggerHapticsForOrdinal(
        __int64 a1,
        DWORD a2,
        unsigned __int16 a3,
        __int64 a4)
{
  ULONG UsageValue; // r15d
  _QWORD *v7; // r10
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  ULONG ReportLength; // r12d
  CHAR *Report; // rbx
  NTSTATUS v13; // eax
  unsigned int LastError; // edi
  __int64 v15; // rdx
  __int64 *v16; // r9
  ULONG v17; // r8d
  ULONG v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  bool v23; // cf
  const struct std::nothrow_t *v24; // rdx
  void *v25; // rcx
  const struct std::nothrow_t *v26; // rdx
  const char *v27; // r9
  CHAR *v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v33; // [rsp+A0h] [rbp+40h] BYREF
  DWORD NumberOfBytesWritten; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int16 v35; // [rsp+B0h] [rbp+50h] BYREF

  v35 = a3;
  NumberOfBytesWritten = a2;
  UsageValue = a3;
  if ( *(_QWORD *)a1 == -1LL || !*(_QWORD *)a1 )
  {
    v9 = -2147483629;
    v10 = 542LL;
    goto LABEL_47;
  }
  std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Find_lower_bound<unsigned short>(
    (__int64 *)(a1 + 232),
    &v30,
    &v35);
  v8 = v31;
  if ( *(_BYTE *)(v31 + 25) || (unsigned __int16)UsageValue < *(_WORD *)(v31 + 28) || v31 == *v7 )
  {
    v9 = -2147024809;
    v10 = 546LL;
    goto LABEL_47;
  }
  if ( !*(_BYTE *)(a1 + 336) )
  {
    v9 = -2147024809;
    v10 = 551LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
      (const char *)v9);
    return v9;
  }
  if ( (*(_BYTE *)(v31 + 40) & 4) != 0 )
  {
    v9 = -2147024809;
    v10 = 557LL;
    goto LABEL_47;
  }
  ReportLength = *(unsigned __int16 *)(a1 + 22);
  if ( !*(_BYTE *)(a1 + 336) )
    std::_Throw_bad_optional_access();
  v29 = (CHAR *)operator new[](*(unsigned __int16 *)(a1 + 22), (const struct std::nothrow_t *)&std::nothrow);
  Report = v29;
  memset_0(v29, 0, ReportLength);
  *v29 = *(_BYTE *)(a1 + 250);
  v13 = HidP_SetUsageValue(
          HidP_Output,
          0xEu,
          *(_WORD *)(a1 + 254),
          *(_WORD *)(a1 + 304),
          UsageValue,
          *(PHIDP_PREPARSED_DATA *)(a1 + 8),
          Report,
          ReportLength);
  LastError = v13;
  if ( v13 < 0 )
  {
    v15 = 580LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
      (const char *)(unsigned int)v13);
LABEL_43:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v29, v24);
    return LastError;
  }
  v16 = **(__int64 ***)(a1 + 320);
  v33 = v16;
  while ( !*((_BYTE *)v16 + 25) )
  {
    v17 = 0;
    if ( (*(_BYTE *)(v8 + 40) & 8) != 0 )
      goto LABEL_37;
    v17 = *((_DWORD *)v16 + 19);
    switch ( *((_WORD *)v16 + 14) )
    {
      case '#':
        if ( *(float *)a4 == 0.0 )
        {
LABEL_33:
          v17 = 0;
          goto LABEL_37;
        }
        v22 = 1;
        v17 = (int)(float)((float)(int)v17 * *(float *)a4);
        v23 = v17 == 0;
        goto LABEL_35;
      case '$':
        v21 = *(_DWORD *)(a4 + 4);
        if ( !v21 )
          goto LABEL_33;
        v22 = v21 - 1;
        v23 = v22 < v17;
LABEL_35:
        if ( v23 )
          v17 = v22;
        goto LABEL_37;
      case '%':
        v20 = *(_DWORD *)(a4 + 8);
        if ( !v20 )
          goto LABEL_33;
        v18 = *(_DWORD *)(v8 + 36) + v20;
        goto LABEL_27;
    }
    if ( *((_WORD *)v16 + 14) != 40 )
      goto LABEL_38;
    v18 = *(_DWORD *)(a4 + 12);
    if ( v18 )
    {
      v19 = *((_DWORD *)v16 + 19);
      if ( v18 < v17 )
        v19 = *(_DWORD *)(a4 + 12);
      if ( *((_DWORD *)v16 + 18) > v19 )
      {
        v17 = *((_DWORD *)v16 + 18);
        goto LABEL_37;
      }
LABEL_27:
      if ( v18 < v17 )
        v17 = v18;
    }
LABEL_37:
    v13 = HidP_SetUsageValue(
            HidP_Output,
            0xEu,
            *(_WORD *)(a1 + 254),
            *((_WORD *)v16 + 14),
            v17,
            *(PHIDP_PREPARSED_DATA *)(a1 + 8),
            Report,
            ReportLength);
    LastError = v13;
    if ( v13 < 0 )
    {
      v15 = 633LL;
      goto LABEL_40;
    }
LABEL_38:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator++(&v33);
    v16 = v33;
  }
  v25 = *(void **)a1;
  NumberOfBytesWritten = 0;
  if ( !WriteFile(v25, Report, ReportLength, &NumberOfBytesWritten, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x285,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\compliantha"
                       "pticinterface.cpp",
                  v27);
    goto LABEL_43;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v29, v26);
  return 0LL;
}
