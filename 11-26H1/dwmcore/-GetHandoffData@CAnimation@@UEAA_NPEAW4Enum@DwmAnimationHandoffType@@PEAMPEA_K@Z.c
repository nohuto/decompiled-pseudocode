/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180166CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18013F190 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rcx
  unsigned __int8 v9; // bp
  __int64 result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // xmm0_4
  __int64 v15; // [rsp+38h] [rbp-30h]
  _QWORD v16[5]; // [rsp+40h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 13);
  v9 = 1;
  if ( !v6 )
    goto LABEL_2;
  v11 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v6 + 136) > v11 )
    goto LABEL_2;
  v12 = *((_QWORD *)this + 14);
  if ( !*((_BYTE *)this + 177) )
    v12 += v11 - *((_QWORD *)this + 15);
  result = CAnimationInterpolator::GetAnimationValue((CAnimationInterpolator *)(v6 + 248), v12, (float *)this + 40, 0LL);
  v9 = result;
  if ( (_BYTE)result )
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 13);
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 23);
    *a3 = *((float *)this + 40);
    *a4 = *((_QWORD *)this + 12);
    if ( !*((_BYTE *)this + 178) && *((_DWORD *)this + 42) && *((_DWORD *)this + 41) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 12) + 6384LL) + 72LL))(
              *(_QWORD *)(*((_QWORD *)this - 12) + 6384LL),
              1LL);
      if ( v13 )
      {
        v14 = *((_DWORD *)this + 40);
        v16[0] = *((unsigned int *)this + 42);
        v16[1] = *((unsigned int *)this + 41);
        CoreUICallSend(v13, v16, 2LL, 1LL, 1, &unk_1802F5AD0, v14, v15, v16[0]);
      }
      *((_BYTE *)this + 178) = 1;
    }
    return v9;
  }
  return result;
}
