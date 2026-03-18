/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094
 * Callers:
 *     ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x18004AFC8 (-FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ @ 0x18004F358 (-GetPathValue@CExpressionValue@@QEBAPEBVCPathData@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x180081420 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  int v3; // esi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  int v9; // r15d
  bool v10; // zf
  struct CResource *v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  const char *v15; // r9
  int v16; // r14d
  const struct SubchannelMaskInfo *v17; // r8
  __m128 v18; // xmm6
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned __int64 *p_ChannelCallbackId; // rdx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  const struct CPathData *PathValue; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // r8
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  __int16 v41; // [rsp+20h] [rbp-E0h]
  void *v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  double v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ChannelCallbackId; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h]
  _OWORD v50[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h]
  __int128 v53; // [rsp+E0h] [rbp-20h]
  __int128 v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+100h] [rbp+0h]
  float v56[16]; // [rsp+110h] [rbp+10h] BYREF
  int v57; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v57 = 0;
  v3 = a2;
  v5 = 0;
  v6 = 9LL;
  v7 = a2 - 1;
  if ( !v7 )
  {
    v6 = 8LL;
    goto LABEL_3;
  }
  if ( v7 == 1 )
LABEL_3:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, v6, a1);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 && *(_DWORD *)(v8 + 116) && *(_DWORD *)(a1 + 72) )
  {
    v55 = 0;
    v9 = 0;
    if ( v3 == 8 )
    {
      if ( (*(_BYTE *)(a1 + 216) & 2) == 0 )
        goto LABEL_51;
      v10 = *(_DWORD *)(a1 + 144) == 0;
    }
    else
    {
      v10 = v3 == 16;
    }
    if ( !v10 )
    {
      v11 = CBaseExpression::ResolveTargetNoRef((CBaseExpression *)a1);
      if ( v11 )
      {
        v12 = *(_DWORD *)(a1 + 180);
        v13 = (unsigned int)v12;
        LODWORD(v13) = v12 & 0x7FFFFFFF;
        v14 = (*(__int64 (__fastcall **)(struct CResource *, __int64, float *))(*(_QWORD *)v11 + 136LL))(v11, v13, v56);
        v16 = v14;
        if ( v14 >= 0 )
        {
          if ( v12 < 0 && v57 == 18 )
          {
            v57 = 18;
            v56[0] = v56[0] * 57.295776;
          }
          v17 = *(const struct SubchannelMaskInfo **)(a1 + 192);
          if ( v17 )
          {
            v30 = CBaseExpression::MergeValueWithMask(
                    (const struct CExpressionValue *)v56,
                    (const struct CExpressionValue *)(a1 + 80),
                    v17,
                    (struct CExpressionValue *)&v51);
            v5 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x5AEu, 0LL);
              if ( v55 != 11 )
                goto LABEL_41;
              v31 = *(_QWORD *)v51;
              goto LABEL_71;
            }
          }
          else
          {
            if ( *(_DWORD *)(a1 + 152) == 11 )
              goto LABEL_17;
            CExpressionValue::CopyFrom((CExpressionValue *)&v51, (const struct CExpressionValue *)(a1 + 80), 0LL, v15);
          }
          v9 = v55;
LABEL_17:
          if ( v3 != 16 )
          {
            v18 = (__m128)(unsigned int)v51;
            goto LABEL_23;
          }
LABEL_18:
          if ( v57 == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v56 + 16LL))(*(_QWORD *)v56);
          v57 = 18;
          v18 = 0LL;
          v56[0] = 0.0;
          if ( v9 == 11 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v51 + 16LL))(v51);
          LODWORD(v51) = 0;
          v9 = 18;
