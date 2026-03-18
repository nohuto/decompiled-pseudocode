/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x18017905C
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180178FA0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@AEAUInteractionOutput@@@Z @ 0x180179428 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadT.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179720 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct ManipulationThreadTelemetryData *a6,
        struct IDCompositionInteractionStats *a7,
        _DWORD *a8)
{
  unsigned int v8; // r12d
  bool v12; // r15
  char v14; // cl
  __int64 v15; // rbx
  struct IDCompositionInteractionStats *v16; // r15
  bool v17; // r9
  bool v18; // r8
  __int64 v19; // rax
  bool v20; // r9
  unsigned __int8 v21; // cl
  __int64 v22; // rax
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  _DWORD v25[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  _BYTE v31[64]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = 0;
  v24 = a3;
  if ( a8 )
    *a8 = 1;
  v12 = (*(_BYTE *)(a1 + 808) & 0x20) != 0 && *(_DWORD *)(a1 + 784) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2) == 2
    && *(_DWORD *)(a1 + 788) == 3
    || v12
    || *(_DWORD *)(a1 + 788) == 6 )
  {
    if ( a8 )
      *a8 = 2;
    v14 = *(_BYTE *)(a1 + 808);
    if ( (v14 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 808) = (16 * a4) | v14 & 0xEF;
      if ( !a5 )
      {
        v23 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v23);
        CInteractionProcessor::GetInteractionContext(a1, *(unsigned int *)(a1 + 788), &v23);
        v15 = v23;
        if ( !v23 )
          return v8;
        v29 = 0LL;
        v30 = 0;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        if ( a4 )
        {
          if ( (*(_BYTE *)(a1 + 808) & 0x20) != 0
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, 0LL) )
            {
              v16 = a7;
              if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int128 *))(*(_QWORD *)v15 + 120LL))(
                     v15,
                     *(_QWORD *)(a1 + 832),
                     v24,
                     a1 + 1180,
                     &v26) )
              {
                CInteractionProcessor::ProcessOutput(
                  (CInteractionProcessor *)a1,
                  a2,
                  a4,
                  v20,
                  a6,
                  a7,
                  (struct InteractionOutput *)&v26);
              }
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 128LL))(v15);
            }
            else
            {
              v16 = a7;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 80LL))(v15, 0LL);
          }
          else
          {
            v16 = a7;
          }
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v15 + 56LL))(v15, a1 + 1180, &v26);
          if ( (v8 & 0x80000000) != 0 )
            goto LABEL_23;
          v18 = a4;
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 96LL))(v23, 0LL) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 128LL))(v15);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 80LL))(v15, 0LL);
          }
          v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 40LL))(v15, v31);
          v16 = a7;
          v18 = 0;
          v26 = *(_OWORD *)v19;
          v27 = *(_OWORD *)(v19 + 16);
          v28 = *(_OWORD *)(v19 + 32);
          v29 = *(_QWORD *)(v19 + 48);
          v30 = *(_DWORD *)(v19 + 56);
        }
        CInteractionProcessor::ProcessOutput(
          (CInteractionProcessor *)a1,
          a2,
          v18,
          v17,
          a6,
          v16,
          (struct InteractionOutput *)&v26);
LABEL_23:
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        return v8;
      }
      v21 = *(_BYTE *)(a1 + 148);
      v25[1] = *(_DWORD *)(a1 + 812);
      v25[2] = *(_DWORD *)(a1 + 816);
      v25[3] = *(_DWORD *)(a1 + 820);
      v25[0] = 3;
      v25[4] = ((v21 >> 4) ^ 4) & 1 ^ 4 ^ ((v21 >> 4) ^ ((v21 >> 4) ^ 4) & 1 ^ 4) & 2;
      (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v25);
      if ( a5 == 2 )
      {
        v22 = *(_QWORD *)a2;
        v25[0] = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(v22 + 32))(a2, v25);
      }
      *(_DWORD *)(a1 + 1268) = a5;
    }
  }
  return v8;
}
