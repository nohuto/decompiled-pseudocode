/*
 * XREFs of RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$copy@$$CBE$0?0E$0?0@gsl@@YAXV?$span@$$CBE$0?0@0@V?$span@E$0?0@0@@Z @ 0x1404C4544 (--$copy@$$CBE$0-0E$0-0@gsl@@YAXV-$span@$$CBE$0-0@0@V-$span@E$0-0@0@@Z.c)
 *     ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x140A6AF88 (-RtlpFindFunctionOverrideDvrtRecord@@YAJV-$span@$$CBE$0-0@gsl@@PEAV12@@Z.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCreateFunctionOverrideFixupInfo(
        gsl::details *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  int v8; // r14d
  gsl::details *v9; // r10
  void *v10; // rdi
  unsigned __int64 v11; // rax
  int FunctionOverrideDvrtRecord; // eax
  unsigned int FunctionOverrideFixupInfo; // ebx
  unsigned __int64 v14; // rbx
  __int64 Pool2; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-10h]

  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  v18 = 0uLL;
  v11 = (unsigned int)a2;
  if ( !a1 && (_DWORD)a2
    || (*a7 = 0LL, a1 = (gsl::details *)(*(unsigned int *)(a4 + 4) + 8LL), a2 = a3, v11 < a3)
    || v11 - a3 < (unsigned __int64)a1 )
  {
LABEL_4:
    gsl::details::terminate(a1, a2);
    __debugbreak();
  }
  v17[0] = *(unsigned int *)(a4 + 4) + 8LL;
  v17[1] = (char *)v9 + a3;
  FunctionOverrideDvrtRecord = RtlpFindFunctionOverrideDvrtRecord(v17, &v18);
  FunctionOverrideFixupInfo = FunctionOverrideDvrtRecord;
  if ( FunctionOverrideDvrtRecord == -1073741275 || FunctionOverrideDvrtRecord == -1073741637 )
  {
    FunctionOverrideFixupInfo = 0;
  }
  else if ( FunctionOverrideDvrtRecord >= 0 )
  {
    v14 = v18;
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    v17[0] = Pool2;
    if ( Pool2 )
    {
      if ( v14 == -1LL )
        goto LABEL_4;
      v19 = v14;
      v20 = Pool2;
      gsl::copy<unsigned char const,-1,unsigned char,-1>((unsigned __int64 *)&v18, &v19);
      v19 = v14;
      v20 = (__int64)v10;
      FunctionOverrideFixupInfo = RtlpCreateFunctionOverrideFixupInfo((unsigned int)&v19, v8, a5, a6, (__int64)a7, a8);
    }
    else
    {
      FunctionOverrideFixupInfo = -1073741801;
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return FunctionOverrideFixupInfo;
}
