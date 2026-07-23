/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x14040FEF8
 * Callers:
 *     PspReaper @ 0x14040FD60 (PspReaper.c)
 *     MmOutPageKernelStack @ 0x140410180 (MmOutPageKernelStack.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1405B66C0 (DbgkpLkmdSnapKernelStack.c)
 *     IoAddProcessThreadsToDump @ 0x1405D70CC (IoAddProcessThreadsToDump.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     PsDereferenceKernelStack @ 0x140B2BFD0 (PsDereferenceKernelStack.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-59h] BYREF
  __int128 v8; // [rsp+30h] [rbp-49h]
  __int128 v9; // [rsp+40h] [rbp-39h]
  __int128 v10; // [rsp+50h] [rbp-29h]
  _OWORD v11[4]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v7 + 1) = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v8 = v2;
  v9 = *(_OWORD *)(a1 + 1048);
  v10 = *(_OWORD *)(a1 + 1032);
  for ( *((_QWORD *)&v8 + 1) = v3; ; v3 = *((_QWORD *)&v8 + 1) )
  {
    v11[0] = v7;
    v11[1] = v8;
    v11[2] = v9;
    v11[3] = v10;
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 )
    {
      v7 = *(_OWORD *)(v3 + 16);
      v8 = *(_OWORD *)(v3 + 32);
      v9 = *(_OWORD *)(v3 + 48);
      v10 = *(_OWORD *)(v3 + 64);
    }
    result = guard_dispatch_icall_no_overrides(a1, v11);
    if ( !v4 )
      break;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96) + (unsigned int)KeDecoupledStateSaveAreaLength;
    *(_QWORD *)&v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&v7 = v6;
    *((_QWORD *)&v8 + 1) = v6;
    *((_QWORD *)&v7 + 1) = v6 - (unsigned int)KeXStateStackSize;
    v9 = 0uLL;
    v10 = 0uLL;
    return guard_dispatch_icall_no_overrides(a1, &v7);
  }
  return result;
}
