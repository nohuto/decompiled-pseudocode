/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14017E0DC (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 *     ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x14017E1D4 (-Add@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@Q.c)
 *     ?CapturePointer@CInteractionMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I@Z @ 0x140241F7C (-CapturePointer@CInteractionMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        unsigned int *a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v9; // r11d
  struct DirectComposition::CResourceMarshaler *v10; // rax
  DirectComposition::CInteractionMarshaler *v11; // rax
  struct DirectComposition::CApplicationChannel *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdi
  int v14; // eax
  _DWORD v16[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  if ( !CInputManager::OwnsPointerId(a1[684], a4) )
    return (unsigned int)-1073741790;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
          (DirectComposition::CApplicationChannel *)a1,
          a2);
  if ( !v10 )
    return (unsigned int)-1073741811;
  v11 = (DirectComposition::CInteractionMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 144LL))(v10);
  v13 = v11;
  if ( !v11 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v16[0] = a4;
      v16[1] = 0;
      v17 = a5;
      v14 = CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(
              (char *)v11 + 296,
              v16);
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  v14 = DirectComposition::CInteractionMarshaler::CapturePointer(v11, v12, a4);
LABEL_9:
  v9 = v14;
  if ( v14 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v13);
  return v9;
}
