/*
 * XREFs of ?UpdateSizeConstraints@SecondaryViewInfo@JointResize@@QEAAXPEAUIImmersiveMonitor@@@Z @ 0x18051848C
 * Callers:
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x180515068 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x1805140A4 (--$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JointResize::SecondaryViewInfo::UpdateSizeConstraints(
        JointResize::SecondaryViewInfo *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v4 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this)(
         *(_QWORD *)this,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v12);
  v5 = *(_QWORD *)this;
  if ( v4 < 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int64 *, __int64 *))(*(_QWORD *)v5 + 280LL))(
           v5,
           a2,
           &v10,
           &v11);
    v7 = retaddr;
    if ( v6 < 0 )
    {
      v8 = 110LL;
      goto LABEL_6;
    }
    JointResizeTelemetry::UpdateSizeConstraints<unsigned __int64,long &,long &,long &,long &>();
    *((_QWORD *)this + 7) = v10;
    if ( !*((_BYTE *)this + 64) )
      *((_BYTE *)this + 64) = 1;
    *(_QWORD *)((char *)this + 68) = v11;
    if ( !*((_BYTE *)this + 76) )
      *((_BYTE *)this + 76) = 1;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 304LL))(v5);
    v7 = retaddr;
    if ( v6 < 0 )
    {
      v8 = 103LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v7,
        (void *)v8,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
}
