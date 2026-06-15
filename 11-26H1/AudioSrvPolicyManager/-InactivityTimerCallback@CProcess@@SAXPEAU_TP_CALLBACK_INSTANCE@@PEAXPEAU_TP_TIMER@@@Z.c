/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x180024664 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CProcess::InactivityTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, __int64 a2, struct _TP_TIMER *a3)
{
  int v3; // eax
  volatile signed __int32 *v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  volatile signed __int32 *v7; // [rsp+98h] [rbp+28h] BYREF

  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(&v4, a2);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    (__int64 *)&v7,
    (__int64 *)&v4);
  v5[1] = (__int64)v7;
  v5[0] = (__int64)off_1800534C8;
  v5[7] = (__int64)v5;
  v7 = 0LL;
  v3 = QueueGenericWorkItem(v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD08,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v3,
      (int)v4);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v7);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v4);
}
