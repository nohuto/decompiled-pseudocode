/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18013BE80
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18013BA80 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18013C4E8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(__m128 *this, char a2)
{
  __int64 v4; // rax
  unsigned __int32 v5; // ecx
  bool v6; // zf
  __int64 v7; // r15
  __m128 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  void *v11; // r8
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int16 v18; // r11
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int16 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // esi
  unsigned int v27; // esi
  int v28; // ecx
  unsigned int ChannelCallbackId; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // r10
  __int64 v33; // rax
  __m128 v34; // xmm3
  unsigned __int64 v35; // xmm0_8
  __m128i v36; // xmm5
  __int64 v37; // rax
  __m128i v38; // xmm4
  __int32 v39; // [rsp+30h] [rbp-E0h]
  __int32 v40; // [rsp+30h] [rbp-E0h]
  __int32 v41; // [rsp+30h] [rbp-E0h]
  __int64 v42; // [rsp+38h] [rbp-D8h]
  int v43; // [rsp+40h] [rbp-D0h]
  __int64 v44; // [rsp+90h] [rbp-80h] BYREF
  int v45; // [rsp+98h] [rbp-78h]
  __int64 v46; // [rsp+A0h] [rbp-70h]
  int v47; // [rsp+A8h] [rbp-68h]
  __int64 v48; // [rsp+B0h] [rbp-60h] BYREF
  int v49; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-50h] BYREF
  int v51; // [rsp+C8h] [rbp-48h]
  __int64 v52; // [rsp+D0h] [rbp-40h] BYREF
  int v53; // [rsp+D8h] [rbp-38h]
  _QWORD v54[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v55[2]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v57[9]; // [rsp+110h] [rbp+0h] BYREF
  char v58[56]; // [rsp+158h] [rbp+48h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+B8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this[1].m128_u64[1] + 6384) + 72LL))(
         *(_QWORD *)(this[1].m128_u64[1] + 6384),
         6LL);
  v5 = this[7].m128_u32[2];
  v6 = a2 == 0;
  v7 = v4;
  v8 = this + 6;
  v9 = v5 - 1;
  if ( v6 )
    v9 = v5;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A;
    if ( (unsigned int)v10 >= (unsigned int)v9 )
      break;
    if ( this[17].m128_i32[2] )
    {
      v12 = *(_DWORD *)(v8->m128_u64[0] + 24 * v10 + 12);
      v44 = *(_QWORD *)(v8->m128_u64[0] + 24 * v10 + 4);
      v45 = v12;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary(
        this,
        &v44,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A,
        0LL);
      v11 = &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A;
    }
    v13 = *(_DWORD *)(v8->m128_u64[0] + 24 * v10);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v28 = v14 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          if ( v7 )
          {
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
            v54[1] = this[4].m128_u32[2];
            LODWORD(v42) = *(unsigned __int8 *)(v30 + 24 * v10 + 20);
            v41 = this[18].m128_i32[0];
            v54[0] = ChannelCallbackId;
            CoreUICallSend(v7, v54, 2LL, 6LL, v32, v31, v41, v42, v43);
          }
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__m128 *))(this->m128_u64[0] + 272))(this)
            || (*(unsigned __int8 (__fastcall **)(__m128 *))(this->m128_u64[0] + 488))(this) )
          {
            v33 = (*(__int64 (__fastcall **)(__m128 *, char *))(this->m128_u64[0] + 480))(this, v58);
            v34 = *(__m128 *)v33;
            v35 = *(_QWORD *)(v33 + 48);
          }
          else
          {
            v34 = this[8];
            v35 = this[11].m128_u64[0];
          }
          v57[8] = v35;
          if ( v7 )
          {
            v55[0] = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
            v37 = this[4].m128_u32[2];
            v47 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8));
            v55[1] = v37;
            v49 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
            v51 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v34, 8));
            v46 = v36.m128i_i64[0];
            v48 = v38.m128i_i64[0];
            v50 = v34.m128_u64[0];
            CoreUICallSend(
              v7,
              v55,
              2LL,
              6LL,
              1,
              &unk_1802F5AE8,
              (unsigned int)&v50,
              _mm_shuffle_ps(v34, v34, 255).m128_f32[0],
              (unsigned int)&v48);
          }
          if ( this[11].m128_i8[6] )
            this[11].m128_i8[6] = 0;
        }
      }
      else if ( v7 )
      {
        v15 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
        v56[1] = this[4].m128_u32[2];
        LODWORD(v42) = *(unsigned __int8 *)(v16 + 24 * v10 + 20);
        v39 = this[18].m128_i32[0];
        v56[0] = v15;
        CoreUICallSend(v7, v56, 2LL, 6LL, v18, v17, v39, v42, v43);
      }
    }
    else
    {
      if ( v7 )
      {
        v19 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
        v57[1] = this[4].m128_u32[2];
        LODWORD(v42) = *(unsigned __int8 *)(v20 + 24 * v10 + 20);
        v40 = this[18].m128_i32[0];
        v57[0] = v19;
        CoreUICallSend(v7, v57, 2LL, 6LL, v22, v21, v40, v42, v43);
      }
      this[18].m128_i32[0] = 0;
    }
    if ( !this[17].m128_i32[2] )
    {
      v23 = this[6].m128_u64[0];
      v24 = *(_DWORD *)(v23 + 24 * v10 + 12);
      v52 = *(_QWORD *)(v23 + 24 * v10 + 4);
      v53 = v24;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v52, v11, 0LL);
    }
    v25 = 3 * v10;
    v10 = (unsigned int)(v10 + 1);
    this[17].m128_i32[2] = *(_DWORD *)(this[6].m128_u64[0] + 8 * v25);
  }
  if ( (_DWORD)v9 )
  {
    v26 = this[7].m128_u32[2];
    if ( (unsigned int)v9 > v26 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x23Bu, 0LL);
    }
    else
    {
      v27 = v26 - v9;
      if ( v27 )
        memmove_0((void *)v8->m128_u64[0], (const void *)(v8->m128_u64[0] + 24 * v9), 24LL * v27);
      v8[1].m128_i32[2] = v27;
    }
  }
}
