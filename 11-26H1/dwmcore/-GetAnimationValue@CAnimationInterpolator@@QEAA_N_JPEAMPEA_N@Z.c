/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18013F190
 * Callers:
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180166CE0 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180140840 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802942D0 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  unsigned int (__fastcall ***v5)(_QWORD); // rcx
  __int64 v7; // r15
  __int64 v8; // r14
  float v9; // xmm6_4
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int i; // ebx
  unsigned int v16; // eax
  unsigned __int8 v17; // bl
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // r15
  __int64 v21; // rbp
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // ebp
  bool InterpolatedValue; // di
  __int64 v29; // rbx
  float v30; // xmm7_4
  float v31; // xmm8_4
  int v32; // eax
  int v34; // eax
  double v35; // xmm6_8
  __int64 v36; // rax
  double v37; // xmm0_8
  double v38; // xmm6_8
  __int64 v39; // rax
  int v40; // ebp
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm8_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  int v46; // [rsp+30h] [rbp-78h] BYREF
  float v47; // [rsp+34h] [rbp-74h] BYREF
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  bool v49; // [rsp+B0h] [rbp+8h]
  __int64 v50; // [rsp+B8h] [rbp+10h] BYREF
  float *v51; // [rsp+C0h] [rbp+18h]

  v51 = a3;
  v50 = a2;
  v47 = 0.0;
  v5 = *(unsigned int (__fastcall ****)(_QWORD))this;
  v48 = 0LL;
  v46 = 0;
  v7 = a2;
  v8 = a2;
  v9 = 0.0;
  if ( (**v5)(v5) )
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, 0LL);
  else
    v10 = 0LL;
  v11 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) - 1;
  if ( v11 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    v12 = 0LL;
  else
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, v11);
  v49 = 0;
  if ( !v10 )
    return 0;
  v13 = *((_DWORD *)this + 2);
  if ( v13 != -1 )
  {
    v14 = v13 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
        ? 0LL
        : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, v13);
    if ( *(_QWORD *)(v14 + 8) > v7 )
      *((_DWORD *)this + 2) = -1;
  }
  for ( i = *((_DWORD *)this + 2); ; *((_DWORD *)this + 2) = i )
  {
    if ( ++i < (unsigned __int64)(***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    {
      v39 = i >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
          ? 0LL
          : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, i);
      if ( *(_QWORD *)(v39 + 8) <= v7 )
        continue;
    }
    break;
  }
  v16 = *((_DWORD *)this + 2);
  v17 = v16 != -1;
  if ( v16 != -1 )
  {
    v18 = v10 + 32LL * v16;
    v19 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 == 4 || v19 == 6 && v18 == v12 )
      v49 = 1;
    while ( v19 == 3 || (unsigned int)(v19 - 5) <= 1 )
    {
      if ( v10 == v18 )
        return 0;
      v20 = 0LL;
      v21 = 0LL;
      if ( (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, 0LL);
      else
        v22 = 0LL;
      if ( *(_DWORD *)v18 == 3 )
      {
        v23 = *(_QWORD *)(v18 + 16);
        if ( v23 )
          v20 = (v8 - *(_QWORD *)(v18 + 8)) % v23;
        v8 = *(_QWORD *)(v18 + 8);
        v21 = v20 + v8 - v23;
        if ( v21 < *(_QWORD *)(v22 + 8) )
        {
          v21 = *(_QWORD *)(v18 + 8);
          goto LABEL_29;
        }
LABEL_28:
        v8 = v21;
        if ( *(_QWORD *)(v18 + 8) >= v21 )
          goto LABEL_29;
        return 0;
      }
      if ( *(_DWORD *)v18 == 5 )
      {
        v24 = *(_QWORD *)(v18 + 8);
        v25 = v8 - v24;
        v26 = v24 - *(_QWORD *)(v22 + 8);
        if ( v25 <= v26 )
          v26 = v25;
        v21 = v24 - v26;
        goto LABEL_28;
      }
      if ( *(_DWORD *)v18 != 6 )
        goto LABEL_28;
      v8 = *(_QWORD *)(v18 + 8);
      v21 = v8;
LABEL_29:
      while ( 1 )
      {
        v18 -= 32LL;
        if ( *(_QWORD *)(v18 + 8) <= v21 )
          break;
        if ( v18 == v10 )
          return 0;
      }
      v19 = *(_DWORD *)v18;
    }
    v34 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 == 1 )
    {
      v35 = (double)((int)v8 - *(_DWORD *)(v18 + 8));
      v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      if ( v36 < 0 )
        v37 = (double)(int)(v36 & 1 | ((unsigned __int64)v36 >> 1))
            + (double)(int)(v36 & 1 | ((unsigned __int64)v36 >> 1));
      else
        v37 = (double)(int)v36;
      v38 = v35 / v37;
      v9 = *(float *)(v18 + 16) * (v38 * v38) * v38
         + *(float *)(v18 + 20) * (v38 * v38)
         + *(float *)(v18 + 24) * v38
         + *(float *)(v18 + 28);
    }
    else if ( v34 == 2 )
    {
      v9 = CAnimationInterpolator::InterpolateSinusoidal(this, (const struct DwmAnimationPrimitive *)v18, v8);
    }
    else
    {
      if ( v34 != 4 )
        return 0;
      v9 = *(float *)(v18 + 16);
    }
    if ( !_finite(v9) )
      return 0;
    v7 = v50;
    if ( a4 )
    {
      *a4 = v49;
      goto LABEL_32;
    }
  }
  if ( !v17 )
    return v17;
