/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x180178F14
 * Callers:
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x180178F00 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x1802270F0 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179720 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  char v5; // di
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = *(_DWORD *)(a1 + 788);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v7);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return v5;
  }
  else
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
    return 0;
  }
}
