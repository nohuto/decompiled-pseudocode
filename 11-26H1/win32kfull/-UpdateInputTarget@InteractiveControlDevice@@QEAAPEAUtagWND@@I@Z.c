/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402FD944
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x140258CA4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402FCE84 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x140261B54 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1402F1000 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1402F10F8 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 */

struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax
  InteractiveControlManager *v7; // rax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  InteractiveControlManager *v13; // rax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9

  v3 = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 && ((unsigned int)a2 & *((_DWORD *)this + 14)) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
    {
      v7 = InteractiveControlManager::Instance(v4, a2);
      InteractiveControlManager::ClearBackgroundAccessors(v7, v8, v9, v10);
    }
    else
    {
      v6 = (__int64 *)InteractiveControlManager::Instance(v4, a2);
      InteractiveControlManager::SetDeviceFocus(v6, 0, 0LL, *((void **)this + 6));
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
    {
      v13 = InteractiveControlManager::Instance(v12, a2);
      InteractiveControlManager::ClearDeviceFocus(v13, v14, v15, v16);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