LABEL_23:
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6384LL) + 72LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6384LL),
                  0LL);
          v20 = (__int64 *)v51;
          v21 = v19;
          if ( !v19 )
            goto LABEL_39;
          if ( v57 > 69 )
          {
            if ( v57 != 70 )
            {
              if ( v57 != 71 )
              {
                if ( v57 == 104 )
                {
                  ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  v47 = *(unsigned int *)(a1 + 72);
                  v44 = COERCE_DOUBLE(&v48);
                  v43 = v3;
                  v42 = &unk_1802F5AB6;
                  v41 = 7;
                  v48 = v51;
                  v49 = v52;
LABEL_36:
                  p_ChannelCallbackId = &ChannelCallbackId;
LABEL_37:
                  v24 = CoreUICallSend(v21, p_ChannelCallbackId, 2LL, 0LL, v41, v42, v43, *(_QWORD *)&v44, v45);
                  goto LABEL_38;
                }
                if ( v57 == 265 )
                {
                  ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  v47 = *(unsigned int *)(a1 + 72);
                  v44 = COERCE_DOUBLE(v50);
                  v43 = v3;
                  v50[0] = v51;
                  v50[1] = v52;
                  v42 = &unk_1802F5ABC;
                  v41 = 8;
                  v50[2] = v53;
                  v50[3] = v54;
                  goto LABEL_36;
                }
LABEL_80:
                v5 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x63Cu, 0LL);
                goto LABEL_40;
              }
              v39 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
              v47 = *((_QWORD *)&v51 + 1);
              v44 = COERCE_DOUBLE(&ChannelCallbackId);
              v43 = v3;
              *(_QWORD *)&v48 = v39;
              v42 = &unk_1802F5AB0;
              v41 = 6;
              *((_QWORD *)&v48 + 1) = *(unsigned int *)(a1 + 72);
LABEL_69:
              ChannelCallbackId = (unsigned __int64)v20;
              p_ChannelCallbackId = (unsigned __int64 *)&v48;
              goto LABEL_37;
            }
            *(_QWORD *)&v48 = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
            *((_QWORD *)&v48 + 1) = *(unsigned int *)(a1 + 72);
            v44 = COERCE_DOUBLE(&ChannelCallbackId);
            v43 = v3;
            v42 = &unk_1802F5AAA;
            v41 = 5;
          }
          else
          {
            if ( v57 != 69 )
            {
              switch ( v57 )
              {
                case 11:
                  PathValue = CExpressionValue::GetPathValue((CExpressionValue *)(a1 + 80));
                  v33 = *((_QWORD *)PathValue + 2);
                  v34 = *((_QWORD *)PathValue + 3) - v33;
                  if ( v34 == -1 || !v33 && v34 )
                  {
                    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                    __debugbreak();
                  }
                  v35 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  v47 = *(unsigned int *)(a1 + 72);
                  ChannelCallbackId = v35;
                  v24 = CoreUICallSend(v21, &ChannelCallbackId, 2LL, 0LL, 9, &unk_1802F5AC2, v3, v37, v36);
LABEL_38:
                  v5 = v24;
                  if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2018375675 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x643u, 0LL);
                    goto LABEL_40;
                  }
LABEL_39:
                  v5 = 0;
LABEL_40:
                  if ( v9 != 11 )
                    goto LABEL_41;
                  v31 = *v20;
LABEL_71:
                  (*(void (**)(void))(v31 + 16))();
                  goto LABEL_41;
                case 17:
                  v38 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  v47 = *(unsigned int *)(a1 + 72);
                  LODWORD(v44) = (unsigned __int8)v20;
                  v43 = v3;
                  v42 = &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A;
                  v41 = 0;
                  ChannelCallbackId = v38;
                  goto LABEL_36;
                case 18:
                  v25 = *(_QWORD *)(a1 + 56);
                  if ( v25 )
                    v26 = *(_DWORD *)(v25 + 116);
                  else
                    v26 = 0;
                  ChannelCallbackId = v26;
                  v47 = *(unsigned int *)(a1 + 72);
                  v44 = v18.m128_f32[0];
                  v43 = v3;
                  v42 = &unk_1802F5A94;
                  v41 = 1;
                  goto LABEL_36;
                case 35:
                  v22 = *(_QWORD *)(a1 + 56);
                  if ( v22 )
                    v23 = *(_DWORD *)(v22 + 116);
                  else
                    v23 = 0;
                  ChannelCallbackId = v23;
                  v47 = *(unsigned int *)(a1 + 72);
                  *(_QWORD *)&v48 = _mm_unpacklo_ps(v18, (__m128)DWORD1(v51)).m128_u64[0];
                  v24 = CoreUICallSend(v21, &ChannelCallbackId, 2LL, 0LL, 2, &unk_1802F5A98, v3, &v48, v45);
                  goto LABEL_38;
                case 52:
                  ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  v47 = *(unsigned int *)(a1 + 72);
                  v44 = COERCE_DOUBLE(&v48);
                  v43 = v3;
                  v42 = &unk_1802F5A9E;
                  v41 = 3;
                  *(_QWORD *)&v48 = v51;
                  DWORD2(v48) = DWORD2(v51);
                  goto LABEL_36;
              }
              goto LABEL_80;
            }
            *(_QWORD *)&v48 = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
            *((_QWORD *)&v48 + 1) = *(unsigned int *)(a1 + 72);
            v44 = COERCE_DOUBLE(&ChannelCallbackId);
            v43 = v3;
            v42 = &unk_1802F5AA4;
            v41 = 4;
          }
          v47 = *((_QWORD *)&v51 + 1);
          goto LABEL_69;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B8,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
          (const char *)(unsigned int)v14,
          v40);
        v29 = 1245;
      }
      else
      {
        v29 = 1242;
        v16 = -2147024782;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2B40, 2u, v16, v29, 0LL);
    }
LABEL_51:
    v3 = 16;
    goto LABEL_18;
  }
LABEL_41:
  if ( v57 == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v56 + 16LL))(*(_QWORD *)v56);
  return v5;
}
