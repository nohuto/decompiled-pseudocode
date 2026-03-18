/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18016A32C (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18016A468 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18016AD8C (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802942D0 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this, __int64 a2, __int64 a3, const char *a4)
{
  unsigned __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // r13
  _QWORD *v8; // rsi
  unsigned int (__fastcall ***v9)(_QWORD); // rcx
  char v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 (__fastcall ***v13)(_QWORD); // rcx
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned int i; // edi
  unsigned int v18; // eax
  char v19; // di
  __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  int v26; // eax
  double v27; // xmm6_8
  __int64 v28; // rax
  double v29; // xmm0_8
  double v30; // xmm6_8
  float v31; // xmm6_4
  int v32; // r14d
  signed __int64 v33; // r15
  float v34; // xmm7_4
  int v35; // eax
  unsigned int v36; // esi
  double v37; // r15
  __int64 v38; // r8
  unsigned int v39; // eax
  CComposition *v40; // rax
  __int64 v41; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // r14d
  float v51; // xmm0_4
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+40h] [rbp-C0h]
  float v57; // [rsp+44h] [rbp-BCh] BYREF
  double v58; // [rsp+48h] [rbp-B8h] BYREF
  int v59; // [rsp+50h] [rbp-B0h] BYREF
  float v60; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v63[2]; // [rsp+68h] [rbp-98h] BYREF
  double v64; // [rsp+78h] [rbp-88h] BYREF
  char *v65; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+90h] [rbp-70h] BYREF
  double *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  char **v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  _QWORD *v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  __int64 *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  double *v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  if ( !*((_QWORD *)this + 7) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animation.cpp",
      a4);
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this - 6) + 312LL))
                 + 24);
  if ( v5 < *((_QWORD *)this + 8) || !*((_DWORD *)this + 8) )
    return 0;
  v6 = *((_BYTE *)this + 224) == 0;
  v7 = *((_QWORD *)this + 15);
  *((_BYTE *)this + 220) = 1;
  if ( v6 )
    v7 += v5 - *((_QWORD *)this + 16);
  v57 = 0.0;
  v60 = 0.0;
  v8 = (_QWORD *)((char *)this + 176);
  v9 = (unsigned int (__fastcall ***)(_QWORD))*((_QWORD *)this + 22);
  v10 = 0;
  v62 = 0LL;
  v11 = v7;
  v59 = 0;
  if ( (**v9)(v9) )
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 8LL))(*v8, 0LL);
  else
    v12 = 0LL;
  v13 = (__int64 (__fastcall ***)(_QWORD))*v8;
  v61 = v12;
  v14 = (**v13)(v13) - 1;
  if ( v14 >= (**(unsigned int (__fastcall ***)(_QWORD))*v8)(*v8) )
    v58 = 0.0;
  else
    v58 = COERCE_DOUBLE((*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 8LL))(*v8, v14));
  BYTE1(v56) = 0;
  if ( !v12 )
  {
    v19 = 0;
    *((_BYTE *)this + 222) = 0;
    LOBYTE(v56) = 0;
    goto LABEL_56;
  }
  v15 = *((_DWORD *)this + 46);
  if ( v15 != -1 )
  {
    v16 = v15 >= (**(unsigned int (__fastcall ***)(_QWORD))*v8)(*v8)
        ? 0LL
        : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 8LL))(*v8, v15);
    if ( *(_QWORD *)(v16 + 8) > v7 )
      *((_DWORD *)this + 46) = -1;
  }
  for ( i = *((_DWORD *)this + 46); ; *((_DWORD *)this + 46) = i )
  {
    if ( ++i < (unsigned __int64)(**(__int64 (__fastcall ***)(_QWORD))*v8)(*v8) )
    {
      v44 = i >= (**(unsigned int (__fastcall ***)(_QWORD))*v8)(*v8)
          ? 0LL
          : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 8LL))(*v8, i);
      if ( *(_QWORD *)(v44 + 8) <= v7 )
        continue;
    }
    break;
  }
  v18 = *((_DWORD *)this + 46);
  v19 = v18 != -1;
  LOBYTE(v56) = v19;
  if ( v18 == -1 )
    goto LABEL_59;
  v20 = v12 + 32LL * v18;
  v21 = *(_DWORD *)v20;
  if ( *(_DWORD *)v20 == 4 || v21 == 6 && v20 == *(_QWORD *)&v58 )
    BYTE1(v56) = 1;
  while ( v21 == 3 || (unsigned int)(v21 - 5) <= 1 )
  {
    if ( v12 == v20 )
      goto LABEL_63;
    v22 = 0LL;
    v23 = 0LL;
    if ( (**(unsigned int (__fastcall ***)(_QWORD))*v8)(*v8) )
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 8LL))(*v8, 0LL);
    else
      v24 = 0LL;
    switch ( *(_DWORD *)v20 )
    {
      case 3:
        v25 = *(_QWORD *)(v20 + 16);
        if ( v25 )
          v22 = (v11 - *(_QWORD *)(v20 + 8)) % v25;
        v11 = *(_QWORD *)(v20 + 8);
        v23 = v22 + v11 - v25;
        if ( v23 < *(_QWORD *)(v24 + 8) )
        {
          v23 = *(_QWORD *)(v20 + 8);
          goto LABEL_31;
        }
        break;
      case 5:
        v45 = *(_QWORD *)(v20 + 8);
        v46 = v11 - v45;
        v47 = v45 - *(_QWORD *)(v24 + 8);
        if ( v46 <= v47 )
          v47 = v46;
        v23 = v45 - v47;
        break;
      case 6:
        v11 = *(_QWORD *)(v20 + 8);
        v23 = v11;
        goto LABEL_31;
    }
    v11 = v23;
    if ( *(_QWORD *)(v20 + 8) < v23 )
      goto LABEL_63;
