/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x140215D10
 * Callers:
 *     _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x140218D40 (_lambda_8c448fb33d037e95b4f6f526a46cb96d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SynthesizePTPMouseInput @ 0x14018CD00 (SynthesizePTPMouseInput.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall ChildProcessRootSynthesizedMouseInput(__int64 a1, __int64 a2)
{
  char **v2; // r14
  char *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r15d
  unsigned __int64 v6; // rcx
  __int64 v7; // r12
  unsigned __int128 v8; // rax
  unsigned __int64 i; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+58h] [rbp-30h]

  v2 = *(char ***)(W32GetUserSessionState(a1, a2) + 19488);
  CPushLock::AcquireLockExclusive((CPushLock *)(v2 + 2));
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (char *)v2 )
      break;
    if ( *((char ***)v3 + 1) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = (char *)v4;
    v5 = 0;
    *(_QWORD *)(v4 + 8) = v2;
    v6 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v7 = (v6 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v8 = (unsigned __int64)(gliQpcFreq.QuadPart * v7) * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    for ( i = gliQpcFreq.QuadPart * v7 / 0x3E8uLL; v5 < *((_DWORD *)v3 + 8); ++v5 )
    {
      v15 = 0LL;
      v17 = 0LL;
      v10 = 28LL * v5;
      v14 = 0LL;
      v16 = *((_QWORD *)v3 + 3);
      v11 = *(_QWORD *)(W32GetUserSessionState(v6, *((_QWORD *)&v8 + 1)) + 19184);
      v12 = *(_DWORD *)&v3[v10 + 60];
      v13 = v11;
      SynthesizePTPMouseInput(*((_QWORD *)v3 + 2), (__int64)&v3[v10 + 36], v7, i, v12, (struct PTPMouseInputData *)&v13);
    }
    GreDeleteFastMutex(v3);
  }
  CPushLock::ReleaseLock((CPushLock *)(v2 + 2));
}
