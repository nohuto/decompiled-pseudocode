/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180183FD0
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C (-NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023DF0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180183A50 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // rax
  int v4; // edi
  int v8; // eax
  unsigned int ChannelCallbackId; // eax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // r10
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 116) )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        v8 = *(_DWORD *)(a1 + 76);
        if ( _bittest(&v8, a2) )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6384LL) + 72LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6384LL),
                 9LL) )
          {
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
            v11 = *a3;
            v12 = *((_QWORD *)a3 + 2);
            v15[0] = ChannelCallbackId;
            v15[1] = *(unsigned int *)(a1 + 72);
            v16 = v11;
            v17 = v12;
            v14 = CoreUICallSend(v13, v15, 2LL, 9LL, 7, &unk_1802F5B4D, a2, &v16, ChannelCallbackId);
            if ( v14 != -2018375675 )
              v4 = v14;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x212u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
