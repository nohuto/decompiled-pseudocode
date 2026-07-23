/*
 * XREFs of AccelpGetCopyBuffer @ 0x1406E3840
 * Callers:
 *     AccelpSdxiInternalOperationHandler @ 0x1406E4C90 (AccelpSdxiInternalOperationHandler.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AccelpAcquireLockExclusive @ 0x1408510DC (AccelpAcquireLockExclusive.c)
 *     AccelpAlloc @ 0x1408510F4 (AccelpAlloc.c)
 *     AccelpReleaseLockExclusive @ 0x140851120 (AccelpReleaseLockExclusive.c)
 */

__int64 __fastcall AccelpGetCopyBuffer(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  __int64 v3; // rbp
  int v4; // r12d
  unsigned int v6; // edi
  __int64 v8; // r14
  __int64 *i; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 *v16; // rax

  v3 = a1 + 816;
  v4 = a2;
  v6 = 0;
  AccelpAcquireLockExclusive(a1 + 816);
  v8 = a1 + 800;
  for ( i = *(__int64 **)(a1 + 800); i != (__int64 *)v8; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 16) == (_BYTE)v4 )
    {
      v10 = i[3];
      goto LABEL_14;
    }
  }
  AccelpReleaseLockExclusive(v3);
  if ( (*(_DWORD *)(a1 + 36) & 0x20000) != 0 )
    LOBYTE(v12) = 1;
  else
    v12 = 0LL;
  v13 = AccelpAlloc(v11, 32LL, v12);
  v15 = (void *)AccelpAlloc(v14, 4096LL, 0LL);
  v10 = (__int64)v15;
  if ( !v13 || !v15 )
    return (unsigned int)-1073741801;
  *(_OWORD *)v13 = 0LL;
  *(_OWORD *)(v13 + 16) = 0LL;
  memset_0(v15, v4, 0x1000uLL);
  *(_QWORD *)(v13 + 24) = v10;
  *(_BYTE *)(v13 + 16) = v4;
  AccelpAcquireLockExclusive(v3);
  v16 = *(__int64 **)(v8 + 8);
  if ( *v16 != v8 )
    __fastfail(3u);
  *(_QWORD *)v13 = v8;
  *(_QWORD *)(v13 + 8) = v16;
  *v16 = v13;
  *(_QWORD *)(v8 + 8) = v13;
LABEL_14:
  AccelpReleaseLockExclusive(v3);
  if ( a3 )
    *a3 = v10;
  return v6;
}
