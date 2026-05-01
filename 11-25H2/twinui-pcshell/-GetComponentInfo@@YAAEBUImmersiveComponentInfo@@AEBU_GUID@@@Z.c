/*
 * XREFs of ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803DBE58
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803CF318 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803CFF30 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 */

GUID **__fastcall GetComponentInfo(const struct _GUID *a1)
{
  GUID **result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( result = (GUID **)&off_1806E2750; result != (GUID **)&CGameEntry::`vftable'; result += 4 )
  {
    v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v3 )
      return result;
  }
  for ( result = &off_180896510; result != (GUID **)&off_180896630; result += 4 )
  {
    v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v4 )
      return result;
  }
  for ( result = &off_1808964D0; result != &off_180896510; result += 4 )
  {
    v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v5 )
      return result;
  }
  if ( dword_18089DE0C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089DE0C);
    if ( dword_18089DE0C == -1 )
    {
      xmmword_18089A8C0 = 0LL;
      Init_thread_footer(&dword_18089DE0C);
    }
  }
  return (GUID **)&off_180896630;
}
