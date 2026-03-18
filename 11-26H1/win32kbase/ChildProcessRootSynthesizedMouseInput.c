/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x14021B1D0
 * Callers:
 *     _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x14021DC10 (_lambda_8c448fb33d037e95b4f6f526a46cb96d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SynthesizePTPMouseInput @ 0x1400D0144 (SynthesizePTPMouseInput.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall ChildProcessRootSynthesizedMouseInput(int a1, int a2, int a3)
{
  char **v3; // r14
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int128 v11; // rax
  unsigned __int64 i; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]

  v3 = *(char ***)(W32GetUserSessionState(a1, a2, a3) + 19520);
  CPushLock::AcquireLockExclusive((CPushLock *)(v3 + 2));
  while ( 1 )
  {
    v6 = *v3;
    if ( *v3 == (char *)v3 )
      break;
    if ( *((char ***)v6 + 1) != v3 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v3 = (char *)v7;
    v8 = 0;
    *(_QWORD *)(v7 + 8) = v3;
    v9 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v10 = (v9 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v11 = (unsigned __int64)(gliQpcFreq.QuadPart * v10) * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    for ( i = gliQpcFreq.QuadPart * v10 / 0x3E8uLL; v8 < *((_DWORD *)v6 + 8); ++v8 )
    {
      v13 = 28LL * v8;
      v17 = 0LL;
      v19 = *((_QWORD *)v6 + 3);
      v18 = 0LL;
      v20 = 0LL;
      v14 = *(_QWORD *)(W32GetUserSessionState(v9, DWORD2(v11), v4) + 19216);
      v15 = *(_DWORD *)&v6[v13 + 60];
      v16 = v14;
      SynthesizePTPMouseInput(
        *((_QWORD *)v6 + 2),
        (__int128 *)&v6[v13 + 36],
        v10,
        i,
        v15,
        (struct PTPMouseInputData *)&v16);
    }
    GreDeleteFastMutex(v6, *((__int64 *)&v11 + 1), v4, v5);
  }
  CPushLock::ReleaseLock((CPushLock *)(v3 + 2));
}
