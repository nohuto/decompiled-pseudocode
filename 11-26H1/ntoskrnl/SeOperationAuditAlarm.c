/*
 * XREFs of SeOperationAuditAlarm @ 0x14091F2B0
 * Callers:
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A8CA4 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepSecurityDescriptorStrictLength @ 0x14091EFBC (SepSecurityDescriptorStrictLength.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920410 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  PVOID v7; // rbx
  __int64 v11; // r8
  int v12; // esi
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r13
  signed int AllocatedFullProcessImageName; // edi
  _QWORD *ClientToken; // r8
  _QWORD *PrimaryToken; // r9
  _QWORD **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int16 *v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // r11d
  int v25; // r9d
  unsigned __int16 *v26; // rdx
  int v27; // r10d
  int v28; // ecx
  int v29; // eax
  PVOID v30; // rcx
  int v31; // eax
  _BYTE v32[4]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v33; // [rsp+24h] [rbp-DCh] BYREF
  PVOID v34; // [rsp+28h] [rbp-D8h] BYREF
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v36; // [rsp+38h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C0h] BYREF
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+64h] [rbp-9Ch]
  __int16 v40; // [rsp+70h] [rbp-90h]
  __int16 v41; // [rsp+72h] [rbp-8Eh]
  _DWORD v42[258]; // [rsp+78h] [rbp-88h]

  v7 = a7;
  v34 = a7;
  memset_0(&Src, 0, 0x418uLL);
  P = 0LL;
  LOBYTE(v11) = 1;
  v36 = 0LL;
  v33 = 0;
  v32[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v12 = (unsigned __int16)SepAdtClassifyObjectIntoSubCategory(a2, a4, v11, 0LL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
LABEL_24:
    SepAuditFailed(AllocatedFullProcessImageName);
    goto LABEL_18;
  }
  Src = 3;
  v41 = 8;
  v40 = v12;
  v39 = 4663LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v18 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v18 = (_QWORD **)SubjectContext.ClientToken;
  v19 = *v18[19];
  v42[8 * HIDWORD(v39)] = 4;
  v42[8 * HIDWORD(v39) + 1] = 4 * *(unsigned __int8 *)(v19 + 1) + 8;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = v19;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 1;
  v42[8 * HIDWORD(v39) + 1] = 32;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = &SeSubsystemName;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 5;
  v42[8 * HIDWORD(v39) + 1] = 8;
  if ( ClientToken )
    v20 = ClientToken[3];
  else
    v20 = PrimaryToken[3];
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = v20;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 1;
  v42[8 * HIDWORD(v39) + 1] = 32;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = &SeSubsystemName;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 1;
  v42[8 * HIDWORD(v39) + 1] = *a4 + 16;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = a4;
  v21 = HIDWORD(v39);
  ++HIDWORD(v39);
  SepQueryNameString(a2, &v36, ClientToken, PrimaryToken);
  v22 = (unsigned __int16 *)v36;
  if ( v36 )
  {
    if ( (_WORD)v12 == 117 || (_WORD)v12 == 129 )
      v42[8 * HIDWORD(v39)] = 2;
    else
      v42[8 * HIDWORD(v39)] = 1;
    v42[8 * HIDWORD(v39) + 1] = *v22 + 16;
    *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = v22;
  }
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 11;
  v42[8 * HIDWORD(v39) + 1] = 8;
  v23 = ObNormalizeHandleValue(a3);
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = v23;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 7;
  v42[8 * HIDWORD(v39) + 1] = v25 - 7;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = a5;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 4] = v21;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 10;
  v42[8 * HIDWORD(v39) + 1] = v25 - 7;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = a5;
  v26 = (unsigned __int16 *)P;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = v25;
  v42[8 * HIDWORD(v39) + 1] = v27;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = Flink;
  ++HIDWORD(v39);
  v42[8 * HIDWORD(v39)] = 2;
  v42[8 * HIDWORD(v39) + 1] = *v26 + 16;
  *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = v26;
  v28 = ++HIDWORD(v39);
  if ( v12 != v24 && v12 - v24 != 12 || !a7 )
    goto LABEL_15;
  v29 = SepCheckAndCopySelfRelativeSD((__int16 *)a7, &v34, &v33, v32);
  v7 = v34;
  AllocatedFullProcessImageName = v29;
  if ( v29 >= 0 )
  {
    v30 = v34;
    v42[8 * HIDWORD(v39)] = 31;
    v31 = SepSecurityDescriptorStrictLength((__int64)v30);
    v42[8 * HIDWORD(v39) + 1] = v31;
    *(_QWORD *)&v42[8 * HIDWORD(v39) + 6] = v7;
    *(_QWORD *)&v42[8 * HIDWORD(v39) + 2] = 32LL;
    *(_QWORD *)&v42[8 * HIDWORD(v39) + 4] = 0LL;
    v28 = HIDWORD(v39);
LABEL_15:
    HIDWORD(v39) = v28 + 1;
    SepAdtLogAuditRecord(&Src);
    SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v32[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_24;
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
}
