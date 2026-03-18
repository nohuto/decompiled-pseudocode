/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x180050390
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x180294100 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005008C (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?load@?$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_order@2@@Z @ 0x180050A1C (-load@-$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_orde.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  unsigned int v3; // edi
  __int64 *v5; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  struct ID2D1Geometry *v9; // rbx
  struct ID2D1GeometrySink *v10; // rcx
  struct ID2D1Geometry *v11; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, struct ID2D1Geometry **); // rbx
  int v15; // eax
  struct ID2D1Geometry *v16; // rbx
  __int64 (__fastcall *v17)(struct ID2D1Geometry *, struct ID2D1GeometrySink **); // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // rcx
  __int64 v22; // rax
  struct ID2D1GeometrySink *v23; // rcx
  __int64 v24; // rax
  struct ID2D1Geometry *v25; // [rsp+70h] [rbp+20h] BYREF
  struct ID2D1GeometrySink *v26; // [rsp+78h] [rbp+28h] BYREF

  v26 = a2;
  v3 = 0;
  v5 = (__int64 *)*((_QWORD *)this + 5);
  v25 = 0LL;
  if ( std::_Atomic_storage<ID2D1PathGeometry *,8>::load((char *)this + 56) && v5 == *((__int64 **)this + 5) )
  {
    v8 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v7);
    v9 = (struct ID2D1Geometry *)v8;
    if ( v25 == (struct ID2D1Geometry *)v8 )
      goto LABEL_8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = v25;
    v25 = v9;
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v13 = *v5;
  v26 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v13 + 80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v15 = v14(v5, &v25);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x67u, 0LL);
    v23 = v26;
    if ( v26 )
      goto LABEL_24;
  }
  else
  {
    v16 = v25;
    v17 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v25 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    v18 = v17(v16, &v26);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x68u, 0LL);
    }
    else
    {
      v19 = CPathData::PushIntoSink(this, v26);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x6Au, 0LL);
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v26 + 72LL))(v26);
        v3 = v20;
        if ( v20 >= 0 )
        {
          if ( v5 == *((__int64 **)this + 5) )
          {
            v21 = (char *)this + 56;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, (signed __int64)v25, 0LL) )
            {
              v24 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v21);
              Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&v25, v24);
            }
            else
            {
              v22 = std::_Atomic_storage<ID2D1PathGeometry *,8>::load(v21);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
            }
          }
          v10 = v26;
          if ( !v26 )
            goto LABEL_8;
          v26 = 0LL;
LABEL_7:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_8:
          *a3 = v25;
          v25 = 0LL;
          goto LABEL_9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x6Cu, 0LL);
      }
    }
    v23 = v26;
    if ( v26 )
    {
      v26 = 0LL;
LABEL_24:
      (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
LABEL_9:
  v11 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v3;
}
