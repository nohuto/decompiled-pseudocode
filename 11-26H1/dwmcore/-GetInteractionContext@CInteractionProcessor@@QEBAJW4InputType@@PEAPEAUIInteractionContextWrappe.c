/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179720
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x180178D1C (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180178E50 (-GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x180178E64 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x180178F14 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x18017905C (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179710 (-GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(CInteractionProcessor *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // edx
  __int64 (__fastcall ***v9)(_QWORD); // rax
  int v10; // edx

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1);
      *a3 = *(_QWORD *)a1;
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return v3;
      if ( !*((_QWORD *)a1 + 60) )
        return (unsigned int)-2147019873;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 60);
      v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 60);
    }
    else
    {
      if ( !CInteractionProcessor::AllowPenGestureDetection(a1) )
        return (unsigned int)-2147467259;
      if ( !*((_QWORD *)a1 + 40) )
        return (unsigned int)-2147019873;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 40);
      v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 40);
    }
LABEL_7:
    *a3 = v9;
    return v3;
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 20);
    v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 20);
    goto LABEL_7;
  }
  return (unsigned int)-2147019873;
}
