/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x180041D60
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(void *a1, int a2)
{
  unsigned int v3; // ebx
  int Process; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  volatile signed __int32 *v8; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+28h] [rbp-48h]
  __int64 v10[2]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  __int64 *v12; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v14; // [rsp+90h] [rbp+20h] BYREF

  if ( a2 > 1 )
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return v3;
  }
  if ( g_ApplicationManager )
  {
    v14 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v14);
    v3 = Process;
    if ( Process < 0 )
    {
      v6 = (unsigned int)Process;
      v7 = 492LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v6);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v14);
      return v3;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v8,
      (__int64 *)&v14);
    v9 = a2;
    v10[0] = (__int64)off_1800537D8;
    v10[1] = (__int64)v8;
    v12 = v10;
    v8 = 0LL;
    v11 = a2;
    v3 = QueueGenericWorkItem(v10);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v8);
    if ( (v3 & 0x80000000) != 0 )
    {
      v6 = v3;
      v7 = 497LL;
      goto LABEL_9;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v14);
  }
  return 0LL;
}
