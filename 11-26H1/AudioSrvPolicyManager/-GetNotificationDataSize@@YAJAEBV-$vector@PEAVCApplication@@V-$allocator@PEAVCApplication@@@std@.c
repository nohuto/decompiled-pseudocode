/*
 * XREFs of ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002DF94
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180015A9C (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800153A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180026C50 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800286A0 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetNotificationDataSize(__int64 **a1, unsigned __int64 *a2, __int64 a3, const char *a4)
{
  __int64 *v5; // rbx
  __int64 *v6; // r14
  int SmtcProcesses; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  try
  {
    while ( v5 != v6 )
    {
      LODWORD(v19) = 0;
      SmtcProcesses = CApplication::GetSmtcProcesses(*v5, 0LL, &v19);
      v8 = SmtcProcesses;
      if ( SmtcProcesses < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x154,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)SmtcProcesses);
        return v8;
      }
      v20 = 0LL;
      v10 = StringCbLengthW(*(const unsigned __int16 **)(*v5 + 24), 0x800uLL, &v20);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x159,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v21 = 0LL;
      v12 = ULongLongMult((unsigned int)v19, v20 + 14, &v21);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x166,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      v14 = *a2;
      v15 = *a2 + v21;
      v16 = -1LL;
      if ( v15 >= *a2 )
        v16 = *a2 + v21;
      v17 = v15 < *a2 ? 0x80070216 : 0;
      *a2 = v16;
      if ( v15 < v14 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x168,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v17);
        return v17;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16D,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           a4);
  }
  return result;
}
