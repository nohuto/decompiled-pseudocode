/*
 * XREFs of ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1801A6DE8
 * Callers:
 *     ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@@Z @ 0x1801A6D10 (-Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@@Z.c)
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x1801A6D70 (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@@Z @ 0x18028E900 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1801A7090 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScalarForceEvaluator::AdvanceToTime(CScalarForceEvaluator *this, float a2, struct IAccelerator *a3)
{
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm11
  int v11; // ebx
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float (__fastcall *v18)(struct IAccelerator *); // rax
  float v19; // xmm6_4
  double v20; // xmm0_8
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm6_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  _DWORD v29[2]; // [rsp+38h] [rbp-D0h] BYREF
  CScalarForceEvaluator *v30; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  CScalarForceEvaluator **v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  _DWORD *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]

  if ( a2 == *(float *)this )
    return *((float *)this + 9);
  v6 = a2 - *(float *)this;
  if ( (*((_BYTE *)this + 64) & 2) != 0 )
    v6 = fmaxf(0.0, fminf(v6, 0.25));
  v7 = v6 + *((float *)this + 1);
  *((float *)this + 1) = v7;
  while ( v7 >= 0.0099999998 )
  {
    if ( (unsigned int)dword_1803DC880 > 5 && (qword_1803DC890 & 4) != 0 && (qword_1803DC898 & 4) == qword_1803DC898 )
    {
      v29[0] = *((_DWORD *)this + 1);
      v30 = this;
      v39 = v29;
      v40 = 4LL;
      v37 = &v30;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1803DC888;
      v38 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 4LL;
      UserData.Size = *(unsigned __int16 *)off_1803DC888;
      v34 = &unk_1803B6416;
      UserData.Reserved = 2;
      v35 = 80;
      v36 = 1;
      v29[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    v8 = *((_DWORD *)this + 7);
    *((_OWORD *)this + 2) = *(_OWORD *)((char *)this + 12);
    *((_DWORD *)this + 12) = v8;
    v9 = CScalarForceEvaluator::Integrate(
           this,
           &v32,
           (char *)this + 12,
           a3,
           *((_DWORD *)this + 2),
           LODWORD(FLOAT_0_0099999998));
    *(_OWORD *)((char *)this + 12) = *(_OWORD *)v9;
    *((_DWORD *)this + 7) = *(_DWORD *)(v9 + 16);
    v10 = *(_OWORD *)v9;
    v11 = *(_DWORD *)(v9 + 16);
    if ( (*(unsigned int (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 48LL))(a3) )
    {
      *((_BYTE *)this + 64) &= ~4u;
      v18 = *(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 24LL);
      if ( (*((_BYTE *)this + 64) & 1) != 0 )
      {
        if ( *((float *)this + 13) != (float)((float)(v18(a3) - *((float *)this + 4)) > 0.0) )
        {
          v19 = *((float *)this + 9);
          v20 = (*(double (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 24LL))(a3);
          v11 = *((_DWORD *)this + 7);
          v21 = (float)(*(float *)&v20 - v19) / (float)(*((float *)this + 4) - v19);
          v22 = 1.0 - v21;
          v23 = v21 * *((float *)this + 4);
          v24 = v21 * *((float *)this + 5);
          v32 = *(_OWORD *)((char *)this + 12);
          *(float *)&v20 = v22;
          v25 = v22 * *((float *)this + 10);
          *(float *)&v20 = *(float *)&v20 * *((float *)this + 9);
          *((_BYTE *)this + 64) &= ~1u;
          *((_BYTE *)this + 64) |= 4u;
          *((float *)&v32 + 2) = v25 + v24;
          *((float *)&v32 + 1) = v23 + *(float *)&v20;
          v10 = v32;
        }
      }
      else
      {
        v26 = *((float *)this + 4);
        v27 = v18(a3) - v26;
        *((_BYTE *)this + 64) &= ~1u;
        v28 = (float)(v27 > 0.0);
        *((float *)this + 13) = v28;
        *((_BYTE *)this + 64) |= COERCE_FLOAT(LODWORD(v28) & _xmm) >= 0.0000011920929;
      }
    }
    v7 = *((float *)this + 1) - 0.0099999998;
    v12 = *((float *)this + 2) + 0.0099999998;
    *(_OWORD *)((char *)this + 12) = v10;
    *((_DWORD *)this + 7) = v11;
    *((float *)this + 1) = v7;
    *((float *)this + 2) = v12;
  }
  v13 = v7 / 0.0099999998;
  v14 = 1.0 - v13;
  v15 = v13 * *((float *)this + 4);
  v16 = v14 * *((float *)this + 9);
  *(float *)this = a2;
  return v16 + v15;
}
