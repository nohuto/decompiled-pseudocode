/*
 * XREFs of ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x1800463BC
 * Callers:
 *     ??1_WaitTask@@QEAA@XZ @ 0x180046328 (--1_WaitTask@@QEAA@XZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180064650 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180080C20 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 *     _lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator() @ 0x180110FB8 (_lambda_9779933831ecf7631e1f1e31bfa66ff4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::shared_ptr<CPowerReference>::reset(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  *a1 = 0LL;
  v1 = (volatile signed __int32 *)a1[1];
  a1[1] = 0LL;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
