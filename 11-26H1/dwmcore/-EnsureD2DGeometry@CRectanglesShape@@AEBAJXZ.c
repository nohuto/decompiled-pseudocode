/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ @ 0x1801065AC
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801062E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v1 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_QWORD *)g_DeviceManager;
    if ( *((_QWORD *)this + 3) - v3 == 16 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v4 + 40))(g_DeviceManager, v3, &v16);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x10Du, 0LL);
        goto LABEL_7;
      }
      v6 = v16;
      v16 = 0LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 80))(g_DeviceManager, &v15);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x114u, 0LL);
        goto LABEL_7;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 136LL))(v15, &v14);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x116u, 0LL);
        goto LABEL_7;
      }
      v10 = *((_QWORD *)this + 2);
      v11 = 0LL;
      if ( (*((_QWORD *)this + 3) - v10) >> 4 )
      {
        v12 = 0LL;
        do
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v14 + 40LL))(
            v14,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v12 + v10), (__m128)*(unsigned int *)(v12 + v10 + 4)).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2) + 8),
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2) + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2) + 8),
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2) + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 80LL))(
            v14,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2)),
              (__m128)*(unsigned int *)(v12 + *((_QWORD *)this + 2) + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 1LL);
          v10 = *((_QWORD *)this + 2);
          v12 += 16LL;
          ++v11;
        }
        while ( v11 < (*((_QWORD *)this + 3) - v10) >> 4 );
      }
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x12Au, 0LL);
        goto LABEL_7;
      }
      v6 = v15;
      v15 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v6, 0LL) )
      ReleaseInterfaceNoNULL<ID2D1Ink>(v6);
  }
LABEL_7:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v1;
}
