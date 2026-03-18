/*
 * XREFs of ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402440B8
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244180 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline @ 0x14024460C (Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bp
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // bl
  __int128 v11; // [rsp+20h] [rbp-28h]

  v4 = 1;
  if ( !(unsigned int)Feature_InteractionTrackerCodeGen__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = 0;
    if ( *((_QWORD *)this + 12) )
    {
      v6 = 0LL;
      do
      {
        v7 = *((_QWORD *)this + 13) * v6;
        v8 = *((_QWORD *)this + 9);
        v11 = *(_OWORD *)(v7 + v8);
        if ( (unsigned int)*(_QWORD *)(v7 + v8 + 16) )
        {
          v9 = v4 & (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(*(_QWORD *)v11 + 56LL))(
                      v11,
                      a2);
          v4 = v9 & (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)&v11 + 1)
                                                                                           + 56LL))(
                      *((_QWORD *)&v11 + 1),
                      a2);
        }
        v6 = ++v5;
      }
      while ( (unsigned __int64)v5 < *((_QWORD *)this + 12) );
    }
  }
  return v4;
}