LABEL_31:
    v12 = v61;
    while ( 1 )
    {
      v20 -= 32LL;
      if ( *(_QWORD *)(v20 + 8) <= v23 )
        break;
      if ( v20 == v61 )
        goto LABEL_63;
    }
    v21 = *(_DWORD *)v20;
  }
  v26 = *(_DWORD *)v20;
  if ( *(_DWORD *)v20 != 1 )
  {
    if ( v26 == 2 )
    {
      v31 = CAnimationInterpolator::InterpolateSinusoidal(
              (CAnimation *)((char *)this + 176),
              (const struct DwmAnimationPrimitive *)v20,
              v11);
      goto LABEL_40;
    }
    if ( v26 == 4 )
    {
      v31 = *(float *)(v20 + 16);
      goto LABEL_40;
    }
LABEL_63:
    v19 = 0;
    LOBYTE(v56) = 0;
    *((_BYTE *)this + 222) = 0;
    goto LABEL_56;
  }
  v27 = (double)((int)v11 - *(_DWORD *)(v20 + 8));
  v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
  if ( v28 < 0 )
    v29 = (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1)) + (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1));
  else
    v29 = (double)(int)v28;
  v30 = v27 / v29;
  v31 = *(float *)(v20 + 16) * (v30 * v30) * v30
      + *(float *)(v20 + 20) * (v30 * v30)
      + *(float *)(v20 + 24) * v30
      + *(float *)(v20 + 28);
