/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180140840
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18013F190 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18016AD8C (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1801C53C0 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 * Callees:
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802942D0 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int i; // ebx
  unsigned int v13; // eax
  bool v14; // bp
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  double v25; // xmm6_8
  __int64 v26; // rax
  double v27; // xmm0_8
  double v28; // xmm6_8
  float v29; // xmm6_4
  __int64 v31; // rax
  bool v32; // [rsp+70h] [rbp+8h]

  if ( (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, 0LL);
  else
    v7 = 0LL;
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) - 1;
  if ( v8 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    v9 = 0LL;
  else
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, v8);
  v32 = 0;
  if ( v7 )
  {
    v10 = *((_DWORD *)this + 2);
    if ( v10 != -1 )
    {
      v11 = v10 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
          ? 0LL
          : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, v10);
      if ( *(_QWORD *)(v11 + 8) > a2 )
        *((_DWORD *)this + 2) = -1;
    }
    for ( i = *((_DWORD *)this + 2); ; *((_DWORD *)this + 2) = i )
    {
      if ( ++i < (unsigned __int64)(***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
      {
        v31 = i >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
            ? 0LL
            : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, i);
        if ( *(_QWORD *)(v31 + 8) <= a2 )
          continue;
      }
      break;
    }
    v13 = *((_DWORD *)this + 2);
    v14 = v13 != -1;
    if ( v13 != -1 )
    {
      v15 = v7 + 32LL * v13;
      v16 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 == 4 || v16 == 6 && v15 == v9 )
        v32 = 1;
      while ( v16 == 3 || (unsigned int)(v16 - 5) <= 1 )
      {
        if ( v7 == v15 )
          return 0;
        v17 = 0LL;
        v18 = 0LL;
        if ( (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, 0LL);
        else
          v19 = 0LL;
        if ( *(_DWORD *)v15 == 3 )
        {
          v20 = *(_QWORD *)(v15 + 16);
          if ( v20 )
            v17 = (a2 - *(_QWORD *)(v15 + 8)) % v20;
          a2 = *(_QWORD *)(v15 + 8);
          v18 = v17 + a2 - v20;
          if ( v18 < *(_QWORD *)(v19 + 8) )
          {
            v18 = *(_QWORD *)(v15 + 8);
            goto LABEL_29;
          }
LABEL_28:
          a2 = v18;
          if ( *(_QWORD *)(v15 + 8) >= v18 )
            goto LABEL_29;
          return 0;
        }
        if ( *(_DWORD *)v15 == 5 )
        {
          v21 = *(_QWORD *)(v15 + 8);
          v22 = a2 - v21;
          v23 = v21 - *(_QWORD *)(v19 + 8);
          if ( v22 <= v23 )
            v23 = v22;
          v18 = v21 - v23;
          goto LABEL_28;
        }
        if ( *(_DWORD *)v15 != 6 )
          goto LABEL_28;
        a2 = *(_QWORD *)(v15 + 8);
        v18 = a2;
LABEL_29:
        while ( 1 )
        {
          v15 -= 32LL;
          if ( *(_QWORD *)(v15 + 8) <= v18 )
            break;
          if ( v15 == v7 )
            return 0;
        }
        v16 = *(_DWORD *)v15;
      }
      v24 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 == 1 )
      {
        v25 = (double)((int)a2 - *(_DWORD *)(v15 + 8));
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
        if ( v26 < 0 )
          v27 = (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1))
              + (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1));
        else
          v27 = (double)(int)v26;
        v28 = v25 / v27;
        v29 = *(float *)(v15 + 16) * (v28 * v28) * v28
            + *(float *)(v15 + 20) * (v28 * v28)
            + *(float *)(v15 + 24) * v28
            + *(float *)(v15 + 28);
      }
      else if ( v24 == 2 )
      {
        v29 = CAnimationInterpolator::InterpolateSinusoidal(this, (const struct DwmAnimationPrimitive *)v15, a2);
      }
      else
      {
        if ( v24 != 4 )
          return 0;
        v29 = *(float *)(v15 + 16);
      }
      if ( !_finite(v29) )
        return 0;
      *a3 = v29;
      if ( a4 )
        *a4 = v32;
    }
  }
  else
  {
    return 0;
  }
  return v14;
}
