/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180521524
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x18051ED60 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x18051F400 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18051F560 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x18051F5B0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x18051F860 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x18051FBB0 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x18051D11C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x18051D2E8 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_bb.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // r9
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  float v13; // xmm0_4
  int v14; // r8d
  float v15; // xmm0_4
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-60h]
  int v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v24 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v26, &v24, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  if ( (a3 & 5) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v10 )
    {
      v11 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      v12 = *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240);
      v13 = (float)(*(_DWORD *)(a1 + 252) - *(_DWORD *)(a1 + 244));
      if ( v10 == 3 )
      {
        v14 = (int)(float)(v13 * -0.025000006);
        v15 = (float)v12 * -0.025000006;
      }
      else if ( v10 == 4 )
      {
        v14 = (int)(float)(v13 * -0.050000012);
        v15 = (float)v12 * -0.050000012;
      }
      else
      {
        v14 = (int)(float)(v13 * 0.050000001);
        v15 = (float)v12 * 0.050000001;
      }
      InflateRect(&rc, (int)v15, v14);
      v16 = *(_DWORD *)(a1 + 288);
      if ( v16 == 1 )
      {
        v11 = -v11;
LABEL_12:
        rc.left += v11;
        rc.right += v11;
        goto LABEL_13;
      }
      if ( v16 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    LOBYTE(v23) = 0;
    LOBYTE(v22) = 0;
    DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
      *(_QWORD *)(a1 + 112),
      (__int64)&rc,
      a2,
      v9,
      v22,
      v23,
      a5);
  }
  v25 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)&rc.left = *(_QWORD *)(a1 + 112);
    v17 = *(_QWORD *)&rc.left;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&rc.left);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    v24 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v24,
                v18,
                &v25) < 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, 0LL, 0LL, 0LL);
      a3 &= ~8u;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&rc.left);
  }
  if ( (a3 & 8) != 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 48LL))(*(_QWORD *)(a1 + 112))
    && *(_DWORD *)(a1 + 148) != 4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
      *(_QWORD *)(a1 + 112),
      a1 + 240,
      a2,
      v25);
  }
  if ( (a3 & 2) != 0 )
  {
    v20 = *(__int64 **)(a1 + 112);
    v21 = *v20;
    if ( *(_DWORD *)(a1 + 148) == 2 )
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v21 + 32))(v20, *(_QWORD *)(v21 + 32), a2, 0LL);
    else
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v21 + 32))(v20, v19, a2, 0LL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v26);
}
