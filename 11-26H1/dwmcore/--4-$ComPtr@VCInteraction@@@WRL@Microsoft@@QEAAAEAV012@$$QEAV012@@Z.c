/*
 * XREFs of ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180246354
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteraction>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
  return a1;
}
