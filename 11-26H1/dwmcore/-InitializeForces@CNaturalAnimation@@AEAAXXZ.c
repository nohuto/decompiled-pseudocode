/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18027B804
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333@Z @ 0x180003EC8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801E483C (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CFrictionAccelerator@@QEAA@M@Z @ 0x18027B120 (--0CFrictionAccelerator@@QEAA@M@Z.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18027B234 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  char *v3; // rbx
  int *v4; // rcx
  int v5; // eax
  int v6; // xmm0_4
  int v7; // xmm0_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  float v10; // xmm0_4
  const struct D2DMatrix *v11; // r8
  CFrictionAccelerator *v12; // rax
  CFrictionAccelerator *v13; // rax
  struct IAccelerator *v14; // r14
  CFrictionAccelerator *v15; // rax
  CFrictionAccelerator *v16; // rax
  struct IAccelerator *v17; // rsi
  CVector3Force *v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  float v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // r10d
  unsigned __int64 v27; // [rsp+120h] [rbp-80h] BYREF
  float v28; // [rsp+128h] [rbp-78h]
  __int64 v29; // [rsp+130h] [rbp-70h] BYREF
  int v30; // [rsp+138h] [rbp-68h]
  int v31; // [rsp+140h] [rbp-60h]
  int v32; // [rsp+144h] [rbp-5Ch]
  int v33; // [rsp+148h] [rbp-58h]
  int v34; // [rsp+14Ch] [rbp-54h]
  int v35; // [rsp+150h] [rbp-50h]
  int v36; // [rsp+154h] [rbp-4Ch]
  int v37; // [rsp+158h] [rbp-48h]
  int v38; // [rsp+15Ch] [rbp-44h]
  int v39; // [rsp+160h] [rbp-40h]
  int v40; // [rsp+164h] [rbp-3Ch]
  int v41; // [rsp+168h] [rbp-38h]
  int v42; // [rsp+16Ch] [rbp-34h]
  int v43; // [rsp+170h] [rbp-30h]
  int v44; // [rsp+174h] [rbp-2Ch]
  int v45; // [rsp+178h] [rbp-28h]
  int v46; // [rsp+17Ch] [rbp-24h]
  int v47; // [rsp+180h] [rbp-20h]
  int v48; // [rsp+184h] [rbp-1Ch]
  int v49; // [rsp+188h] [rbp-18h]
  int v50; // [rsp+18Ch] [rbp-14h]
  int v51; // [rsp+190h] [rbp-10h]
  int v52; // [rsp+194h] [rbp-Ch]
  int v53; // [rsp+198h] [rbp-8h]
  int v54; // [rsp+19Ch] [rbp-4h]
  int v55; // [rsp+1A0h] [rbp+0h]
  int v56; // [rsp+1A4h] [rbp+4h]
  int v57; // [rsp+1A8h] [rbp+8h]
  int v58; // [rsp+1ACh] [rbp+Ch]
  void *retaddr; // [rsp+1D8h] [rbp+38h]

  v1 = *((_DWORD *)this + 38);
  if ( v1 == 18 )
  {
    v5 = *((_DWORD *)this + 71);
    v3 = (char *)this + 316;
    v4 = (int *)((char *)this + 288);
    v6 = *v4;
    *((_DWORD *)this + 77) = v5;
    *((_DWORD *)this + 78) = v6;
    *((_QWORD *)this + 40) = 0LL;
    goto LABEL_8;
  }
  if ( v1 == 35 )
  {
    v4 = (int *)((char *)this + 288);
    v3 = (char *)this + 316;
LABEL_8:
    v7 = *v4;
    *((_DWORD *)this + 77) = *((_DWORD *)this + 77);
    *((_DWORD *)this + 78) = v7;
    *(_QWORD *)(v3 + 4) = *((unsigned int *)this + 80);
    goto LABEL_9;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  v3 = (char *)this + 316;
LABEL_9:
  CNaturalAnimation::GenerateVector3Basis(this);
  *(float *)&v8 = *((float *)this + 70) - *((float *)this + 76);
  *(float *)&v9 = *((float *)this + 71) - *((float *)this + 77);
  v29 = 0LL;
  v27 = __PAIR64__(v9, v8);
  v10 = *((float *)this + 72) - *((float *)this + 78);
  v30 = 0;
  v28 = v10;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v29,
    (const struct D2DVector3 *)&v27,
    (CNaturalAnimation *)((char *)this + 404));
  v27 = 0LL;
  v28 = 0.0;
  D3DXVec3TransformNormal((struct D2DVector3 *)&v27, (const struct D2DVector3 *)v3, v11);
  v12 = (CFrictionAccelerator *)operator new(0x18uLL);
  if ( v12 )
  {
    v13 = CFrictionAccelerator::CFrictionAccelerator(v12, -0.5);
    v14 = v13;
    if ( v13 )
      (**(void (__fastcall ***)(CFrictionAccelerator *))v13)(v13);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (CFrictionAccelerator *)operator new(0x18uLL);
  if ( v15 )
  {
    v16 = CFrictionAccelerator::CFrictionAccelerator(v15, -0.5);
    v17 = v16;
    if ( v16 )
      (**(void (__fastcall ***)(CFrictionAccelerator *))v16)(v16);
  }
  else
  {
    v17 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 32LL))(*((_QWORD *)this + 49));
  v18 = (CVector3Force *)operator new(0x168uLL);
  if ( v18 )
    v18 = CVector3Force::CVector3Force(v18, v14, v17, *((struct IAccelerator **)this + 49));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=((_QWORD *)this + 48, (void (__fastcall ***)(_QWORD))v18);
  v19 = *((_QWORD *)this + 48);
  v20 = v30;
  v21 = v28;
  *(_QWORD *)(v19 + 316) = v29;
  *(_QWORD *)(v19 + 328) = v27;
  *(float *)(v19 + 336) = v21;
  *(_DWORD *)(v19 + 324) = v20;
  *(_OWORD *)(v19 + 220) = *(_OWORD *)((char *)this + 404);
  *(_OWORD *)(v19 + 236) = *(_OWORD *)((char *)this + 420);
  *(_OWORD *)(v19 + 252) = *(_OWORD *)((char *)this + 436);
  *(_OWORD *)(v19 + 268) = *(_OWORD *)((char *)this + 452);
  *(_DWORD *)(v19 + 312) = 0;
  v22 = *((_QWORD *)this + 48);
  *(_QWORD *)(v22 + 340) = *((_QWORD *)this + 38);
  LODWORD(v19) = *((_DWORD *)this + 78);
  *(_BYTE *)(v22 + 352) |= 2u;
  *(_DWORD *)(v22 + 348) = v19;
  if ( *((_DWORD *)this + 55) && (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
  {
    v31 = *((_DWORD *)this + 112);
    v32 = *((_DWORD *)this + 111);
    v33 = *((_DWORD *)this + 110);
    v34 = *((_DWORD *)this + 109);
    v35 = *((_DWORD *)this + 108);
    v36 = *((_DWORD *)this + 107);
    v37 = *((_DWORD *)this + 106);
    v38 = *((_DWORD *)this + 105);
    v39 = *((_DWORD *)this + 104);
    v40 = *((_DWORD *)this + 103);
    v41 = *((_DWORD *)this + 102);
    v42 = *((_DWORD *)this + 101);
    v44 = HIDWORD(v29);
    v45 = v29;
    v47 = HIDWORD(v27);
    v48 = v27;
    v49 = *((_DWORD *)this + 78);
    v50 = *((_DWORD *)this + 77);
    v51 = *((_DWORD *)this + 76);
    v52 = *((_DWORD *)this + 72);
    v53 = *((_DWORD *)this + 71);
    v54 = *((_DWORD *)this + 70);
    v55 = *((_DWORD *)this + 81);
    v56 = *((_DWORD *)this + 80);
    v57 = *((_DWORD *)this + 79);
    v43 = v24;
    v46 = v25;
    v58 = v26;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (__int64)&unk_1803B5292);
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v17 + 8LL))(v17);
  if ( v14 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v14 + 8LL))(v14);
}
