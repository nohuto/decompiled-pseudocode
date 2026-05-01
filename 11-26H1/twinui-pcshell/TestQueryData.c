/*
 * XREFs of TestQueryData @ 0x18018E5FC
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18027EF88 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18028C014 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?begin_update@?$shared_data@$00$00$00@details@tip2@@AEAA_NXZ @ 0x1803BB548 (-begin_update@-$shared_data@$00$00$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803BB678 (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18069A450 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

FARPROC __fastcall TestQueryData(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestQueryData'::`2'::s_pfnTestQueryData;
  if ( `TestQueryData'::`2'::s_pfnTestQueryData )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _OWORD *))result)(a1, a2, a3, a4);
  KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestQueryData");
  `TestQueryData'::`2'::s_pfnTestQueryData = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _OWORD *))result)(a1, a2, a3, a4);
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
