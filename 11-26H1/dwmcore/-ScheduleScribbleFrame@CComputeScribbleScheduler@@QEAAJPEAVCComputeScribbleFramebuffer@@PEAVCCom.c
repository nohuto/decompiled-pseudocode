/*
 * XREFs of ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x180132BD4
 * Callers:
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x18013110C (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180132D2C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 *     ?GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXPEAVCComputeScribble@@PEAN1@Z @ 0x180132E78 (-GetWakeupTimeBeforeVBlank@CComputeScribbleScheduler@@AEAAXPEAVCComputeScribble@@PEAN1@Z.c)
 *     ?SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z @ 0x180132F84 (-SetScribble@CComputeScribbleFramebuffer@@QEAAXPEAVCComputeScribble@@@Z.c)
 *     McTemplateU0xqf_EventWriteTransfer @ 0x18025D4C0 (McTemplateU0xqf_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ScheduleScribbleFrame(
        HANDLE *this,
        struct CComputeScribbleFramebuffer *a2,
        struct CComputeScribble *a3,
        __int64 a4,
        unsigned int a5)
{
  double v9; // xmm6_8
  int v10; // eax
  double i; // xmm0_8
  unsigned int v12; // r9d
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  __int64 v17; // rdx
  float v18; // xmm0_4
  double v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  double v22; // [rsp+80h] [rbp+8h] BYREF

  if ( !WaitForSingleObject(this[8], 0) )
  {
    v13 = -2147467259;
    v17 = 217LL;
    goto LABEL_8;
  }
  v22 = 0.0;
  v19 = 0.0;
  CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank((CComputeScribbleScheduler *)this, a3, &v22, &v19);
  v9 = v22;
  v10 = 0;
  for ( i = v22; i > *((double *)this + 6); ++v10 )
    i = i - *((double *)this + 6);
  v12 = *((_DWORD *)a2 + 65);
  *(double *)&v20[2] = i;
  *(double *)&v20[3] = v19;
  *(double *)&v20[1] = v22;
  v20[0] = a4;
  v13 = CComputeScribbleScheduler::Schedule(
          (CComputeScribbleScheduler *)this,
          (const struct CComputeScribbleScheduler::ScribbleFrame *)v20,
          a5 - v10,
          v12);
  if ( v13 < 0 )
  {
    v17 = 241LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  CComputeScribbleFramebuffer::SetScribble(a2, a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    v18 = v9;
    McTemplateU0xqf_EventWriteTransfer(v15, v14, a4, *((_DWORD *)a2 + 65), SLOBYTE(v18));
  }
  return 0LL;
}
