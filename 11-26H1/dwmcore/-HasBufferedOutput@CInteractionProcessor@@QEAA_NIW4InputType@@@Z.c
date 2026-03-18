/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x180178E64
 * Callers:
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x180178E30 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180226FD0 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179720 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rbx
  char v7; // di
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = *(_DWORD *)(a1 + 788);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v9);
  CInteractionProcessor::GetInteractionContext(a1, v3, &v9);
  v6 = v9;
  if ( v9 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v7;
  }
  else
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v9);
    return 0;
  }
}
