/*
 * XREFs of ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800D1600
 * Callers:
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x18006BF80 (-EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800D1970 (-PushExact@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800D1CB0 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::DuplicateScopeToClipStack(
        CScopedClipStack *this,
        struct CScopedClipStack *a2,
        const struct CMILMatrix *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  const struct D2D_RECT_F *TopByReference; // rax
  const struct D2D_RECT_F *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  char v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+98h] [rbp+20h]

  CScopedClipStack::EnterClippingScope(
    a2,
    *(_BYTE *)(*((_QWORD *)this + 1) - 8LL),
    *(const struct IDeviceTarget **)(*((_QWORD *)this + 1) - 192LL),
    a3,
    (const struct CMILMatrix *)(*((_QWORD *)this + 1) - 84LL));
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 1);
  v20 = v5;
  v7 = *(_QWORD *)(v5 - 16);
  v8 = *(void (__fastcall ****)(_QWORD))(v6 - 16);
  *(_QWORD *)(v5 - 16) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(v5 - 176) = *(_QWORD *)(v6 - 176);
  *(_QWORD *)(v5 - 160) = *(_QWORD *)(v6 - 160);
  v9 = *((_QWORD *)this + 243);
  v10 = -858993459 * ((*((_QWORD *)this + 244) - v9) >> 3) - *(_DWORD *)(v6 - 176);
  v11 = v10;
  if ( v10 < 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v9) >> 3) )
  {
    v14 = *((_QWORD *)this + 243);
    do
    {
      v15 = 5 * v11;
      v18 = 0LL;
      v16 = *(_QWORD *)(v14 + 40 * v11);
      v19 = 0;
      CShapePtr::~CShapePtr((CShapePtr *)&v18);
      detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((__int64 *)a2 + 243);
      v17 = *((_QWORD *)a2 + 244);
      CShapePtr::~CShapePtr((CShapePtr *)(v17 - 40));
      *(_QWORD *)(v17 - 40) = v16;
      *(_BYTE *)(v17 - 32) = 0;
      v18 = 0LL;
      v19 = 0;
      *(_QWORD *)(v17 - 24) = *(_QWORD *)(v14 + 8 * v15 + 16);
      *(_QWORD *)(v17 - 16) = *(_QWORD *)(v14 + 8 * v15 + 24);
      *(_DWORD *)(v17 - 8) = *(_DWORD *)(v14 + 8 * v15 + 32);
      *(_BYTE *)(v17 - 4) = *(_BYTE *)(v14 + 8 * v15 + 36);
      CShapePtr::~CShapePtr((CShapePtr *)&v18);
      ++v10;
      v14 = *((_QWORD *)this + 243);
      v11 = v10;
    }
    while ( v10 < 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v14) >> 3) );
    v5 = v20;
  }
  if ( *(_QWORD *)(v6 - 168) )
  {
    *(_QWORD *)(v5 - 168) = 1LL;
    TopByReference = (const struct D2D_RECT_F *)CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((char *)this + 2392);
    CD2DClipStack::PushExact(
      (struct CScopedClipStack *)((char *)a2 + 2392),
      TopByReference,
      D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
  }
  if ( *(_QWORD *)(v6 - 184) )
  {
    *(_QWORD *)(v5 - 184) = 1LL;
    v13 = (const struct D2D_RECT_F *)CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((char *)this + 2368);
    CD2DClipStack::PushExact((struct CScopedClipStack *)((char *)a2 + 2368), v13, D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
  }
}
