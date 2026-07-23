/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1409D1C14
 * Callers:
 *     PfSnLogScenarioDecision @ 0x1409D199C (PfSnLogScenarioDecision.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsGetSessionCreateTime @ 0x1409D1144 (PsGetSessionCreateTime.c)
 *     EtwpQueryProcessCommandLine @ 0x1409D37CC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1409D3984 (EtwpQueryProcessOtherInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x1409D39E0 (PsAcquireProcessExitSynchronization.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        _DWORD *a2,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v6; // r13
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // ebx
  __int64 *v12; // rcx
  int v13; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 *Flink; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  SIZE_T v18; // r8
  int v19; // eax
  int *v20; // rcx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int64 *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 Time; // rax
  __int64 *v28; // rcx
  int SessionId; // eax
  int *v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // r14
  char *v34; // rcx
  char *v35; // rbx
  int v36; // eax
  int *v37; // rcx
  __int64 *v38; // r14
  size_t v39; // r8
  void *v40; // rdx
  char *v41; // rbx
  int v42; // eax
  int *v43; // rcx
  char *v44; // rbx
  int v45; // eax
  int *v46; // rcx
  char *v47; // rbx
  int v48; // eax
  unsigned int Size; // [rsp+20h] [rbp-3A8h] BYREF
  int Size_4; // [rsp+24h] [rbp-3A4h]
  __int64 v52; // [rsp+28h] [rbp-3A0h] BYREF
  PERESOURCE *v53; // [rsp+30h] [rbp-398h]
  PVOID P[2]; // [rsp+38h] [rbp-390h] BYREF
  __int64 *v55; // [rsp+48h] [rbp-380h]
  __int64 v56; // [rsp+50h] [rbp-378h]
  size_t PackageSize; // [rsp+60h] [rbp-368h] BYREF
  size_t v58; // [rsp+68h] [rbp-360h]
  _BYTE v59[256]; // [rsp+78h] [rbp-350h] BYREF
  _BYTE v60[392]; // [rsp+178h] [rbp-250h] BYREF
  _OWORD v61[3]; // [rsp+300h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+330h] [rbp-98h] BYREF

  v6 = (unsigned int)Length;
  v56 = BugCheckParameter1;
  memset(v61, 0, sizeof(v61));
  memset_0(&PackageSize, 0, 0x2A0uLL);
  memset_0(Src, 0, 0x44uLL);
  *(_OWORD *)P = 0LL;
  v11 = 0;
  v52 = 0LL;
  v12 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 848) )
    v12 = *(__int64 **)(BugCheckParameter1 + 848);
  v55 = v12;
  v53 = (PERESOURCE *)PsReferencePrimaryTokenWithTag(BugCheckParameter1, 0x746C6644u, v9, v10);
  Size = 0;
  EtwpQueryTokenPackageInfo(v53, (WCHAR *)&PackageSize, &Size);
  v13 = -1073741789;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v53[6], 1u);
  Flink = (unsigned __int8 *)v53[19]->SystemResourcesList.Flink;
  v16 = 4 * Flink[1] + 8;
  Size = v16;
  if ( v16 <= 0x44 )
  {
    memmove(Src, Flink, v16);
    v13 = 0;
  }
  ExReleaseResourceLite(v53[6]);
  KeLeaveCriticalRegion();
  if ( v13 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v61);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v52);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess((__int64)v61, 0);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
      v11 = v52;
    }
    v17 = PackageSize + 100 + v58 + Size + *(unsigned __int16 *)v55 + LOWORD(P[0]);
    if ( a5 )
    {
      if ( a4 )
        RtlWriteULongToUser(a5, v17);
      else
        *a5 = v17;
    }
    if ( a4 )
      ProbeForWrite(a2, v6, 4u);
    v18 = (unsigned int)v6;
    if ( v17 < (unsigned int)v6 )
      v18 = v17;
    if ( a4 )
      RtlSetUserMemory(a2, 0, v18);
    else
      RtlSetVolatileMemory(a2, 0, v18);
    if ( (unsigned int)v6 < 0x60 )
    {
      v13 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      if ( a4 )
        RtlWriteULongToUser(a2, 96);
      else
        *a2 = 96;
      v19 = *(_DWORD *)(BugCheckParameter1 + 464);
      v20 = a2 + 1;
      if ( a4 )
        RtlWriteULongToUser(v20, v19);
      else
        *v20 = v19;
      ProcessStartKey = PsGetProcessStartKey(BugCheckParameter1);
      v22 = (unsigned __int64 *)(a2 + 2);
      if ( a4 )
        RtlWriteULong64ToUser(v22, ProcessStartKey);
      else
        *v22 = ProcessStartKey;
      v23 = a2 + 4;
      if ( a4 )
        RtlWriteULong64ToUser(v23, *(_QWORD *)(BugCheckParameter1 + 504));
      else
        *v23 = *(_QWORD *)(BugCheckParameter1 + 504);
      v24 = a2 + 6;
      if ( a4 )
        RtlWriteULong64ToUser(v24, *(_QWORD *)(BugCheckParameter1 + 1664));
      else
        *v24 = *(_QWORD *)(BugCheckParameter1 + 1664);
      v25 = a2 + 8;
      if ( a4 )
        RtlWriteULong64ToUser(v25, *(_QWORD *)(BugCheckParameter1 + 1672));
      else
        *v25 = *(_QWORD *)(BugCheckParameter1 + 1672);
      v26 = a2 + 10;
      if ( a4 )
        RtlWriteULong64ToUser(v26, *(_QWORD *)(BugCheckParameter1 + 1656));
      else
        *v26 = *(_QWORD *)(BugCheckParameter1 + 1656);
      Time = PsGetSessionCreateTime(BugCheckParameter1);
      v28 = (__int64 *)(a2 + 12);
      if ( a4 )
        RtlWriteULong64ToUser(v28, Time);
      else
        *v28 = Time;
      SessionId = PsGetSessionId(BugCheckParameter1);
      v30 = a2 + 14;
      if ( a4 )
        RtlWriteULongToUser(v30, SessionId);
      else
        *v30 = SessionId;
      v31 = a2 + 15;
      if ( a4 )
        RtlWriteULongToUser(v31, MEMORY[0xFFFFF780000002C4]);
      else
        *v31 = MEMORY[0xFFFFF780000002C4];
      if ( a4 )
        RtlWriteULongToUser(a2 + 16, v11);
      else
        a2[16] = v11;
      v32 = a2 + 17;
      if ( a4 )
        RtlWriteULongToUser(v32, SHIDWORD(v52));
      else
        *v32 = HIDWORD(v52);
      if ( (unsigned int)v6 >= v17 )
      {
        if ( a4 )
          RtlWriteULongToUser(a2 + 18, 96);
        else
          a2[18] = 96;
        v33 = Size;
        v34 = (char *)(a2 + 24);
        if ( a4 )
          RtlCopyToUser(v34, Src, Size);
        else
          RtlCopyVolatileMemory(v34, Src, Size);
        v35 = (char *)a2 + v33 + 96;
        v36 = v33 + 96;
        v37 = a2 + 19;
        if ( a4 )
          RtlWriteULongToUser(v37, v36);
        else
          *v37 = v36;
        v38 = v55;
        v39 = *(unsigned __int16 *)v55;
        v40 = (void *)v55[1];
        if ( a4 )
          RtlCopyToUser(v35, v40, v39);
        else
          RtlCopyVolatileMemory(v35, v40, v39);
        v41 = &v35[*(unsigned __int16 *)v38 + 2];
        v42 = (_DWORD)v41 - (_DWORD)a2;
        v43 = a2 + 20;
        if ( a4 )
          RtlWriteULongToUser(v43, v42);
        else
          *v43 = v42;
        if ( a4 )
          RtlCopyToUser(v41, v59, PackageSize);
        else
          RtlCopyVolatileMemory(v41, v59, PackageSize);
        v44 = &v41[PackageSize];
        v45 = (_DWORD)v44 - (_DWORD)a2;
        v46 = a2 + 21;
        if ( a4 )
          RtlWriteULongToUser(v46, v45);
        else
          *v46 = v45;
        if ( a4 )
          RtlCopyToUser(v44, v60, v58);
        else
          RtlCopyVolatileMemory(v44, v60, v58);
        v47 = &v44[v58];
        v48 = (_DWORD)v47 - (_DWORD)a2;
        if ( a4 )
          RtlWriteULongToUser(a2 + 22, v48);
        else
          a2[22] = v48;
        if ( a4 )
          RtlCopyToUser(v47, P[1], LOWORD(P[0]));
        else
          RtlCopyVolatileMemory(v47, P[1], LOWORD(P[0]));
        v13 = 0;
      }
      else
      {
        v13 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 584), (ULONG_PTR)v53, 0x746C6644u);
  return (unsigned int)v13;
}
