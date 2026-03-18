/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z @ 0x180275CAC
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ @ 0x1801E0DB0 (-SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShiftLeft@?$DynArray@UPendingStateChangeInfo@CInteractionTrackerBase@@$0A@@@QEAAJI@Z @ 0x180195354 (-ShiftLeft@-$DynArray@UPendingStateChangeInfo@CInteractionTrackerBase@@$0A@@@QEAAJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z @ 0x1802760A8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::SendPendingStateChangeCallbacks(__m128 *this, char a2)
{
  __m128 *v4; // r15
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 ChannelCallbackId; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __m128 v15; // xmm3
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rax
  __m128i v18; // xmm4
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int32 v26; // [rsp+30h] [rbp-E0h]
  __int32 v27; // [rsp+30h] [rbp-E0h]
  __int32 v28; // [rsp+30h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-D8h]
  int v30; // [rsp+40h] [rbp-D0h]
  __int64 v31; // [rsp+A0h] [rbp-70h] BYREF
  int v32; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v33; // [rsp+B0h] [rbp-60h] BYREF
  int v34; // [rsp+B8h] [rbp-58h]
  _QWORD v35[2]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v36[2]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v38[9]; // [rsp+F0h] [rbp-20h] BYREF
  char v39[56]; // [rsp+138h] [rbp+28h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+98h]

  v4 = this + 6;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this[1].m128_u64[1] + 6384) + 72LL))(
         *(_QWORD *)(this[1].m128_u64[1] + 6384),
         6LL);
  v6 = this[7].m128_i32[2] - 1;
  if ( !a2 )
    v6 = this[7].m128_u32[2];
  v7 = 0LL;
  while ( (unsigned int)v7 < v6 )
  {
    v8 = 24 * v7;
    if ( this[32].m128_i32[2] )
      CInteractionTracker2::SendValuesChangedCallbackIfNecessary(
        (CInteractionTracker2 *)this,
        (const struct D2DVector3 *)(v8 + v4->m128_u64[0] + 4),
        *(float *)(v8 + v4->m128_u64[0] + 16),
        0);
    v9 = *(_DWORD *)(v8 + v4->m128_u64[0]);
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          if ( v5 )
          {
            ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
            v35[1] = this[4].m128_u32[2];
            LODWORD(v29) = *(unsigned __int8 *)(v8 + v13 + 20);
            v26 = this[32].m128_i32[3];
            v35[0] = ChannelCallbackId;
            CoreUICallSend(v5, v35, 2LL, 6LL, 5, v14, v26, v29, v30);
          }
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__m128 *))(this->m128_u64[0] + 272))(this)
            || (*(unsigned __int8 (__fastcall **)(__m128 *))(this->m128_u64[0] + 488))(this) )
          {
            v17 = (*(__int64 (__fastcall **)(__m128 *, char *))(this->m128_u64[0] + 480))(this, v39);
            v15 = *(__m128 *)v17;
            v16 = *(_QWORD *)(v17 + 48);
          }
          else
          {
            v15 = this[8];
            v16 = this[11].m128_u64[0];
          }
          v38[8] = v16;
          if ( v5 )
          {
            v36[0] = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
            v36[1] = this[4].m128_u32[2];
            v32 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
            v34 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 8));
            v31 = v18.m128i_i64[0];
            v33 = v15.m128_u64[0];
            CoreUICallSend(
              v5,
              v36,
              2LL,
              6LL,
              1,
              &unk_1802F5AE8,
              (unsigned int)&v33,
              _mm_shuffle_ps(v15, v15, 255).m128_f32[0],
              (unsigned int)&v31);
          }
          if ( this[11].m128_i8[6] )
            this[11].m128_i8[6] = 0;
        }
      }
      else if ( v5 )
      {
        v19 = (unsigned int)CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
        v37[1] = this[4].m128_u32[2];
        LODWORD(v29) = *(unsigned __int8 *)(v8 + v20 + 20);
        v27 = this[32].m128_i32[3];
        v37[0] = v19;
        CoreUICallSend(v5, v37, 2LL, 6LL, 4, v21, v27, v29, v30);
      }
    }
    else
    {
      if ( v5 )
      {
        v22 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
        v38[1] = this[4].m128_u32[2];
        LODWORD(v29) = *(unsigned __int8 *)(v8 + v23 + 20);
        v28 = this[32].m128_i32[3];
        v38[0] = v22;
        CoreUICallSend(v5, v38, 2LL, 6LL, 3, v24, v28, v29, v30);
      }
      this[32].m128_i32[3] = 0;
    }
    if ( !this[32].m128_i32[2] )
      CInteractionTracker2::SendValuesChangedCallbackIfNecessary(
        (CInteractionTracker2 *)this,
        (const struct D2DVector3 *)(this[6].m128_u64[0] + 4 + 24 * v7),
        *(float *)(this[6].m128_u64[0] + 24 * v7 + 16),
        0);
    v25 = 3 * v7;
    v7 = (unsigned int)(v7 + 1);
    this[32].m128_i32[2] = *(_DWORD *)(this[6].m128_u64[0] + 8 * v25);
  }
  DynArray<CInteractionTrackerBase::PendingStateChangeInfo,0>::ShiftLeft((__int64)&this[6], v6);
}
