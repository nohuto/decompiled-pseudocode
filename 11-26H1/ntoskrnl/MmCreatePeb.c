/*
 * XREFs of MmCreatePeb @ 0x140ACC600
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     KeQueryGroupMaskProcess @ 0x1404939A4 (KeQueryGroupMaskProcess.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x140999EB0 (MiCreatePebOrTeb.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiInitializeWowPeb @ 0x140ACCF84 (MiInitializeWowPeb.c)
 */

__int64 __fastcall MmCreatePeb(__int64 BugCheckParameter1, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rdi
  __int64 v11; // rbx
  _DWORD *v12; // rdi
  __int64 v14; // [rsp+50h] [rbp-168h] BYREF
  __int64 v15; // [rsp+58h] [rbp-160h] BYREF
  void *v16; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v17[2]; // [rsp+70h] [rbp-148h] BYREF
  __int16 v18; // [rsp+72h] [rbp-146h]
  int v19; // [rsp+74h] [rbp-144h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-140h] BYREF
  __int64 Src; // [rsp+8Ch] [rbp-12Ch] BYREF
  int v22; // [rsp+94h] [rbp-124h] BYREF
  __int16 Blink; // [rsp+98h] [rbp-120h] BYREF
  __int16 v24; // [rsp+9Ah] [rbp-11Eh] BYREF
  __int64 v25; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-110h] BYREF
  int v27; // [rsp+B0h] [rbp-108h]
  ULONG v28; // [rsp+B4h] [rbp-104h]
  ULONG v29; // [rsp+B8h] [rbp-100h]
  int SessionId; // [rsp+BCh] [rbp-FCh] BYREF
  __int64 v31; // [rsp+C0h] [rbp-F8h]
  __int64 v32; // [rsp+C8h] [rbp-F0h]
  __int64 v33; // [rsp+D0h] [rbp-E8h]
  __int64 v34; // [rsp+D8h] [rbp-E0h]
  char v35; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v36[7]; // [rsp+E1h] [rbp-D7h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-D0h] BYREF
  __int16 v38; // [rsp+F0h] [rbp-C8h] BYREF
  __int16 v39; // [rsp+F2h] [rbp-C6h] BYREF
  __int16 v40; // [rsp+F4h] [rbp-C4h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-C0h] BYREF
  _BYTE v42[8]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v43[3]; // [rsp+108h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+120h] [rbp-98h] BYREF
  __int128 v45; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v46[48]; // [rsp+140h] [rbp-78h] BYREF

  v16 = 0LL;
  memset(v46, 0, sizeof(v46));
  v45 = 0LL;
  v18 = 0;
  *(_OWORD *)a4 = 0LL;
  v45 = *KeQueryGroupMaskProcess(&v44, BugCheckParameter1);
  *(_WORD *)(a4 + 8) = KeFindFirstSetRightGroupMask((__int64 *)&v45);
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v46);
  v15 = 0LL;
  v14 = 0LL;
  *(_QWORD *)&v44 = 0LL;
  v9 = MmMapViewOfSection(
         PspSiloMonitorLock.SchedulerAssistLastYieldBoostTime,
         BugCheckParameter1,
         &v15,
         0LL,
         0LL,
         (__int64)&v14,
         (__int64 *)&v44,
         1,
         5242880,
         2);
  if ( v9 < 0 )
    goto LABEL_12;
  v9 = MiCreatePebOrTeb(0LL, v8, &v16);
  if ( v9 < 0 )
    goto LABEL_12;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v11 = *(_QWORD *)(BugCheckParameter1 + 688);
  memset_0(v17, 0, 0xB0uLL);
  Src = 10LL;
  Blink = (__int16)CurrentServerSiloGlobals[83].Blink;
  v22 = 2;
  v24 = CmNtCSDVersion;
  v25 = qword_140FBF248;
  v26 = qword_140FBF240;
  v27 = KeNumberProcessors_0;
  v28 = NtGlobalFlag;
  v29 = NtGlobalFlag2;
  v31 = qword_140E2D790;
  v32 = (unsigned int)dword_140FBF228;
  v33 = qword_140FBF238;
  v34 = qword_140FBF230;
  v35 = *a2;
  v36[0] = a2[3];
  v37 = *((_QWORD *)a2 + 1);
  v43[0] = v11;
  v43[1] = *(_QWORD *)(BugCheckParameter1 + 680);
  v38 = (__int16)CurrentServerSiloGlobals[64].Blink;
  v39 = (__int16)CurrentServerSiloGlobals[68].Blink;
  if ( CurrentServerSiloGlobals[75].Flink )
    v40 = 1701;
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
    SessionId = PsGetSessionId(BugCheckParameter1);
  v41 = v15;
  v43[2] = a4;
  if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) != 0 )
  {
    v19 = 3;
    v20[0] = 10LL;
  }
  else if ( (int)MiCaptureImageHeaderFieldsForPeb(v17) < 0 )
  {
    v9 = -1073741520;
    goto LABEL_12;
  }
  v12 = v16;
  RtlCopyToUser((char *)v16 + 280, &Src, 4uLL);
  RtlCopyToUser(v12 + 71, (char *)&Src + 4, 4uLL);
  RtlCopyToUser(v12 + 72, &Blink, 2uLL);
  RtlCopyToUser(v12 + 73, &v22, 4uLL);
  RtlCopyToUser((char *)v12 + 290, &v24, 2uLL);
  RtlCopyToUser(v12 + 50, &v25, 8uLL);
  RtlCopyToUser(v12 + 52, &v26, 8uLL);
  RtlCopyToUser(v12 + 176, &SessionId, 4uLL);
  RtlCopyToUser(v12 + 74, &v19, 4uLL);
  RtlCopyToUser(v12 + 75, v20, 4uLL);
  RtlCopyToUser(v12 + 76, (char *)v20 + 4, 4uLL);
  RtlCopyToUser(v12, &v35, 1uLL);
  RtlCopyToUser((char *)v12 + 3, v36, 1uLL);
  RtlCopyToUser(v12 + 2, &v37, 8uLL);
  RtlCopyToUser(v12 + 4, v43, 8uLL);
  RtlCopyToUser(v12 + 211, &v38, 2uLL);
  RtlCopyToUser((char *)v12 + 846, &v39, 2uLL);
  RtlCopyToUser(v12 + 212, &v40, 2uLL);
  RtlCopyToUser(v12 + 494, &v41, 8uLL);
  RtlCopyToUser(v12 + 496, v42, 4uLL);
  RtlCopyToUser(v12 + 47, &NtGlobalFlag, 4uLL);
  RtlCopyToUser(v12 + 497, &NtGlobalFlag2, 4uLL);
  RtlCopyToUser(v12 + 48, &qword_140E2D790, 8uLL);
  RtlCopyToUser(v12 + 198, &dword_140FBF228, 4uLL);
  RtlCopyToUser(v12 + 54, &qword_140FBF238, 8uLL);
  RtlCopyToUser(v12 + 56, &qword_140FBF230, 8uLL);
  RtlWriteULongToUser(v12 + 46, KeNumberProcessors_0);
  if ( !*(_QWORD *)(BugCheckParameter1 + 784) || (v9 = MiInitializeWowPeb(v17, BugCheckParameter1), v9 >= 0) )
  {
    KiUnstackDetachProcess((__int64)v46, 0);
    *a3 = v12;
    return 0LL;
  }
LABEL_12:
  KiUnstackDetachProcess((__int64)v46, 0);
  return (unsigned int)v9;
}
