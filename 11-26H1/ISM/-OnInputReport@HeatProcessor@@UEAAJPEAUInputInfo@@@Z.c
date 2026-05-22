/*
 * XREFs of ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800656A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006575C (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008F820 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HeatProcessor::OnInputReport(HeatProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)a2 == 2048 )
  {
    if ( HeatProcessor::HeatCoreProcessingEnabled(this) )
    {
      v4 = *((_QWORD *)this + 10);
      if ( v4 )
      {
        v7[0] = *((_DWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        v7[1] = *((_DWORD *)a2 + 2);
        v9 = *((_QWORD *)a2 + 9);
        v10 = *((_DWORD *)a2 + 16);
        v11 = 0;
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 48LL))(v4, v7);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFB,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
            (const char *)(unsigned int)v5,
            v7[0]);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xE9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x80070057LL,
      v7[0]);
  }
  return 0LL;
}
