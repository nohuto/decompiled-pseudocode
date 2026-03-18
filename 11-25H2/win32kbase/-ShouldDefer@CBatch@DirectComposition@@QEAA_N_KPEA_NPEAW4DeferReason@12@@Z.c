/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCE2C
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1400C7BC0 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ @ 0x140055EB4 (-IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ.c)
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x14005661C (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 *     ?WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ @ 0x1402291DC (-WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        unsigned __int64 a2,
        bool *a3,
        enum DirectComposition::CBatch::DeferReason *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  char v11; // dl
  bool v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // dl

  if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*((_BYTE *)this + 32) & 1) == 0 )
    {
      v8 = *((_QWORD *)this + 1);
      v9 = *(_QWORD *)(v8 + 2776);
      *(_QWORD *)(v8 + 2776) = 0LL;
      if ( v9 )
        *((_QWORD *)this + 12) = v9;
    }
  }
  IsEnabledDeviceUsageNoInline = Feature_EffectHash__private_IsEnabledDeviceUsageNoInline();
  v11 = *((_BYTE *)this + 32);
  if ( IsEnabledDeviceUsageNoInline )
    v12 = (v11 & 9) != 0;
  else
    v12 = (v11 & 8) != 0;
  if ( *((_DWORD *)this + 5) != 5 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
    {
      *(_DWORD *)a4 = 1;
      return 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 266LL) )
    {
      *(_DWORD *)a4 = 2;
      goto LABEL_32;
    }
    if ( !v12 )
    {
      v13 = *((_QWORD *)this + 7);
      if ( v13 )
      {
        if ( a2 && v13 > a2 )
        {
          *(_DWORD *)a4 = 3;
          goto LABEL_32;
        }
      }
    }
    v14 = *((_QWORD *)this + 5);
    if ( v14 && *(_DWORD *)(v14 + 16) )
    {
      *(_DWORD *)a4 = 4;
      return 1;
    }
    if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline()
      && DirectComposition::CBatch::WaitingForEffectCompile(this) )
    {
      *(_DWORD *)a4 = 9;
      return 1;
    }
    if ( DirectComposition::CApplicationChannel::IsWaitingForChannelEvent(*((DirectComposition::CApplicationChannel **)this
                                                                          + 1)) )
    {
      *(_DWORD *)a4 = 8;
      return 1;
    }
    if ( DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(this) )
    {
      *(_DWORD *)a4 = 5;
      goto LABEL_32;
    }
    v15 = *((_QWORD *)this + 10);
    if ( v15 )
    {
      v16 = *(_BYTE *)(v15 + 33);
      if ( !v16 || *(int *)(v15 + 36) > 0 )
      {
        *(_DWORD *)a4 = 6;
        if ( v16 )
          return 1;
LABEL_32:
        *a3 = 1;
        return 1;
      }
    }
  }
  *(_DWORD *)a4 = 0;
  return 0;
}
