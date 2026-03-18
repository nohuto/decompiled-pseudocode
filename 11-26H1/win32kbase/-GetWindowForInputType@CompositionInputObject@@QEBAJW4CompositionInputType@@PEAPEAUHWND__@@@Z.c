/*
 * XREFs of ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x14006EC50
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1400A3194 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::GetWindowForInputType(_QWORD *a1, int a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  *a3 = 0LL;
  RIMLockShared(a1 + 4);
  v6 = a2 - 1;
  if ( v6 )
  {
    v10 = v6 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            *a3 = 0LL;
            v8 = -1073741811;
            goto LABEL_4;
          }
          v7 = a1[12];
        }
        else
        {
          v7 = a1[11];
        }
      }
      else
      {
        v7 = a1[10];
      }
    }
    else
    {
      v7 = a1[9];
    }
  }
  else
  {
    v7 = a1[8];
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 32LL))(v7, a3);
LABEL_4:
  CPushLock::ReleaseLock((CPushLock *)(a1 + 4));
  return v8;
}
