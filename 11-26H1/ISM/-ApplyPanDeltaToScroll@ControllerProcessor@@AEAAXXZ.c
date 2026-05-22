/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x18017D110
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x18017D514 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017FAF0 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float *v2; // rbx
  float v4; // xmm7_4
  int v5; // edi
  __int16 v6; // ax
  int v7; // eax
  int v8[23]; // [rsp+20h] [rbp-258h] BYREF
  __int16 v9; // [rsp+7Ch] [rbp-1FCh]
  __int16 v10; // [rsp+7Eh] [rbp-1FAh]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v1 = *((float *)this + 107);
  v2 = (float *)((char *)this + 432);
  if ( v1 != 0.0 || *v2 != 0.0 )
  {
    LODWORD(v4) = *(_DWORD *)v2 & _xmm;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v4 )
      v5 = (int)*v2;
    else
      LOWORD(v5) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo(this, v8, 0LL);
    v6 = 2048;
    v10 = v5;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v4 )
      v6 = 1024;
    v9 = v6;
    v7 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v8);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x75D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
    *((_DWORD *)this + 107) = 0;
    *v2 = 0.0;
  }
}
