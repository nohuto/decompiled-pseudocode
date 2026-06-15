/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18003C5B0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x18002819C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 *     ??$emplace_back@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAAEAKAEAK@Z @ 0x180042FF4 (--$emplace_back@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAAEAKAEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdScreenReaderStateChanged(__int64 a1, int a2, int a3, float a4, struct TSSession *a5)
{
  DWORD v6; // edi
  int v7; // ebx
  struct TSSession *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  const char *v11; // r9
  __int64 result; // rax
  struct TSSession *v13; // rsi
  float v14; // xmm8_4
  int *v15; // rdi
  int *v16; // rax
  float v17; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v18[4]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  v6 = a1;
  CWindowsPolicyManager::Lock(a1, v18);
  v7 = 0;
  v8 = a5;
  *(_DWORD *)a5 = 0;
  a5 = 0LL;
  try
  {
    v9 = TsSessionFromSessionId(v6, 1, &a5);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v13 = a5;
      v14 = *((float *)a5 + 252);
      v15 = (int *)((char *)a5 + 984);
      std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
        &a5,
        *((_QWORD *)a5 + 123),
        *((_QWORD *)a5 + 124),
        (unsigned int *)&v20);
      v16 = (int *)*((_QWORD *)v15 + 1);
      if ( a3 )
      {
        if ( a5 == (struct TSSession *)v16 )
          std::vector<unsigned long>::emplace_back<unsigned long &>(v15, &v20);
        v17 = ConvertDbToEngineVolume(COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N24_0)));
        *((float *)v13 + 252) = fmaxf(v17, fminf(ConvertDbToEngineVolume(0.0), a4));
      }
      else
      {
        if ( a5 != (struct TSSession *)v16 )
        {
          std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>(
            (char *)a5 + 4,
            *((_QWORD *)v15 + 1),
            a5);
          *((_QWORD *)v15 + 1) -= 4LL;
          v16 = (int *)*((_QWORD *)v15 + 1);
        }
        if ( v16 == *(int **)v15 )
          *((_DWORD *)v13 + 252) = 1065353216;
      }
      if ( v14 != *((float *)v13 + 252) )
        v7 = 1;
      *(_DWORD *)v8 = v7;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v18);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77F,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v9);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v18);
      result = v10;
    }
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x7A0,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v11);
    return (unsigned int)a5;
  }
  return result;
}
