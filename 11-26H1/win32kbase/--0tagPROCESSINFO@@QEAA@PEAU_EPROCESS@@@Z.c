/*
 * XREFs of ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x1401D7A2C
 * Callers:
 *     AllocateW32ProcessImpl @ 0x14018A480 (AllocateW32ProcessImpl.c)
 * Callees:
 *     GdiPreUserProcessCallout @ 0x14015E660 (GdiPreUserProcessCallout.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14018A5D8 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___ @ 0x1401D7964 (W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1___.c)
 */

tagPROCESSINFO *__fastcall tagPROCESSINFO::tagPROCESSINFO(tagPROCESSINFO *this, struct _EPROCESS *a2)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int ProcessSessionId; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  tagPROCESSINFO *v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_WORD *)this + 580) = 0;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 149) = 0LL;
  *((_DWORD *)this + 291) = 5;
  *((_DWORD *)this + 296) = 1;
  *((_BYTE *)this + 1200) = 0;
  *((_QWORD *)this + 131) = (char *)this + 1040;
  *((_QWORD *)this + 130) = (char *)this + 1040;
  *((_QWORD *)this + 147) = (char *)this + 1168;
  *((_QWORD *)this + 146) = (char *)this + 1168;
  *((_QWORD *)this + 138) = (char *)this + 1096;
  *((_QWORD *)this + 137) = (char *)this + 1096;
  *((_QWORD *)this + 141) = (char *)this + 1120;
  *((_QWORD *)this + 140) = (char *)this + 1120;
  *((_QWORD *)this + 143) = (char *)this + 1136;
  *((_QWORD *)this + 142) = (char *)this + 1136;
  SystemPrng(&v10, 8LL);
  v4 = v10;
  if ( !v10 )
  {
    v4 = 1LL;
    v10 = 1LL;
  }
  *((_QWORD *)this + 35) = v4;
  GdiPreUserProcessCallout(this, 1);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 14) = (unsigned int)PsGetProcessId(a2) & 0xFFFFFFFC;
  if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = this;
    ProcessSessionId = PsGetProcessSessionIdEx(a2);
    W32ExecuteUsingSessionGlobal__lambda_1839429666e7d4e107cc1be8117e59e1_(ProcessSessionId, (__int64)&v11);
  }
  else
  {
    *((_QWORD *)this + 151) = W32GetUserSessionState(v6, v5, v7);
  }
  return this;
}
