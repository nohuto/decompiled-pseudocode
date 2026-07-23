/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepSecurityDescriptorStrictLength @ 0x14091EFBC (SepSecurityDescriptorStrictLength.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtSecurityDescriptorChangedAuditAlarm(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // ebx
  __int16 v15; // ax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r11
  int v23; // eax
  __int64 v24; // r11
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+30h] [rbp-D8h]
  int Src; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh]
  int v29; // [rsp+40h] [rbp-C8h]
  __int16 v30; // [rsp+48h] [rbp-C0h]
  __int16 v31; // [rsp+4Ah] [rbp-BEh]
  int v32; // [rsp+50h] [rbp-B8h]
  int v33; // [rsp+54h] [rbp-B4h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  int v35; // [rsp+70h] [rbp-98h]
  int v36; // [rsp+74h] [rbp-94h]
  unsigned __int16 *v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+90h] [rbp-78h]
  int v39; // [rsp+94h] [rbp-74h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  unsigned __int16 *v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D0h] [rbp-38h]
  int v45; // [rsp+D4h] [rbp-34h]
  unsigned __int16 *v46; // [rsp+E8h] [rbp-20h]
  int v47; // [rsp+F0h] [rbp-18h]
  int v48; // [rsp+F4h] [rbp-14h]
  unsigned __int16 *v49; // [rsp+108h] [rbp+0h]
  int v50; // [rsp+110h] [rbp+8h]
  int v51; // [rsp+114h] [rbp+Ch]
  __int64 v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+130h] [rbp+28h]
  int v54; // [rsp+134h] [rbp+2Ch]
  __int64 v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  __int64 v57; // [rsp+148h] [rbp+40h]
  int v58; // [rsp+150h] [rbp+48h]
  int v59; // [rsp+154h] [rbp+4Ch]
  __int64 v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  __int64 v62; // [rsp+168h] [rbp+60h]
  int v63; // [rsp+170h] [rbp+68h]
  int v64; // [rsp+174h] [rbp+6Ch]
  struct _LIST_ENTRY *v65; // [rsp+178h] [rbp+70h]
  int v66; // [rsp+190h] [rbp+88h]
  int v67; // [rsp+194h] [rbp+8Ch]
  PVOID v68; // [rsp+1A8h] [rbp+A0h]

  P = 0LL;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    memset_0(&Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src = 6;
      v15 = 140;
      v28 = 4907;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        v28 = 4911;
      }
      else
      {
        v28 = 4913;
        if ( (a8 & 0x40) == 0 )
          v28 = 4670;
      }
      Src = 3;
      v15 = 142;
    }
    v16 = *a2;
    v30 = v15;
    v17 = v16 + 16;
    v31 = 8;
    v18 = *(unsigned __int8 *)(a6 + 1);
    v32 = 4;
    v34 = a6;
    v35 = 1;
    v36 = v17;
    v33 = 4 * v18 + 8;
    v19 = *a1;
    v37 = a2;
    v38 = 5;
    v39 = 8;
    if ( v19 )
      v40 = *(_QWORD *)(v19 + 24);
    else
      v40 = *(_QWORD *)(a1[2] + 24);
    v20 = *a3 + 16;
    v46 = a3;
    v41 = 1;
    v42 = v17;
    v43 = a2;
    v44 = 1;
    v45 = v20;
    if ( a4 )
    {
      v21 = *a4;
      v47 = 2;
      v48 = v21 + 16;
      v49 = a4;
    }
    v50 = 11;
    v51 = 8;
    v52 = ObNormalizeHandleValue(a5);
    v53 = 24;
    v54 = SepSecurityDescriptorStrictLength(a7);
    v56 = 4LL;
    v57 = a7;
    v55 = v22;
    v58 = 24;
    v59 = SepSecurityDescriptorStrictLength(a9);
    v65 = Flink;
    v23 = *(unsigned __int16 *)P + 16;
    v68 = P;
    v67 = v23;
    v62 = a9;
    v60 = v24;
    v61 = 4LL;
    v63 = 11;
    v64 = 8;
    v66 = 2;
    v29 = 11;
    SepAdtLogAuditRecord(&Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
}
