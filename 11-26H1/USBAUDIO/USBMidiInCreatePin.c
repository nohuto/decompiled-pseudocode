/*
 * XREFs of USBMidiInCreatePin @ 0x14000E950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiInCreatePin(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int v4; // r8d
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r14
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  _QWORD *v11; // rcx
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int i; // edx
  KIRQL v17; // cl
  _QWORD *v18; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)(v1 + 144);
  v6 = *(_QWORD *)(v1 + 152);
  v7 = *(_QWORD *)(v5 + 200);
  *(_QWORD *)(v6 + 24) = a1;
  v8 = (_QWORD *)(v6 + 80);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 208);
  v9 = v6 + 80;
  v10 = v6 + 80;
  *(_DWORD *)(v6 + 20) = *(_DWORD *)(v5 + 212);
  *(_QWORD *)(v6 + 72) = v6 + 64;
  *(_QWORD *)(v6 + 64) = v6 + 64;
  *(_QWORD *)(v6 + 88) = v6 + 80;
  *(_QWORD *)(v6 + 80) = v6 + 80;
  while ( 1 )
  {
    v11 = (_QWORD *)(v6 + 32 * (v4 + 3LL));
    if ( v10 != v9 )
      goto LABEL_19;
    *v11 = v9;
    ++v4;
    v11[1] = v8;
    *v8 = v11;
    *(_QWORD *)(v6 + 88) = v11;
    if ( v4 >= 0x400 )
      break;
    v10 = *v11;
    v8 = v11;
  }
  v12 = *(_DWORD *)(v7 + 32);
  v13 = 0;
  if ( !v12 )
    return (unsigned int)-1073741808;
  do
  {
    if ( v3 )
      goto LABEL_15;
    v14 = 168LL * v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 200) + 40LL) + v14 + 2) == *(_BYTE *)(*(_QWORD *)(v5 + 168) + 2LL) )
    {
      v15 = *(_QWORD *)(v7 + 40) + v14;
      for ( i = 0; i < *(_DWORD *)(v15 + 24); ++i )
      {
        if ( *(unsigned __int8 *)(i + *(_QWORD *)(v15 + 32)) == *(_DWORD *)(v6 + 16) )
        {
          v3 = v15;
          break;
        }
      }
    }
    ++v13;
  }
  while ( v13 < v12 );
  if ( v3 )
  {
LABEL_15:
    *(_QWORD *)(v6 + 40) = v3;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 104));
    v18 = *(_QWORD **)(v3 + 56);
    if ( *v18 != v3 + 48 )
LABEL_19:
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v18;
    *(_QWORD *)v6 = v3 + 48;
    *v18 = v6;
    *(_QWORD *)(v3 + 56) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 104), v17);
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v2;
}
