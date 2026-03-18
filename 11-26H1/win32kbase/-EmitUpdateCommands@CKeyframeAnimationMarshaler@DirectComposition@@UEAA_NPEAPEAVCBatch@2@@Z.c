/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140240550
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF878 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140120744 (-EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14012BED0 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPlaybackRate@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140136F3C (-EmitSetPlaybackRate@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetProgressBehavior@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140137E6C (-EmitSetProgressBehavior@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1401397D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14013A680 (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402407B4 (-Marshal@-$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  unsigned int v5; // r9d
  _DWORD *v6; // rsi
  _DWORD *v7; // r14
  _DWORD *v8; // r12
  _DWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 67);
    v6 = (_DWORD *)((char *)this + 16);
    if ( *((_DWORD *)this + 68) < v5 )
    {
      v12[0] = this;
      v12[1] = a2;
      v13 = this;
      if ( (*v6 & 0x40000) == 0 )
      {
        if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                (__int64)this,
                a2,
                (unsigned int *)this + 68,
                v5,
                (__int64)&v13,
                (__int64)v12) )
          return v4;
        *v6 |= 0x40000u;
      }
    }
    if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2)
      && (unsigned __int8)DirectComposition::CResourceMarshalerArray<141,138,0,50>::Marshal(
                            (char *)this + 152,
                            a2,
                            *((unsigned int *)this + 8)) )
    {
      v7 = (_DWORD *)((char *)this + 16);
      v8 = (_DWORD *)((char *)this + 32);
      if ( *((_QWORD *)this + 24) && (*v6 & 0x80000) == 0 )
      {
        v13 = 0LL;
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
          return v4;
        v9 = v13;
        v7 = (_DWORD *)((char *)this + 16);
        v8 = (_DWORD *)((char *)this + 32);
        *(_DWORD *)v13 = 16;
        v9[1] = 139;
        v9[2] = *((_DWORD *)this + 8);
        v9[3] = *(_DWORD *)(*((_QWORD *)this + 24) + 32LL);
        *v6 |= 0x80000u;
      }
      if ( DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
      {
        if ( (*v7 & 0x8000) == 0 )
        {
          v13 = 0LL;
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
            return v4;
          v10 = v13;
          *(_DWORD *)v13 = 16;
          v10[1] = 0LL;
          *((_DWORD *)v10 + 1) = 144;
          *((_DWORD *)v10 + 2) = *v8;
          *((_DWORD *)v10 + 2) = *v8;
          *((_DWORD *)v10 + 3) = *((_DWORD *)this + 72);
          *v7 |= 0x8000u;
        }
        if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetProgressBehavior(this, a2)
          && DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2)
          && DirectComposition::CKeyframeAnimationMarshaler::EmitSetPlaybackRate(this, a2)
          && DirectComposition::CResourceMarshaler::EmitUpdatesCompletedForResource(this, a2) )
        {
          return 1;
        }
      }
    }
  }
  return v4;
}
