/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180006AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int Process; // eax
  volatile int *v9; // rdx
  struct CProcess *v10; // r8
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h]
  int v14; // [rsp+2Ch] [rbp-44h]
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  _QWORD *v18; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v20; // [rsp+98h] [rbp+28h] BYREF

  v20 = 0LL;
  if ( a2 < 2 )
  {
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v20);
      v5 = Process;
      if ( Process < 0 )
      {
        v7 = (unsigned int)Process;
        v6 = 262LL;
        goto LABEL_6;
      }
      v10 = v20;
      if ( v20 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CProcess *)((char *)v20 + 20), v9);
      v13 = a2;
      v15[0] = off_1800530F0;
      v14 = a3;
      v18 = v15;
      v12 = 0LL;
      v15[1] = v10;
      v16 = a2;
      v17 = a3;
      v5 = QueueGenericWorkItem(v15);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v12);
      if ( v5 < 0 )
      {
        v7 = (unsigned int)v5;
        v6 = 267LL;
        goto LABEL_6;
      }
    }
    v5 = 0;
    goto LABEL_12;
  }
  v5 = -2147024809;
  v6 = 258LL;
  v7 = 2147942487LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)v7,
    v12);
LABEL_12:
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v20);
  return (unsigned int)v5;
}
