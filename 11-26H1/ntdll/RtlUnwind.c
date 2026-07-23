/*
 * XREFs of RtlUnwind @ 0x1800B18E0
 * Callers:
 *     _local_unwind @ 0x180127F80 (_local_unwind.c)
 *     __longjmp_internal @ 0x180164430 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __int64 v4; // rbx
  ULONG64 v8; // rdi
  ULONG v9; // esi
  PCONTEXT_EX v10; // r14
  char v11; // r11
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rax
  void *v15; // rsp
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF
  PVOID TargetFramea; // [rsp+38h] [rbp+8h]

  v4 = 0LL;
  TargetFramea = TargetFrame;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    v8 = 2048LL;
    v9 = 1048651;
  }
  else
  {
    v8 = 0LL;
    v9 = 1048587;
  }
  LODWORD(ContextEx) = 0;
  v10 = (PCONTEXT_EX)v8;
  if ( (int)RtlpValidateContextFlags2(v9, &ContextEx, 2147353560LL) >= 0 )
  {
    v11 = (char)ContextEx;
    v12 = 1264;
    if ( ((unsigned __int8)ContextEx & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        ContextEx = (PCONTEXT_EX)(v8 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL));
        RtlpRemoveArchDisallowedXStateFeatures(v9, &ContextEx);
        v10 = ContextEx;
      }
      v12 = RtlpGetEntireXStateAreaLength2(v10, 2147353560LL) + 800;
    }
    v13 = v12 + 32;
    if ( (v11 & 4) == 0 )
      v13 = v12;
    v4 = (unsigned int)(v13 + 15);
  }
  v14 = v4 + 15;
  if ( v4 + 15 <= (unsigned __int64)(unsigned int)v4 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextEx, v9, &ContextEx, v8);
  RtlUnwindEx(TargetFramea, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextEx, 0LL);
}