LABEL_32:
  v17 = (*(__int64 (__fastcall **)(_QWORD, int *, float *, __int64 *))(**(_QWORD **)this + 16LL))(
          *(_QWORD *)this,
          &v46,
          &v47,
          &v48);
  if ( !v17 )
    return v17;
  v27 = v46;
  if ( !v46 )
  {
LABEL_41:
    *v51 = v9;
    return v17;
  }
  InterpolatedValue = 1;
  v29 = v48;
  v30 = v9;
  v31 = v47;
  if ( (*((_BYTE *)this + 24) & 2) == 0
    && (LODWORD(v50) = 0, InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(
                                                this,
                                                0LL,
                                                (float *)&v50,
                                                0LL))
    && (InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, v29, (float *)this + 4, 0LL)) )
  {
    v41 = *((float *)this + 4);
    v42 = v41 - *(float *)&v50;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v41 - *(float *)&v50) & _xmm) >= 0.0000011920929 )
    {
      *((_BYTE *)this + 24) |= 1u;
      v44 = (float)(v41 - v31) / v42;
      *((float *)this + 5) = v44;
      if ( !_finite(v44) )
      {
        InterpolatedValue = 0;
        goto LABEL_36;
      }
    }
    else
    {
      *((_BYTE *)this + 24) &= ~1u;
    }
    v43 = v31 - *(float *)&v50;
    *((_BYTE *)this + 24) |= 2u;
    *((float *)this + 3) = v43;
  }
  else if ( !InterpolatedValue )
  {
    goto LABEL_36;
  }
  v40 = v27 - 1;
  if ( v40 )
  {
    if ( v40 == 1 )
      v30 = v9 + *((float *)this + 3);
  }
  else if ( v7 <= v29 )
  {
    if ( (*((_BYTE *)this + 24) & 1) != 0 )
    {
      v30 = (float)((float)(v9 - *((float *)this + 4)) * *((float *)this + 5)) + *((float *)this + 4);
    }
    else
    {
      if ( v29 < 0 )
        v45 = (float)(v29 & 1 | (unsigned int)((unsigned __int64)v29 >> 1))
            + (float)(v29 & 1 | (unsigned int)((unsigned __int64)v29 >> 1));
      else
        v45 = (float)(int)v29;
      v30 = (float)((float)(1.0 - (float)((float)(int)v7 / v45)) * *((float *)this + 3)) + v9;
    }
  }
LABEL_36:
  v32 = _finite(v30);
  if ( v32 )
    v9 = v30;
  v17 = 0;
  if ( v32 )
    v17 = InterpolatedValue;
  if ( v17 )
    goto LABEL_41;
  return v17;
}
