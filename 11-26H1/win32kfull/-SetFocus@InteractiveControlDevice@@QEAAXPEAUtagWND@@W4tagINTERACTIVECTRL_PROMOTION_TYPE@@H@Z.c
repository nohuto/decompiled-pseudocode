/*
 * XREFs of ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402FD6A0
 * Callers:
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x140261B54 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1402F10F8 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402F19B0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402FCB84 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14013CBE0 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14025560C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x14026234C (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1402FD570 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1402FD910 (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1402FD9D4 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 */

void __fastcall InteractiveControlDevice::SetFocus(__int64 a1, struct tagWND *a2, unsigned int a3, int a4)
{
  int v4; // ebx
  struct _LIST_ENTRY *v5; // rbp
  __int64 v10; // r8
  __int64 v11; // rax
  struct InteractiveControlInput *v12; // r13
  __int64 v13; // rcx
  struct tagWND *v14; // rax
  __int64 v15; // r8
  InteractiveControlInput *v16; // rax
  InteractiveControlInput *v17; // r15
  InteractiveControlInput *v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  struct InteractiveControlInput *v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (struct _LIST_ENTRY *)(a1 + 16);
  v21 = 0LL;
  if ( *(_DWORD *)(a1 + 364) && *(_QWORD *)(a1 + 368) )
    v5 = *(struct _LIST_ENTRY **)(a1 + 368);
  if ( a2 != *(struct tagWND **)(a1 + 40) )
  {
    if ( (unsigned int)InteractiveControlDevice::GetPreviousInputReport(
                         (InteractiveControlDevice *)a1,
                         v5,
                         (struct _LIST_ENTRY **)&v21) )
    {
      v11 = 0LL;
      if ( a2 )
        v11 = *(_QWORD *)a2;
      v12 = v21;
      v13 = *((_QWORD *)v21 + 2);
      if ( v13 == v11 )
        goto LABEL_19;
      v14 = (struct tagWND *)ValidateHwnd(v13);
      if ( v14 )
        InteractiveControlInput::GenerateMessages((__int64)v12, v14, *(_DWORD *)(a1 + 64), 0x10u);
      v16 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL, v15);
      if ( v16 )
        v17 = InteractiveControlInput::InteractiveControlInput(v16, (struct InteractiveControlDevice *)a1);
      else
        v17 = 0LL;
      *(_OWORD *)((char *)v17 + 52) = *(_OWORD *)((char *)v12 + 52);
      *(_QWORD *)((char *)v17 + 68) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)v17 + 19) = *((_DWORD *)v12 + 19);
    }
    else
    {
      v18 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL, v10);
      if ( v18 )
        v17 = InteractiveControlInput::InteractiveControlInput(v18, (struct InteractiveControlDevice *)a1);
      else
        v17 = 0LL;
    }
    InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v5, (struct _LIST_ENTRY *)v17);
    InteractiveControlInput::GenerateMessages((__int64)v17, a2, a3, 8u);
LABEL_19:
    InteractiveControlDevice::SetTargetWindow((InteractiveControlDevice *)a1, a2);
  }
  if ( a4 && a3 != *(_DWORD *)(a1 + 64) )
  {
    v19 = a3;
    if ( a3 && (v19 = a3 - 1, (unsigned int)v19 <= 1) )
    {
      v20 = 0;
      v4 = 1;
    }
    else
    {
      v20 = *((_DWORD *)InteractiveControlManager::Instance(v19, (__int64)a2) + 27);
    }
    v22 = v4;
    *(_DWORD *)(a1 + 64) = a3;
    InteractiveControlDevice::SetComponentResolution(a1, 3, v20, &v22);
  }
}
