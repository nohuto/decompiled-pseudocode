/*
 * XREFs of ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x14016AC04
 * Callers:
 *     AllocateW32ProcessImpl @ 0x14016AD30 (AllocateW32ProcessImpl.c)
 * Callees:
 *     GdiPreUserProcessCallout @ 0x140120610 (GdiPreUserProcessCallout.c)
 *     W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___ @ 0x1401B53FC (W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401B64E0 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 */

tagPROCESSINFO *__fastcall tagPROCESSINFO::tagPROCESSINFO(tagPROCESSINFO *this, struct _EPROCESS *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int ProcessSessionId; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  tagPROCESSINFO *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_WORD *)this + 568) = 0;
  *((_QWORD *)this + 148) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_DWORD *)this + 285) = 5;
  *((_DWORD *)this + 290) = 1;
  *((_BYTE *)this + 1176) = 0;
  *((_QWORD *)this + 131) = (char *)this + 1040;
  *((_QWORD *)this + 130) = (char *)this + 1040;
  *((_QWORD *)this + 144) = (char *)this + 1144;
  *((_QWORD *)this + 143) = (char *)this + 1144;
  *((_QWORD *)this + 140) = (char *)this + 1112;
  *((_QWORD *)this + 139) = (char *)this + 1112;
  *((_QWORD *)this + 138) = (char *)this + 1096;
  *((_QWORD *)this + 137) = (char *)this + 1096;
  SystemPrng(&v9, 8LL);
  v4 = v9;
  if ( !v9 )
  {
    v4 = 1LL;
    v9 = 1LL;
  }
  *((_QWORD *)this + 35) = v4;
  GdiPreUserProcessCallout(this, 1);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 14) = (unsigned int)PsGetProcessId(a2) & 0xFFFFFFFC;
  if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = this;
    ProcessSessionId = PsGetProcessSessionIdEx(a2);
    W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1_(ProcessSessionId, &v10);
  }
  else
  {
    *((_QWORD *)this + 148) = W32GetUserSessionState(v6, v5);
  }
  return this;
}
