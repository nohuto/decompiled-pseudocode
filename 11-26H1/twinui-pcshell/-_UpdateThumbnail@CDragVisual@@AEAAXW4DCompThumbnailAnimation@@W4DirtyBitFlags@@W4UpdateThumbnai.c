/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180544400
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180541BF0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x180542290 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805423F0 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180542440 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1805426F0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x180542A40 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x18053FFAC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x180540190 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_bb.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // r9
  int v10; // ecx
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // ebx
  float v14; // xmm1_4
  float v15; // xmm2_4
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-60h]
  int v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v21 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v23, &v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  if ( (a3 & 5) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v10 )
    {
      v11 = (float)(*(_DWORD *)(a1 + 252) - *(_DWORD *)(a1 + 244));
      v12 = (float)(*(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240));
      v13 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      if ( v10 == 3 )
      {
        v14 = v11 * -0.025000006;
        v15 = v12 * -0.025000006;
      }
      else if ( v10 == 4 )
      {
        v14 = v11 * -0.050000012;
        v15 = v12 * -0.050000012;
      }
      else
      {
        v14 = v11 * 0.050000001;
        v15 = v12 * 0.050000001;
      }
      InflateRect(&rc, (int)v15, (int)v14);
      v16 = *(_DWORD *)(a1 + 288);
      if ( v16 == 1 )
      {
        v13 = -v13;
LABEL_12:
        rc.left += v13;
        rc.right += v13;
        goto LABEL_13;
      }
      if ( v16 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    LOBYTE(v20) = 0;
    LOBYTE(v19) = 0;
    DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
      *(_QWORD *)(a1 + 112),
      (__int64)&rc,
      a2,
      v9,
      v19,
      v20,
      a5);
  }
  v22 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)&rc.left = *(_QWORD *)(a1 + 112);
    v17 = *(_QWORD *)&rc.left;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&rc.left);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v21 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v21,
                v18,
                &v22) < 0 )
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
      v22);
  }
  if ( (a3 & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 32LL))(
      *(_QWORD *)(a1 + 112),
      *(_QWORD *)(**(_QWORD **)(a1 + 112) + 32LL),
      a2,
      0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v23);
}
