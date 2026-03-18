/*
 * XREFs of ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1401A5D48
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x140054718 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1401C6CA0 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  int v8; // r11d
  __int64 v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdi
  struct DirectComposition::CResourceMarshaler *v11; // rax
  __int64 CrossChannelVisualChildNoRef; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  if ( !v7 )
    return (unsigned int)-1073741790;
  v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 184LL))(v7);
  v10 = (struct DirectComposition::CResourceMarshaler *)v9;
  if ( !v9 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    if ( a4 )
    {
      CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v9);
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v11 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a3);
  if ( !v11 )
  {
    v13 = 0LL;
    goto LABEL_11;
  }
  CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v11 + 184LL))(v11);
LABEL_10:
  v13 = CrossChannelVisualChildNoRef;
LABEL_11:
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = *(_QWORD *)v10;
  v16[0] = 0;
  v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, _BYTE *))(v14 + 336))(
         v10,
         a1,
         v13,
         v16);
  if ( v8 >= 0 && v16[0] )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v10);
  return (unsigned int)v8;
}
