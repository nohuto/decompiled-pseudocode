/*
 * XREFs of ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EDD44
 * Callers:
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x14022839C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1402DFC7C (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402E0518 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14012ED30 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14021A32C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x140228898 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1402EDC14 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1402EDFC0 (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1402EE084 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 */

void __fastcall InteractiveControlDevice::SetFocus(__int64 a1, struct tagWND *a2, unsigned int a3, int a4)
{
  int v4; // ebx
  struct _LIST_ENTRY *v5; // rsi
  __int64 v10; // rax
  struct InteractiveControlInput *v11; // r15
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  InteractiveControlInput *v14; // rax
  InteractiveControlInput *v15; // r13
  __int64 v16; // rcx
  InteractiveControlInput *v17; // rax
  struct _LIST_ENTRY *v18; // r15
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
      v10 = 0LL;
      if ( a2 )
        v10 = *(_QWORD *)a2;
      v11 = v21;
      v12 = *((_QWORD *)v21 + 2);
      if ( v12 == v10 )
        goto LABEL_20;
      v13 = (struct tagWND *)ValidateHwnd(v12);
      if ( v13 )
        InteractiveControlInput::GenerateMessages((__int64)v11, v13, *(_DWORD *)(a1 + 64), 0x10u);
      v14 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v14 )
        v15 = InteractiveControlInput::InteractiveControlInput(v14, (struct InteractiveControlDevice *)a1);
      else
        v15 = 0LL;
      *(_OWORD *)((char *)v15 + 52) = *(_OWORD *)((char *)v11 + 52);
      *(_QWORD *)((char *)v15 + 68) = *(_QWORD *)((char *)v11 + 68);
      *((_DWORD *)v15 + 19) = *((_DWORD *)v11 + 19);
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v5, (struct _LIST_ENTRY *)v15);
      v16 = (__int64)v15;
    }
    else
    {
      v17 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v17 )
        v18 = (struct _LIST_ENTRY *)InteractiveControlInput::InteractiveControlInput(
                                      v17,
                                      (struct InteractiveControlDevice *)a1);
      else
        v18 = 0LL;
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v5, v18);
      v16 = (__int64)v18;
    }
    InteractiveControlInput::GenerateMessages(v16, a2, a3, 8u);
LABEL_20:
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
