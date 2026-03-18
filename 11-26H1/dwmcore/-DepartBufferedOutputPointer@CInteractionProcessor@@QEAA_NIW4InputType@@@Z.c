/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x180178D1C
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z @ 0x180219650 (-DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x180226F60 (-DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179720 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::DepartBufferedOutputPointer(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbx
  char v6; // di
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 788);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v8);
  v5 = v8;
  if ( v8 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return v6;
  }
  else
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
    return 0;
  }
}
