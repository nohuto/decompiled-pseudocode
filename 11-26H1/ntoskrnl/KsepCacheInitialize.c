/*
 * XREFs of KsepCacheInitialize @ 0x1407C1BCC
 * Callers:
 *     KsepEngineInitialize @ 0x140CD2F34 (KsepEngineInitialize.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 */

_QWORD *__fastcall KsepCacheInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Paged; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned int i; // edx
  __int64 v12; // rcx
  _QWORD *v13; // rcx

  Paged = KsepPoolAllocatePaged();
  v8 = (_QWORD *)Paged;
  if ( !Paged )
    goto LABEL_7;
  *(_DWORD *)(Paged + 24) = 256;
  v9 = (_QWORD *)(Paged + 32);
  v9[1] = v9;
  *v9 = v9;
  v8[9] = a2;
  v8[10] = a3;
  v8[11] = a4;
  *((_DWORD *)v8 + 3) = 223;
  v10 = KsepPoolAllocatePaged();
  v8[2] = v10;
  if ( !v10 )
  {
    KsepPoolFreePaged(0LL);
LABEL_7:
    KsepPoolFreePaged(v8);
    return 0LL;
  }
  for ( i = 0; i < *((_DWORD *)v8 + 3); *v13 = v13 )
  {
    v12 = i++;
    v13 = (_QWORD *)(v8[2] + 16 * v12);
    v13[1] = v13;
  }
  *v8 = 0LL;
  return v8;
}
