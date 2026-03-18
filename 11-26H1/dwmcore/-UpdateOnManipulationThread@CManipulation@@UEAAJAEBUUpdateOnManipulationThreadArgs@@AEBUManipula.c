/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x180108D00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x18010900C (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x180109044 (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180109064 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801090D8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801092C8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        const struct ManipulationThreadTelemetryData *a3,
        struct IDCompositionInteractionStats *a4)
{
  CManipulation *v5; // r13
  unsigned int v8; // r14d
  __int64 v9; // rcx
  float *v10; // r15
  __int64 v11; // rdx
  float *v12; // rsi
  unsigned __int64 v13; // rdx
  char v14; // al
  char v15; // r8
  char v16; // al
  char v17; // cl
  __int64 *QuadPart; // rbx
  int v19; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  bool v32; // [rsp+30h] [rbp-D0h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  CManipulation *v34; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+98h] [rbp-68h]
  __int128 v40; // [rsp+A8h] [rbp-58h]
  __int128 v41; // [rsp+B8h] [rbp-48h]
  __int128 v42; // [rsp+C8h] [rbp-38h]
  __int128 v43; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+108h] [rbp+8h]
  __int16 v46; // [rsp+10Ch] [rbp+Ch]
  int v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+114h] [rbp+14h]
  int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+120h] [rbp+20h]

  PerformanceCount.QuadPart = (LONGLONG)a4;
  v5 = (CManipulation *)((char *)this - 80);
  v8 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 80), (*((_BYTE *)a2 + 16) & 4) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v9, *(unsigned int *)a2);
  v10 = (float *)((char *)a2 + 32);
  v11 = *((_QWORD *)a2 + 4) - 0x3F8000003F800000LL;
  if ( *((_QWORD *)a2 + 4) == 0x3F8000003F800000LL )
    v11 = *((unsigned int *)a2 + 10) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(FLOAT_1_0));
  if ( v11 )
  {
    *((float *)this + 8) = *v10 * *((float *)this + 8);
    *((float *)this + 9) = *((float *)a2 + 9) * *((float *)this + 9);
    *((float *)this + 10) = *((float *)a2 + 10) * *((float *)this + 10);
  }
  v12 = (float *)((char *)a2 + 20);
  v13 = *(_QWORD *)((char *)a2 + 20);
  if ( !v13 )
    v13 = *((unsigned int *)a2 + 7) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
  if ( v13 )
  {
    *((float *)this + 2) = *v12 + *((float *)this + 2);
    *((float *)this + 3) = *((float *)a2 + 6) + *((float *)this + 3);
    *((float *)this + 4) = *((float *)a2 + 7) + *((float *)this + 4);
  }
  *(_QWORD *)((char *)this + 44) = *(_QWORD *)v10;
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 10);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)v12;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  anonymous_namespace_::StoreIfChanged_D2DVector3_((char *)a2 + 48, (char *)this + 136);
  anonymous_namespace_::StoreIfChanged_D2DVector3_((char *)a2 + 60, (char *)this + 148);
  anonymous_namespace_::StoreIfChanged_D2DVector3_((char *)a2 + 76, (char *)this + 60);
  anonymous_namespace_::StoreIfChanged_float_((char *)a2 + 44, (char *)this + 56);
  v14 = anonymous_namespace_::StoreIfChanged_float_((char *)a2 + 72, (char *)this + 160);
  v16 = v15 | v14;
  v32 = v16;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 41)
    || v16
    || *((_DWORD *)this + 42) != *((_DWORD *)a2 + 22)
    || *((_DWORD *)this + 44) != *((_DWORD *)a2 + 1)
    || *((_DWORD *)this + 45) != *((_DWORD *)a2 + 2)
    || *((_DWORD *)this + 46) != *((_DWORD *)a2 + 3)
    || ((*((_BYTE *)a2 + 16) ^ *((_BYTE *)this + 188)) & 1) != 0
    || ((*((_BYTE *)a2 + 16) ^ *((_BYTE *)this + 188)) & 2) != 0 )
  {
    *((_DWORD *)this + 41) = *(_DWORD *)a2;
    *((_DWORD *)this + 44) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 46) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 42) = *((_DWORD *)a2 + 22);
    v17 = *((_BYTE *)this + 188) ^ (*((_BYTE *)a2 + 16) ^ *((_BYTE *)this + 188)) & 1;
    *((_BYTE *)this + 188) = v17;
    *((_BYTE *)this + 188) = v17 ^ (*((_BYTE *)a2 + 16) ^ v17) & 2;
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 23);
    QuadPart = (__int64 *)PerformanceCount.QuadPart;
    if ( PerformanceCount.QuadPart )
    {
      v21 = *((_QWORD *)a2 + 6);
      if ( !v21 )
        v21 = *((unsigned int *)a2 + 14) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
      if ( v21 )
        goto LABEL_28;
      v22 = *(_QWORD *)((char *)a2 + 60);
      if ( !v22 )
        v22 = *((unsigned int *)a2 + 17) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
      if ( v22 )
      {
LABEL_28:
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(&v34, 0, 0xD8uLL);
        v23 = *((_OWORD *)a3 + 1);
        v34 = v5;
        v24 = *((_OWORD *)a3 + 2);
        v35 = v23;
        v25 = *((_OWORD *)a3 + 3);
        v36 = v24;
        v26 = *((_OWORD *)a3 + 4);
        v37 = v25;
        v27 = *((_OWORD *)a3 + 5);
        v38 = v26;
        v28 = *((_OWORD *)a3 + 6);
        v39 = v27;
        v29 = *((_OWORD *)a3 + 7);
        v40 = v28;
        v30 = *((_OWORD *)a3 + 9);
        v41 = v29;
        v42 = *((_OWORD *)a3 + 8);
        v43 = v30;
        v44 = PerformanceCount;
        v45 = *(_DWORD *)a3;
        v46 = *((_WORD *)a3 + 90);
        v47 = *((_DWORD *)a3 + 2);
        v48 = *((_DWORD *)a3 + 1);
        v50 = *((_DWORD *)a3 + 44);
        v31 = *QuadPart;
        v49 = 1;
        (*(void (__fastcall **)(__int64 *, CManipulation **))(v31 + 208))(QuadPart, &v34);
      }
    }
    v19 = CManipulation::_SendUpdateToRenderThread(
            v5,
            v32,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 20),
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 32));
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x82u, 0LL);
  }
  return v8;
}
