/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x140878288
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14087450C (MiApplyHotPatchToDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiInjectThreadForHotPatch @ 0x140876A14 (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     MiFillLogProcessInfo @ 0x14046E5B0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogHotPatchOperationStatus(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        int a6)
{
  UNICODE_STRING *p_DestinationString_8; // rdi
  _KPROCESS *v9; // r14
  void *v10; // r15
  __int64 v11; // r8
  _KPROCESS *v12; // r13
  void *v13; // r15
  __int64 v14; // r8
  unsigned __int8 *v15; // rdx
  __int64 v16; // rcx
  int v17; // r11d
  void *FirstArgument; // r15
  struct _KPROCESS *v19; // r9
  __int64 v20; // r10
  int v21; // r11d
  bool v22; // zf
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+30h] [rbp-D8h]
  ULONG v25; // [rsp+38h] [rbp-D0h]
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  const CHAR *v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Process; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 DestinationString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  unsigned int *v38; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-38h]
  unsigned int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *Buffer; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h] BYREF
  __int64 *p_Process; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int64 *p_DestinationString; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]

  LODWORD(v29) = a2;
  v28 = 0LL;
  p_DestinationString_8 = a4;
  DestinationString_8 = 0LL;
  if ( !a4 )
  {
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    p_DestinationString_8 = &DestinationString_8;
  }
  if ( a6 )
  {
    if ( a6 == 1 || a6 == 6 )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
        || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        return;
      }
      v43 = 2LL;
      v15 = (unsigned __int8 *)&byte_14005A05F;
      v22 = (_DWORD)v14 == 6;
    }
    else
    {
      if ( a6 != 2 && a6 != 5 )
      {
        if ( a6 != 3 )
        {
          if ( a6 == 4 )
          {
            if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
              || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
            {
              return;
            }
            v15 = (unsigned __int8 *)byte_140059EB3;
            LODWORD(v30) = a5;
            v16 = v14;
            v37 = 4LL;
            p_ProcessId = &v30;
            v38 = &ProcessId;
            v40 = (unsigned int *)&v28;
            v42 = &v45;
            Buffer = (__int64 *)p_DestinationString_8->Buffer;
            LODWORD(v45) = p_DestinationString_8->Length;
            Process = 2164260864LL;
            v46 = &Process;
            v25 = 8;
            ProcessId = a2;
            v39 = 4LL;
            LODWORD(v28) = a3;
            v41 = 4LL;
            v43 = 2LL;
            HIDWORD(v45) = v17;
            v47 = 8LL;
          }
          else
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            MiFillLogProcessInfo(Process + 1024, &v26, &v28);
            FirstArgument = stru_140E366D8.FirstArgument;
            if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
              || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
            {
              return;
            }
            LODWORD(v30) = (unsigned int)PsGetProcessId(v19);
            v37 = 4LL;
            p_ProcessId = &v30;
            tlgCreate1Sz_char((__int64)&v38, v28);
            v40 = &ProcessId;
            v15 = (unsigned __int8 *)&word_140059E06;
            ProcessId = a5;
            v42 = (__int64 *)&v28;
            v16 = (__int64)FirstArgument;
            v41 = 4LL;
            Buffer = &v29;
            v46 = &v49;
            v48 = (__int64 *)p_DestinationString_8->Buffer;
            LODWORD(v49) = p_DestinationString_8->Length;
            LODWORD(v28) = a2;
            v43 = 4LL;
            LODWORD(v29) = a3;
            LOWORD(v26) = *(_WORD *)(Process + 1772);
            p_Process = (__int64 *)&v26;
            DestinationString = 2164260864LL;
            p_DestinationString = &DestinationString;
            v25 = 11;
            v45 = 4LL;
            v47 = 2LL;
            HIDWORD(v49) = v14;
            v51 = 2LL;
            v53 = 8LL;
          }
LABEL_30:
          tlgWriteEx_EtwWriteEx(v16, v15, v14, 1u, v23, v24, v25, v35);
          return;
        }
        v12 = KeGetCurrentThread()->ApcState.Process;
        MiFillLogProcessInfo((__int64)&v12[2].ReadyListHead.Blink, &v26, &v28);
        v13 = stru_140E366D8.FirstArgument;
        if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
          || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
        {
          return;
        }
        ProcessId = (unsigned int)PsGetProcessId(v12);
        p_ProcessId = (__int64 *)&ProcessId;
        v37 = 4LL;
        tlgCreate1Sz_char((__int64)&v38, v28);
        v40 = (unsigned int *)&v28;
        v15 = (unsigned __int8 *)&unk_140059F28;
        LODWORD(v32) = v29;
        v42 = &v32;
        Buffer = &v30;
        v46 = &DestinationString;
        LOWORD(v26) = WORD2(v12[3].PerProcessorCycleTimes);
        v48 = (__int64 *)&v26;
        Process = 2164260864LL;
        p_Process = &Process;
        LODWORD(v28) = a5;
        v16 = (__int64)v13;
        v25 = 10;
        v43 = 4LL;
        LODWORD(v30) = a3;
        v45 = 4LL;
        DestinationString = (__int64)p_DestinationString_8;
        v47 = 8LL;
        v49 = 2LL;
        v51 = 8LL;
LABEL_29:
        v41 = 4LL;
        goto LABEL_30;
      }
      if ( *(_DWORD *)stru_140E366D8.FirstArgument <= 5u
        || !tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
      {
        return;
      }
      v43 = 2LL;
      v15 = (unsigned __int8 *)&unk_140059FD0;
      v22 = (_DWORD)v14 == 5;
    }
    v16 = v20;
    LODWORD(v30) = a5;
    LOBYTE(v26) = v22;
    LODWORD(v28) = a3;
    p_ProcessId = &v30;
    v38 = &ProcessId;
    v40 = (unsigned int *)&v28;
    v42 = &v45;
    Buffer = (__int64 *)p_DestinationString_8->Buffer;
    LODWORD(v45) = p_DestinationString_8->Length;
    v46 = (__int64 *)&v26;
    Process = 2164260864LL;
    v48 = &Process;
    v25 = 9;
    v39 = 4LL;
    ProcessId = a2;
    v37 = 4LL;
    v49 = 8LL;
    v47 = 1LL;
    HIDWORD(v45) = v21;
    goto LABEL_29;
  }
  v9 = KeGetCurrentThread()->ApcState.Process;
  MiFillLogProcessInfo((__int64)&v9[2].ReadyListHead.Blink, &v26, &v28);
  v10 = stru_140E366D8.FirstArgument;
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    LODWORD(v32) = (unsigned int)PsGetProcessId(v9);
    v37 = 4LL;
    p_ProcessId = &v32;
    tlgCreate1Sz_char((__int64)&v38, v28);
    v40 = (unsigned int *)&v29;
    LODWORD(v29) = a5;
    v42 = (__int64 *)&v28;
    v41 = 4LL;
    Buffer = (__int64 *)&ProcessId;
    LODWORD(v28) = a2;
    v46 = &v49;
    v48 = (__int64 *)p_DestinationString_8->Buffer;
    LODWORD(v49) = p_DestinationString_8->Length;
    LOWORD(v26) = WORD2(v9[3].PerProcessorCycleTimes);
    p_Process = (__int64 *)&v26;
    v30 = 2164260864LL;
    p_DestinationString = &v30;
    v43 = 4LL;
    ProcessId = a3;
    v45 = 4LL;
    v47 = 2LL;
    HIDWORD(v49) = v11;
    v51 = 2LL;
    v53 = 8LL;
    tlgWriteEx_EtwWriteEx((__int64)v10, (unsigned __int8 *)byte_140059AC5, v11, v11 + 1, v23, v24, 0xBu, v35);
  }
}
