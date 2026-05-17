/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800EA000
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rdx
  _QWORD *v7; // r9
  signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  signed __int32 *v11; // rcx
  __int64 v12; // r8
  signed __int32 **v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  signed __int32 **v17; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // r8d
  signed __int32 v20; // ett
  _QWORD **v21; // r14
  _QWORD *v22; // rsi
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rbx
  void (__fastcall *v29)(_QWORD *, _QWORD); // rax
  void (__fastcall *v30)(_QWORD *); // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  if ( a1 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 56), a2);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v6);
    v7 = *(_QWORD **)(a1 + 16);
    while ( 1 )
    {
      if ( v7 == (_QWORD *)(a1 + 16) )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
        v21 = (_QWORD **)(a1 + 64);
        v22 = *(_QWORD **)(a1 + 64);
        while ( v22 != v21 )
        {
          v28 = v22 - 5;
          v22 = (_QWORD *)*v22;
          v29 = *(void (__fastcall **)(_QWORD *, _QWORD))(v28[1] + 16LL);
          if ( v29 )
            v29(v28, v4);
          if ( v4 )
          {
            v30 = *(void (__fastcall **)(_QWORD *))(v28[1] + 24LL);
            if ( v30 )
              v30(v28);
          }
        }
        v23 = *v21;
        while ( 1 )
        {
          v24 = v23;
          if ( v23 == v21 )
            break;
          v25 = v23 - 5;
          v26 = (_QWORD *)*v23;
          v23 = v26;
          v27 = (_QWORD *)v25[6];
          if ( (_QWORD *)v26[1] != v24 || (_QWORD *)*v27 != v24 )
            __fastfail(3u);
          *v27 = v26;
          v26[1] = v27;
          v25[6] = v24;
          v25[5] = v24;
          TppBarrierAdjust(v25 + 7, 0, 1);
          if ( v25[3] && (v25[21] & 0x10000) == 0 )
            ((void (__fastcall *)(_QWORD, __int64))v25[3])(v25[11], a3);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD *))v25[1])(v25);
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
        TppBarrierAdjust((signed __int64 *)(a1 + 32), 0, 1);
        return;
      }
      v8 = (signed __int32 *)(v7 - 5);
      v7 = (_QWORD *)*v7;
      _m_prefetchw(v8 + 42);
      v9 = v8[42];
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v8 + 42, v9 | 0x20000, v9);
      }
      while ( v10 != v9 );
      v11 = v8 + 10;
      if ( (v9 & 0x30000) == 0 )
        break;
      v16 = *(_QWORD *)v11;
      v17 = (signed __int32 **)*((_QWORD *)v8 + 6);
      if ( *(signed __int32 **)(*(_QWORD *)v11 + 8LL) != v11 || *v17 != v11 )
LABEL_12:
        __fastfail(3u);
      *v17 = (signed __int32 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      _m_prefetchw(v8);
      v18 = *v8;
      while ( v18 )
      {
        v19 = v18;
        v20 = v18;
        v18 = _InterlockedCompareExchange(v8, v18 + 1, v18);
        if ( v20 == v18 )
          goto LABEL_18;
      }
      v19 = 0;
LABEL_18:
      v14 = v8 + 10;
      if ( v19 )
      {
LABEL_11:
        v15 = *(_QWORD **)(a1 + 72);
        if ( *v15 != a1 + 64 )
          goto LABEL_12;
        *v14 = a1 + 64;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(a1 + 72) = v14;
      }
      else
      {
        v14[1] = v14;
        *v14 = v14;
      }
    }
    *((_QWORD *)v8 + 23) = retaddr;
    v12 = *(_QWORD *)v11;
    v13 = (signed __int32 **)*((_QWORD *)v8 + 6);
    if ( *(signed __int32 **)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
      goto LABEL_12;
    *v13 = (signed __int32 *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = v8 + 10;
    goto LABEL_11;
  }
  if ( !a1 )
    TppRaiseInvalidParameter();
}
