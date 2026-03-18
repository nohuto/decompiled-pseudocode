/*
 * XREFs of RtlUnwind @ 0x1403D65D0
 * Callers:
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     __longjmp_internal @ 0x1407229A0 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 */

__int64 __fastcall RtlUnwind(ULONG_PTR a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v8; // rdx
  char v9; // al
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  int v17; // [rsp+30h] [rbp+0h] BYREF

  if ( (_BYTE)KiKernelCetEnabled )
  {
    v8 = 1048715LL;
    v9 = 5;
  }
  else
  {
    v8 = 1048587LL;
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
  RtlInitializeExtendedContext2(&v17, v8, &v17, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, &v17, 0LL);
}
