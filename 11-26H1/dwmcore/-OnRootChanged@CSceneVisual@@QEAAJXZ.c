/*
 * XREFs of ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18021CB84
 * Callers:
 *     ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x18021CB34 (-SetRoot@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x180209514 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18028857C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneVisual::OnRootChanged(CSceneVisual *this)
{
  __int64 v1; // rsi
  CSceneWorld *v3; // rax
  CSceneWorld *v4; // rax
  struct CContent *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  CResource *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 84);
  if ( !v1 )
  {
    v11 = CVisual::SetContent((struct CResource **)this, 0LL);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x30u, 0LL);
      return v7;
    }
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 31) )
  {
    v3 = (CSceneWorld *)DefaultHeap::AllocClear(0xA8uLL);
    if ( v3 )
    {
      v4 = CSceneWorld::CSceneWorld(v3, *((struct CComposition **)this + 3), this);
      v14 = (__int64)v4;
      v5 = v4;
      if ( v4 )
      {
        (*(void (__fastcall **)(CSceneWorld *))(*(_QWORD *)v4 + 8LL))(v4);
        v6 = CVisual::SetContent((struct CResource **)this, v5);
        v7 = v6;
        if ( v6 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
          goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x25u, 0LL);
LABEL_13:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
        return v7;
      }
    }
    else
    {
      v14 = 0LL;
    }
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23u, 0LL);
    goto LABEL_13;
  }
LABEL_7:
  v8 = *((_QWORD *)this + 31);
  if ( !v8
    || (v9 = *(CResource **)(v8 + 96),
        v13[1] = (__int64)&v14,
        v14 = v1,
        v13[0] = 1LL,
        v10 = CSceneNode::SetChildren(v9, v13),
        v7 = v10,
        v10 >= 0) )
  {
LABEL_15:
    (*(void (__fastcall **)(CSceneVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2Bu, 0LL);
  return v7;
}
