/*
 * XREFs of rimPopulateContactFrameData @ 0x1400F5058
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x1400F4FF8 (McTemplateK0d_EtwWriteTransfer.c)
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1400F54FC (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1400F5750 (EtwTracePointerDeviceTransformationStop.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1400F7104 (rimComputeHimetricGeometry.c)
 *     rimExtractTransducerUsages @ 0x14015890C (rimExtractTransducerUsages.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        int a6,
        struct tagPOINT a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // rbx
  ULONG UsageLength; // r15d
  __int64 v16; // rdi
  __int64 v17; // r12
  _DWORD *v18; // rax
  int *v19; // r13
  _DWORD *v20; // rsi
  _DWORD *v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rdx
  _DWORD *v24; // rsi
  __int64 v25; // rbx
  bool v26; // zf
  int v27; // eax
  unsigned int v28; // ebp
  int v29; // ecx
  __int64 v30; // r8
  int PointerDeviceUsages; // r15d
  unsigned __int16 *v32; // r14
  int v33; // ebp
  __int64 v34; // rcx
  unsigned int v35; // ecx
  int v36; // eax
  int v38; // edx
  char v39; // bl
  bool v40; // di
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  unsigned int v44; // eax
  __int16 v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+50h] [rbp-68h]
  struct tagHID_POINTER_DEVICE_INFO *v47; // [rsp+C0h] [rbp+8h]

  v13 = *(_QWORD *)(a2 + 456);
  UsageLength = (unsigned int)a9;
  v16 = *(_QWORD *)(v13 + 872);
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 440) + 16LL);
  v18 = a8;
  v19 = (int *)(*(_QWORD *)&a7 + 2368LL);
  v20 = a11;
  *a9 = 0;
  v21 = a10;
  *v18 = 0;
  v22 = *(_QWORD *)(*(_QWORD *)&a7 + 36LL);
  *v20 = 0;
  *v21 = 0;
  v23 = a13;
  v47 = (struct tagHID_POINTER_DEVICE_INFO *)v13;
  LODWORD(v13) = *(_DWORD *)(v13 + 844);
  *(_DWORD *)(*(_QWORD *)&a7 + 2364LL) |= 2u;
  *v23 = v22;
  *a12 = (*(_DWORD *)(*(_QWORD *)&a7 + 8LL) >> 3) & 1;
  memset((void *)(*(_QWORD *)&a7 + 2372LL), 0, 0xECuLL);
  v46 = (__int64)v20;
  v24 = a8;
  *(_DWORD *)(*(_QWORD *)&a7 + 2368LL) = *(_DWORD *)a7.x;
  *(_DWORD *)(*(_QWORD *)&a7 + 2416LL) = a6;
  *(_WORD *)(*(_QWORD *)&a7 + 2424LL) = *(_WORD *)(*(_QWORD *)&a7 + 4LL);
  *(_WORD *)(*(_QWORD *)&a7 + 2426LL) = a5;
  *(_DWORD *)(*(_QWORD *)&a7 + 2496LL) = v13;
  v25 = a2;
  *(_QWORD *)(*(_QWORD *)&a7 + 2512LL) = v16;
  *(_QWORD *)(*(_QWORD *)&a7 + 2448LL) = *(_QWORD *)(((*(_DWORD *)(a2 + 168) & 0x2000 | 0x4000uLL) >> 10) + a2);
  v26 = *(_QWORD *)(a1 + 832) == 0LL;
  v27 = *(unsigned __int8 *)(a1 + 1041);
  v28 = a4;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          (int)v47,
                          v17,
                          a3,
                          a4,
                          v26,
                          v27,
                          *(_QWORD *)&a7 + 2368LL,
                          (CHAR)v24,
                          UsageLength,
                          (__int64)v21,
                          v46);
  if ( PointerDeviceUsages < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v29 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v29 & 1) == 0)
      || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v39 = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = *(_QWORD *)(W32GetUserSessionState(v29, (_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control)
                      + 19368);
      v45 = 58;
      goto LABEL_22;
    }
  }
  else
  {
    v26 = *v24 == 0;
    a9 = *(_DWORD **)(*(_QWORD *)&a7 + 2372LL);
    if ( v26 )
    {
      v32 = (unsigned __int16 *)(*(_QWORD *)&a7 + 2424LL);
      v33 = (*(_DWORD *)(*(_QWORD *)&a7 + 8LL) >> 3) & 1;
      v34 = *(_DWORD *)(*(_QWORD *)&a7 + 2364LL) & 0xFFFFFFFB | ~(unsigned __int8)(*(_DWORD *)(*(_QWORD *)&a7 + 2444LL) >> 22) & 4;
      *(_DWORD *)(*(_QWORD *)&a7 + 2364LL) = v34;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
        McTemplateK0d_EtwWriteTransfer(v34, &PointerDeviceTransformationStart, v30, *v19);
      if ( *((_DWORD *)v47 + 6) == 7 )
      {
        TransformPTPLogicalUnitsToPhysical(
          v47,
          *(struct tagPOINT *)(*(_QWORD *)&a7 + 2372LL),
          (struct tagPOINT *)(*(_QWORD *)&a7 + 2488LL));
        *(_QWORD *)(*(_QWORD *)&a7 + 2472LL) = *(_QWORD *)(*(_QWORD *)&a7 + 2488LL);
        TransformPTPLogicalUnitsToPhysical(
          v47,
          *(struct tagPOINT *)(*(_QWORD *)&a7 + 2380LL),
          (struct tagPOINT *)(*(_QWORD *)&a7 + 2400LL));
        v35 = *(_DWORD *)(*(_QWORD *)&a7 + 2392LL);
        if ( v35 )
        {
          v44 = *(_DWORD *)(*(_QWORD *)&a7 + 2396LL);
          if ( v44 )
          {
            a8 = 0LL;
            TransformPTPLogicalUnitsToPhysical(v47, (struct tagPOINT)__PAIR64__(v44, v35), (struct tagPOINT *)&a8);
            *(_QWORD *)(*(_QWORD *)&a7 + 2408LL) = a8;
          }
        }
      }
      else
      {
        RIMApplyTransforms((_DWORD)v47, v33, (_DWORD)v19, (_DWORD)a13, (__int64)a12);
        rimComputeHimetricGeometry(v47, v19, *(_QWORD *)&a7 + 2400LL);
      }
      EtwTracePointerDeviceTransformationStop((unsigned int)*v19);
      v25 = a2;
      v28 = a4;
    }
    else
    {
      v32 = (unsigned __int16 *)(*(_QWORD *)&a7 + 2424LL);
    }
    v36 = *((_DWORD *)v47 + 6);
    if ( (v36 == 6 || v36 == 5)
      && (PointerDeviceUsages = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))rimExtractTransducerUsages)(
                                  v25,
                                  a5,
                                  a3,
                                  v28,
                                  a7),
          PointerDeviceUsages < 0) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v39 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v38, (unsigned int)&WPP_GLOBAL_Control)
                        + 19368);
        v45 = 59;
LABEL_22:
        LOBYTE(v42) = v40;
        LOBYTE(v41) = v39;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v42,
          v43,
          4,
          1,
          v45,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
      }
    }
    else
    {
      InputTraceLogging::RIM::PopulateContact(v25, *((unsigned int *)v47 + 6), *v32, &a9, v32, 0);
    }
  }
  return (unsigned int)PointerDeviceUsages;
}
