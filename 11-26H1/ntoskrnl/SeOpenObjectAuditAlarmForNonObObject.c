/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x140B0BB70
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 */

void SeOpenObjectAuditAlarmForNonObObject(
        UNICODE_STRING *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        unsigned int a7,
        int a8,
        int *a9,
        ...)
{
  BOOLEAN AccessGranted; // bp
  __int64 *v10; // rdi
  unsigned int *v12; // rbx
  char v13; // al
  int *v14; // r15
  unsigned int v15; // r13d
  char v16; // si
  unsigned __int16 *v17; // rbx
  unsigned __int16 *v18; // r14
  void *v19; // r8
  __int16 v20; // ax
  ACL *v21; // rdx
  ACL *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r14d
  ACCESS_MASK v26; // esi
  void *v27; // r8
  ACL *v28; // rdx
  __int16 v29; // ax
  __int64 v30; // rax
  __int16 *GenerateAudit; // [rsp+28h] [rbp-C0h]
  unsigned int v32; // [rsp+48h] [rbp-A0h]
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v35; // [rsp+100h] [rbp+18h]
  __int64 v36; // [rsp+108h] [rbp+20h]
  __int64 v37; // [rsp+138h] [rbp+50h] BYREF
  va_list va; // [rsp+138h] [rbp+50h]
  _BYTE *v39; // [rsp+140h] [rbp+58h]
  va_list va1; // [rsp+148h] [rbp+60h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v37 = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _BYTE *);
  v36 = a4;
  v35 = a3;
  v34 = a2;
  AccessGranted = v37;
  v10 = (__int64 *)a6;
  v12 = a5;
  GenerateAlarm[0] = 0;
  v13 = SepAdtAuditThisEventWithContext(119LL, v37, (_BYTE)v37 == 0, a6);
  v14 = a9;
  v15 = a7;
  v16 = v13;
  LOBYTE(v37) = v13;
  if ( !v13 )
  {
    v17 = (unsigned __int16 *)v36;
    v18 = v35;
    goto LABEL_3;
  }
  v19 = (void *)*v10;
  if ( !*v10 )
    v19 = (void *)v10[2];
  v20 = *((_WORD *)v12 + 1);
  if ( (v20 & 0x10) == 0 )
  {
    v21 = 0LL;
LABEL_11:
    v22 = 0LL;
    goto LABEL_21;
  }
  if ( v20 >= 0 )
  {
    v21 = (ACL *)*((_QWORD *)v12 + 3);
  }
  else
  {
    v23 = v12[3];
    if ( (_DWORD)v23 )
      v21 = (ACL *)((char *)v12 + v23);
    else
      v21 = 0LL;
  }
  if ( v20 >= 0 )
  {
    v22 = (ACL *)*((_QWORD *)v12 + 3);
  }
  else
  {
    v24 = v12[3];
    if ( !(_DWORD)v24 )
      goto LABEL_11;
    v22 = (ACL *)((char *)v12 + v24);
  }
LABEL_21:
  v25 = a8;
  v26 = a8 | a7;
  SeExamineSacl(v22, v21, v19, a8 | a7, AccessGranted, (PBOOLEAN)va, GenerateAlarm);
  v27 = (void *)*v10;
  v28 = 0LL;
  if ( !*v10 )
    v27 = (void *)v10[2];
  v29 = *((_WORD *)v12 + 1);
  if ( (v29 & 0x10) != 0 )
  {
    if ( v29 >= 0 )
    {
      v28 = (ACL *)*((_QWORD *)v12 + 3);
    }
    else
    {
      v30 = v12[3];
      if ( (_DWORD)v30 )
        v28 = (ACL *)((char *)v12 + v30);
    }
  }
  SeExamineGlobalSacl(a1, v28, v27, v26, AccessGranted, (PBOOLEAN)va, GenerateAlarm);
  v16 = v37;
  if ( (_BYTE)v37 )
  {
    v32 = v25;
    v18 = v35;
    GenerateAudit = (__int16 *)v12;
    v17 = (unsigned __int16 *)v36;
    SepAdtOpenObjectAuditAlarm(
      119,
      (const int *)a1,
      (unsigned __int64 *)&v34,
      v35,
      (unsigned __int16 *)v36,
      GenerateAudit,
      (_QWORD *)*v10,
      (_QWORD *)v10[2],
      v15,
      v32,
      v14,
      AccessGranted,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    *v39 = 1;
LABEL_3:
    if ( v16 )
      return;
    goto LABEL_5;
  }
  v17 = (unsigned __int16 *)v36;
  v18 = v35;
LABEL_5:
  if ( v14 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)a1,
        v18,
        v17,
        v34,
        *v10,
        v10[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v15,
        (unsigned int *)v14,
        AccessGranted);
  }
}
