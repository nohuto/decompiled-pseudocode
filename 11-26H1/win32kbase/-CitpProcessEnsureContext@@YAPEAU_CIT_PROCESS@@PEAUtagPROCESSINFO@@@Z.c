/*
 * XREFs of ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400D3E48 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D53F0 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1400D58C0 (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D5A60 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CitEnableKeyboardDelegation @ 0x1401B3410 (CitEnableKeyboardDelegation.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6028 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6FE8 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1401BE150 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x14014CD78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROCESS *result; // rax
  char *v3; // rax
  const char *v4; // rdx
  char *v5; // rdi

  result = (struct _CIT_PROCESS *)*((_QWORD *)a1 + 114);
  if ( !result )
    return 0LL;
  if ( result == (struct _CIT_PROCESS *)52976 )
  {
    v3 = (char *)Win32AllocPoolZInitImpl(256LL, 0x70uLL, 0x49637355u);
    *((_QWORD *)a1 + 114) = v3;
    v5 = v3;
    if ( v3 )
    {
      memset(v3, 0, 0x70uLL);
      *((_QWORD *)v5 + 1) = a1;
      CitpProcessGetProgramId(a1, (struct _CIT_PROGRAM_ID *)(v5 + 48));
      return (struct _CIT_PROCESS *)v5;
    }
    *((_QWORD *)a1 + 114) = 52976LL;
    CitpLogFailureWorker(-1073741670, v4, 0xA59u);
    return 0LL;
  }
  if ( result == (struct _CIT_PROCESS *)52977 )
    return 0LL;
  return result;
}
