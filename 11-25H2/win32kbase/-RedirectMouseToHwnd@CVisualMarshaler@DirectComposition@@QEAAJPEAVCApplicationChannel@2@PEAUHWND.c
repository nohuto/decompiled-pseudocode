/*
 * XREFs of ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1401007CC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x140064F20 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x140068A1C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x14006913C (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x140069674 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14009B614 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?SetMouseConfigHelper@DirectComposition@@YAXU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@00PEAU2@@Z @ 0x1402370F8 (-SetMouseConfigHelper@DirectComposition@@YAXU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMouse.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  int WindowForInputType; // edi
  __int64 v9; // rcx
  DirectComposition::CInteractionMarshaler *v12; // rax
  DirectComposition::CInteractionMarshaler *v13; // rbx
  _QWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r8d
  int v20; // r10d
  DirectComposition::CInteractionMarshaler *v22; // [rsp+30h] [rbp-D0h] BYREF
  HWND v23; // [rsp+38h] [rbp-C8h] BYREF
  void *v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[38]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+1B0h] [rbp+B0h] BYREF

  WindowForInputType = 0;
  v23 = 0LL;
  v9 = *((_QWORD *)this + 27);
  if ( !v9 )
  {
    v13 = 0LL;
    v22 = 0LL;
LABEL_8:
    if ( a3 == v23 )
      goto LABEL_21;
    v24 = 0LL;
    WindowForInputType = DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
                           this,
                           a2,
                           0,
                           1,
                           L"RedirectMouse",
                           &v22);
    if ( WindowForInputType >= 0 )
    {
      memset(v25, 0, 0x128uLL);
      LODWORD(v25[0]) = 232;
      if ( a4 )
      {
        v15 = *(_OWORD *)a4;
        LODWORD(v25[1]) = 3;
        v16 = *((_OWORD *)a4 + 1);
        *(_OWORD *)&v25[3] = v15;
        v25[7] = *((_QWORD *)a4 + 4);
        *(_OWORD *)&v25[5] = v16;
      }
      else
      {
        LODWORD(v25[1]) = 2;
      }
      LODWORD(v25[8]) = 0;
      LODWORD(v25[15]) = 0;
      LODWORD(v25[22]) = 0;
      v25[2] = a3;
      WindowForInputType = CompositionInputObject::KernelCreateCompositionInputSink(
                             (const struct COMPOSITION_INPUT_SINK_V2 *)v25,
                             &v24);
      if ( WindowForInputType >= 0 )
      {
        v13 = v22;
        WindowForInputType = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v22, v24, (bool *)&v26);
        if ( WindowForInputType >= 0 )
        {
LABEL_21:
          if ( v13 )
          {
            v26 = *((_DWORD *)v13 + 35);
            DirectComposition::SetMouseConfigHelper(32831LL, a5, a6, &v26);
            DirectComposition::SetMouseConfigHelper(256LL, v17, v18, &v26);
            v19 = v26;
            if ( v26 != v20 )
            {
              *((_DWORD *)v13 + 17) |= 1u;
              *((_DWORD *)v13 + 35) = v19;
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v13);
            }
          }
        }
      }
    }
    return (unsigned int)WindowForInputType;
  }
  v12 = (DirectComposition::CInteractionMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(v9);
  v22 = v12;
  v13 = v12;
  if ( !v12 )
    goto LABEL_8;
  v14 = (_QWORD *)*((_QWORD *)v12 + 33);
  if ( v14 )
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v14, 1, &v23);
  if ( WindowForInputType >= 0 )
    goto LABEL_8;
  return (unsigned int)WindowForInputType;
}
