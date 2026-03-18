/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800E5408
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC (-UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 * Callees:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CVisual *this, const struct CMILMatrix *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // r9
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // r8

  if ( (*((_BYTE *)this + 101) & 0x10) != 0 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = *(_QWORD *)(v4 + 640);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = *(_QWORD *)(v4 + 640);
      v7 = v6;
      if ( !v6 )
        goto LABEL_11;
      v8 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 5704LL);
      if ( GetCurrentThreadId() != v8 )
      {
        CManipulationManager::QueueMidManipulationUpdate(v6, 4LL, this);
        v7 = v6;
LABEL_12:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        return;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0x_EventWriteTransfer(v9, &MIDMANIPULATION_UPDATE_VISUAL_PROP, this);
      v15 = (_DWORD *)*((_QWORD *)this + 28);
      v7 = v6;
      if ( (*v15 & 0x2000000) == 0 )
        goto LABEL_12;
      v10 = (unsigned int)v15[1];
      v11 = v15 + 2;
      v12 = 0LL;
      if ( (_DWORD)v10 )
      {
        while ( *v11 != 7 )
        {
          v12 = (unsigned int)(v12 + 1);
          ++v11;
          if ( (unsigned int)v12 >= (unsigned int)v10 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        if ( (unsigned int)v12 >= (unsigned int)v10 )
        {
          v13 = 0LL;
LABEL_9:
          v14 = *v13;
          if ( v14 )
          {
            *(_OWORD *)(v14 + 128) = *(_OWORD *)a2;
            *(_OWORD *)(v14 + 144) = *((_OWORD *)a2 + 1);
            *(_OWORD *)(v14 + 160) = *((_OWORD *)a2 + 2);
            *(_OWORD *)(v14 + 176) = *((_OWORD *)a2 + 3);
            *(_DWORD *)(v14 + 192) = *((_DWORD *)a2 + 16);
          }
LABEL_11:
          if ( !v7 )
            return;
          goto LABEL_12;
        }
      }
      v13 = (__int64 *)((char *)&v15[2 * v12] + ((v10 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      goto LABEL_9;
    }
  }
}