LABEL_40:
  if ( !_finite(v31) )
    goto LABEL_63;
  v19 = (*(__int64 (__fastcall **)(_QWORD, int *, float *, unsigned __int64 *))(*(_QWORD *)*v8 + 16LL))(
          *v8,
          &v59,
          &v60,
          &v62);
  LOBYTE(v56) = v19;
  v10 = BYTE1(v56);
  if ( v19 )
  {
    v32 = v59;
    if ( v59 )
    {
      v33 = v62;
      v34 = v31;
      LOBYTE(v56) = CAnimationInterpolator::EnsureHandoffCachedData((CAnimation *)((char *)this + 176), v60, v62);
      v19 = v56;
      if ( (_BYTE)v56 )
      {
        v50 = v32 - 1;
        if ( v50 )
        {
          if ( v50 == 1 )
            v34 = v31 + *((float *)this + 47);
        }
        else if ( v7 <= v33 )
        {
          if ( (*((_BYTE *)this + 200) & 1) != 0 )
          {
            v34 = (float)((float)(v31 - *((float *)this + 48)) * *((float *)this + 49)) + *((float *)this + 48);
          }
          else
          {
            if ( v33 < 0 )
              v51 = (float)(v33 & 1 | (unsigned int)((unsigned __int64)v33 >> 1))
                  + (float)(v33 & 1 | (unsigned int)((unsigned __int64)v33 >> 1));
            else
              v51 = (float)(int)v33;
            v34 = (float)((float)(1.0 - (float)((float)(int)v7 / v51)) * *((float *)this + 47)) + v31;
          }
        }
      }
      if ( _finite(v34) )
      {
        v31 = v34;
      }
      else
      {
        v19 = 0;
        LOBYTE(v56) = 0;
      }
      v10 = BYTE1(v56);
    }
    if ( v19 )
    {
      v57 = v31;
      *((_BYTE *)this + 222) = v10;
      goto LABEL_49;
    }
  }
LABEL_59:
  *((_BYTE *)this + 222) = v10;
  if ( v19 )
  {
LABEL_49:
    v35 = *((_DWORD *)this + 8);
    v36 = 0;
    v58 = (double)(int)v7 / (double)(int)g_qpcFrequency.LowPart;
    if ( v35 )
    {
      v37 = v58;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v36)
                                                                 + 96LL))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v36),
          *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v36 + 8),
          18LL,
          &v57);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
        {
          v43 = *((_QWORD *)this + 1);
          *(float *)&v58 = v57;
          v64 = v37;
          LODWORD(v61) = *(_DWORD *)(v43 + 16LL * v36 + 8);
          v63[0] = *(_QWORD *)(v43 + 16LL * v36);
          v65 = (char *)this - 72;
          v67 = &v64;
          v69 = &v65;
          v71 = v63;
          v73 = &v61;
          v75 = &v58;
          v68 = 8LL;
          v70 = 8LL;
          v72 = 8LL;
          v74 = 4LL;
          v76 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_DCOMPEVENT_ANIMATION_UPDATE_VALUE,
            v38,
            6u,
            &v66);
        }
        v39 = *((_DWORD *)this + 8);
        ++v36;
      }
      while ( v36 < v39 );
      if ( v39 )
      {
        v40 = g_pComposition;
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 816LL) + 417LL) = 1;
        v41 = *((_QWORD *)v40 + 110);
        if ( v41 == *((_QWORD *)v40 + 111) )
        {
          v48 = 1LL;
          if ( v41 != -1 )
            v48 = v41 + 1;
          if ( v48 != v41 )
            ScheduleCompositionPass(0, 8u);
        }
      }
    }
  }
LABEL_56:
  if ( *((_DWORD *)this + 54) )
  {
    if ( *((_DWORD *)this + 53) )
    {
      v49 = *((_DWORD *)this + 34);
      if ( v49 < *((_DWORD *)this + 26) )
      {
        do
        {
          if ( *(_QWORD *)(*((_QWORD *)this + 10) + 16LL * v49) > v7 )
            break;
          v52 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 6384LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)this - 6) + 6384LL),
                  1LL);
          if ( v52 )
          {
            v53 = *((_QWORD *)this + 10);
            v54 = 2LL * *((unsigned int *)this + 34);
            v63[0] = *((unsigned int *)this + 54);
            v63[1] = *((unsigned int *)this + 53);
            LODWORD(v55) = *(_DWORD *)(v53 + 8 * v54 + 12);
            CoreUICallSend(v52, v63, 2LL, 1LL, 0, &unk_1802F5ACC, *(_DWORD *)(v53 + 8 * v54 + 8), v55, v56);
          }
          v49 = ++*((_DWORD *)this + 34);
        }
        while ( v49 < *((_DWORD *)this + 26) );
        v19 = v56;
      }
    }
  }
  if ( *((_BYTE *)this + 222) )
  {
    if ( !*((_BYTE *)this + 223) )
      CAnimation::EndAnimation((CAnimation *)((char *)this - 72));
  }
  return v19;
}
