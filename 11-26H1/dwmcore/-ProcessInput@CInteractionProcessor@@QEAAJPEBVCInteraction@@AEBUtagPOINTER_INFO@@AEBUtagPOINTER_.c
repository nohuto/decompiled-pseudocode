/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180227F40
 * Callers:
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180227120 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMa.c)
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z @ 0x18025F990 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix.c)
 * Callees:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180014474 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x1801A5024 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801CCA78 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227CB8 (-ProcessInput@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227D90 (-ProcessInput@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227E68 (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct CInteraction *a2,
        const struct tagPOINTER_INFO *a3,
        const GUID *a4,
        unsigned int a5,
        const struct CMILMatrix *a6,
        struct IManipulationResource *a7,
        bool *a8)
{
  const struct tagPOINTER_INFO_UNION *v8; // r15
  int v11; // edx
  __int64 v12; // r8
  unsigned int started; // r14d
  __int64 v14; // rdx
  int v15; // r9d
  void *v16; // r10
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  bool v23; // al
  __int64 v24; // rcx
  int v25; // eax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // eax
  __int64 v32; // [rsp+30h] [rbp-B9h] BYREF
  __int64 v33; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v34; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A1h] BYREF
  CInteractionProcessor *v36; // [rsp+50h] [rbp-99h] BYREF
  __int64 v37; // [rsp+58h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-89h] BYREF
  __int64 *v39; // [rsp+80h] [rbp-69h]
  __int64 v40; // [rsp+88h] [rbp-61h]
  CInteractionProcessor **v41; // [rsp+90h] [rbp-59h]
  __int64 v42; // [rsp+98h] [rbp-51h]
  __int64 *v43; // [rsp+A0h] [rbp-49h]
  __int64 v44; // [rsp+A8h] [rbp-41h]
  __int64 *v45; // [rsp+B0h] [rbp-39h]
  __int64 v46; // [rsp+B8h] [rbp-31h]
  __int64 *v47; // [rsp+C0h] [rbp-29h]
  __int64 v48; // [rsp+C8h] [rbp-21h]
  __int64 *v49; // [rsp+D0h] [rbp-19h]
  __int64 v50; // [rsp+D8h] [rbp-11h]

  v8 = (const struct tagPOINTER_INFO_UNION *)a4;
  LODWORD(a4) = 0;
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v32 = *((_QWORD *)this + 60);
    v33 = *((_QWORD *)this + 40);
    v34 = *((_QWORD *)this + 20);
    v35 = *(_QWORD *)this;
    v49 = &v32;
    v47 = &v33;
    v45 = &v34;
    v43 = &v35;
    v41 = &v36;
    v39 = &v37;
    v37 = v12;
    v50 = (unsigned int)(v11 + 6);
    v48 = v50;
    v46 = v50;
    v44 = v50;
    v42 = v50;
    v40 = v50;
    v36 = this;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803DC880, byte_1803B2482, 0LL, a4, v50, &v38);
    LODWORD(a4) = 0;
  }
  *a8 = (char)a4;
  started = (unsigned int)a4;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
  *((_DWORD *)this + 198) = a5;
  *((_QWORD *)this + 100) = *((_QWORD *)a3 + 2);
  if ( CMILMatrix::operator!=((float *)this + 210, (float *)a6) )
  {
    *(_OWORD *)((char *)this + 840) = *(_OWORD *)v14;
    *(_OWORD *)((char *)this + 856) = *(_OWORD *)(v14 + 16);
    *(_OWORD *)((char *)this + 872) = *(_OWORD *)(v14 + 32);
    *(_OWORD *)((char *)this + 888) = *(_OWORD *)(v14 + 48);
    *((_DWORD *)this + 226) = *(_DWORD *)(v14 + 64);
    anonymous_namespace_::DecomposeMatrix(
      (CInteractionProcessor *)((char *)this + 840),
      v16,
      (CInteractionProcessor *)((char *)this + 908),
      (CInteractionProcessor *)((char *)this + 976),
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v17 = *((_DWORD *)this + 243);
    v18 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v19 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v18;
    v20 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v19;
    *(_OWORD *)((char *)this + 1228) = v20;
    *((_DWORD *)this + 311) = v17;
    v23 = CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v21, v22);
    v15 = 0;
    if ( !v23 )
    {
      v25 = *((_DWORD *)this + 243);
      v26 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v24 = *(_OWORD *)((char *)this + 908);
      v27 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v24 + 16) = v26;
      v28 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v24 + 32) = v27;
      *(_OWORD *)(v24 + 48) = v28;
      *(_DWORD *)(v24 + 64) = v25;
    }
    *a8 = 1;
  }
  if ( *((_DWORD *)this + 196) == v15 )
  {
    v29 = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0, (__int64)a7, v29);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (__int64)this + 784,
                             (__int64)a3,
                             (__int64)v8,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)v8,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (int *)this + 196,
                               (__int64)a3,
                               (__int64)v8,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)v8,
                             (__int64)this + 1272);
  }
  return started;
}
