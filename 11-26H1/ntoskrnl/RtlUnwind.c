/*
 * XREFs of RtlUnwind @ 0x1403D95A0
 * Callers:
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     __longjmp_internal @ 0x140727570 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

void __cdecl RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  ULONG v8; // edx
  char v9; // al
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF

  if ( (_BYTE)KiKernelCetEnabled )
  {
    v8 = 1048715;
    v9 = 5;
  }
  else
  {
    v8 = 1048587;
    v9 = 1;
  }
  v10 = (v9 & 4) == 0;
  v11 = 1296;
  if ( v10 )
    v11 = 1264;
  v12 = (unsigned int)(v11 + 15);
  v13 = (unsigned int)v12;
  v14 = v12 + 15;
  if ( v14 <= v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextEx, v8, &ContextEx, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextEx, 0LL);
}
