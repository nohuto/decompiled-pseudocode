/*
 * XREFs of PbmSetScreenReaderState @ 0x180041FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int Process; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  volatile signed __int32 *v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+2Ch] [rbp-44h]
  __int64 v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int64 *v16; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v18; // [rsp+98h] [rbp+28h] BYREF

  if ( g_ApplicationManager )
  {
    v18 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v18);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = (unsigned int)Process;
      v8 = 564LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v7);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
      return (unsigned int)v6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v10,
      (__int64 *)&v18);
    v11 = a2;
    v13[0] = (__int64)off_180053778;
    v13[1] = (__int64)v10;
    v16 = v13;
    v12 = a3;
    v10 = 0LL;
    v14 = a2;
    v15 = a3;
    v6 = QueueGenericWorkItem(v13);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v10);
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 569LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v18);
  }
  return 0LL;
}
