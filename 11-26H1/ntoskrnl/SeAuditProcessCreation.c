/*
 * XREFs of SeAuditProcessCreation @ 0x140945DFC
 * Callers:
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsQueryProcessCommandLine @ 0x1404AE810 (PsQueryProcessCommandLine.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessCreation(PRKPROCESS PROCESS, UNICODE_STRING *a2)
{
  char v3; // si
  UNICODE_STRING *Pool2; // rdi
  unsigned int v5; // r13d
  void *v6; // rbx
  signed int AllocatedFullProcessImageName; // r14d
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  void *v10; // rbx
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rsi
  int v13; // ecx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  bool v18; // r8
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int v22[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING *v27; // [rsp+68h] [rbp-98h]
  struct _LIST_ENTRY *Flink; // [rsp+70h] [rbp-90h]
  void *v29; // [rsp+78h] [rbp-88h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  _DWORD Src[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  const int *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+118h] [rbp+18h]
  int v40; // [rsp+11Ch] [rbp+1Ch]
  struct _LIST_ENTRY *v41; // [rsp+120h] [rbp+20h]
  int v42; // [rsp+138h] [rbp+38h]
  int v43; // [rsp+13Ch] [rbp+3Ch]
  PVOID v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+15Ch] [rbp+5Ch]
  unsigned __int64 v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+178h] [rbp+78h]
  int v49; // [rsp+17Ch] [rbp+7Ch]
  void *v50; // [rsp+180h] [rbp+80h]
  int v51; // [rsp+198h] [rbp+98h]
  int v52; // [rsp+19Ch] [rbp+9Ch]
  UNICODE_STRING *v53; // [rsp+1B0h] [rbp+B0h]
  int v54; // [rsp+1B8h] [rbp+B8h]
  int v55; // [rsp+1BCh] [rbp+BCh]
  __int64 v56; // [rsp+1C0h] [rbp+C0h]
  int v57; // [rsp+1D8h] [rbp+D8h]
  int v58; // [rsp+1DCh] [rbp+DCh]
  __int64 v59; // [rsp+1E0h] [rbp+E0h]
  PVOID v60; // [rsp+1F0h] [rbp+F0h]
  int v61; // [rsp+1F8h] [rbp+F8h]
  int v62; // [rsp+1FCh] [rbp+FCh]
  struct _LIST_ENTRY *v63; // [rsp+210h] [rbp+110h]
  _BYTE DestinationSid[80]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v27 = a2;
  memset(v22, 0, sizeof(v22));
  v3 = 0;
  Pool2 = 0LL;
  P = 0LL;
  v5 = 0;
  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  DestinationString = 0LL;
  Blink = (struct _LIST_ENTRY *)DestinationSid;
  if ( !PROCESS[1].LastRebalanceQpc )
    return;
  v6 = *(void **)&PROCESS[1].StackCount.Value;
  Flink = PROCESS[1].Header.WaitListHead.Flink;
  v29 = v6;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)PROCESS, (__int64 *)&P);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_6;
  if ( PsLookupProcessByProcessId(v6, (PEPROCESS *)&v22[1]) < 0 )
  {
    v5 = 1845;
LABEL_18:
    v11 = PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u, v8, v9);
    v12 = v11;
    if ( !v11 )
    {
      AllocatedFullProcessImageName = -1073741700;
LABEL_20:
      v3 = 0;
      goto LABEL_6;
    }
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 216) + 40LL);
    if ( (v13 & 4) != 0 )
      v14 = 1938LL;
    else
      v14 = (v13 & 2 | 0xF20uLL) >> 1;
    v15 = *(unsigned int *)(v11 + 208);
    v16 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)&v22[1] = v16;
    if ( (unsigned int)v15 >= *(_DWORD *)(v12 + 124) )
      Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
    else
      AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(*(_QWORD *)(v12 + 152) + 16 * v15));
    ObfDereferenceObject((PVOID)v12);
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_20;
    if ( SepRmAuditProcessCommandLine )
    {
      if ( v27 )
      {
        Pool2 = v27;
        goto LABEL_35;
      }
      if ( (unsigned int)PsQueryProcessCommandLine(PROCESS, 0LL, 0, 0, v22) == -1073741820 )
      {
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          if ( (int)PsQueryProcessCommandLine(PROCESS, &Pool2->Length, v22[0], 0, v22) >= 0 )
          {
            v3 = 1;
LABEL_36:
            SeCaptureSubjectContext(&SubjectContext);
            memset_0(Src, 0, 0x418uLL);
            Src[0] = 5;
            Src[4] = 524422;
            Src[1] = 4688;
            v17 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
            v18 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(v22[2], v16);
            v19 = *(unsigned __int8 *)(v17 + 1);
            v38 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
            v41 = Flink;
            v32 = v17;
            Src[7] = 4 * v19 + 8;
            Src[6] = 4;
            v35 = &SeSubsystemName;
            v44 = P;
            v33 = 1;
            v34 = 32;
            v20 = *(unsigned __int16 *)P + 16;
            v36 = 5;
            v43 = v20;
            v50 = v29;
            v21 = Pool2->Length + 16;
            v37 = 8;
            v39 = 11;
            v40 = 8;
            v42 = 2;
            v45 = 21;
            v46 = 4;
            v47 = v14;
            v48 = 11;
            v49 = 8;
            v51 = 34;
            v52 = v21;
            v53 = Pool2;
            if ( v18 )
            {
              v54 = 35;
              v55 = 8;
              v56 = v16;
            }
            else
            {
              v54 = 6;
            }
            if ( v5 )
            {
              v59 = v5;
              v57 = 21;
              v58 = 4;
            }
            else
            {
              v57 = 2;
              v60 = v24;
              v58 = *(unsigned __int16 *)v24 + 16;
            }
            v63 = Blink;
            v61 = 4;
            Src[2] = 11;
            v62 = 4 * BYTE1(Blink->Flink) + 8;
            SepAdtLogAuditRecord(Src);
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_7;
          }
          ExFreePoolWithTag(Pool2, 0);
        }
      }
    }
    RtlInitUnicodeString(&DestinationString, &word_140B8A320);
    Pool2 = &DestinationString;
LABEL_35:
    v3 = 0;
    goto LABEL_36;
  }
  v10 = *(void **)&v22[1];
  if ( !*(_QWORD *)(*(_QWORD *)&v22[1] + 848LL) )
  {
    v5 = 1844;
    goto LABEL_16;
  }
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(*(__int64 *)&v22[1], (__int64 *)&v24);
  if ( AllocatedFullProcessImageName >= 0 )
  {
LABEL_16:
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    goto LABEL_18;
  }
LABEL_6:
  SepAuditFailed(AllocatedFullProcessImageName);
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v3 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
