/*
 * XREFs of ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x1400C5B10
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x1401EDDDC (PREALLOCMEM2.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall HmgpAcquireHandleIndex(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct _GRETHREAD *a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  char result; // al
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // r14
  _OWORD *v11; // rax

  if ( !a2 )
    return (***((__int64 (__fastcall ****)(_QWORD, unsigned int *))a1 + 1))(*((_QWORD *)a1 + 1), a3);
  v6 = *((_QWORD *)a2 + 41);
  if ( !v6 || !*(_BYTE *)(v6 + 80) )
    return (***((__int64 (__fastcall ****)(_QWORD, unsigned int *))a1 + 1))(*((_QWORD *)a1 + 1), a3);
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) == v8 )
  {
    v9 = *(void **)(v6 + 40);
    v10 = 2 * v8;
    if ( v9 == (void *)(v6 + 48) )
    {
      v11 = (_OWORD *)PALLOCMEM((unsigned int)(8 * v8), 1852994631LL, (unsigned int)(8 * v8), a4);
      if ( !v11 )
        return 0;
      *v11 = *(_OWORD *)(v6 + 48);
      v11[1] = *(_OWORD *)(v6 + 64);
    }
    else
    {
      v11 = (_OWORD *)PREALLOCMEM2(v9, (unsigned int)(4 * v8));
      if ( !v11 )
        return 0;
    }
    *(_QWORD *)(v6 + 40) = v11;
    *(_QWORD *)(v6 + 32) = v10;
  }
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD, unsigned int *))a1 + 1))(*((_QWORD *)a1 + 1), a3) )
  {
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 4LL * *(_QWORD *)(v6 + 24)) = *a3;
    result = 1;
    ++*(_QWORD *)(v6 + 24);
    return result;
  }
  return 0;
}
