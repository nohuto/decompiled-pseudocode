/*
 * XREFs of EtwpEventApiCallback @ 0x180058350
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180102F40 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r13
  __int128 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r9
  unsigned __int8 v12; // r15
  unsigned int i; // ecx
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, __int64, __int128 *, _QWORD); // rax
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 Heap_0; // rax
  __int128 v21; // [rsp+58h] [rbp-50h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a2 + 240);
  v6 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  if ( v2 == 2 )
  {
    v12 = *(_BYTE *)(a1 + 76);
    v7 = *(_QWORD *)(a1 + 88);
    v8 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v8 = -1LL;
    v9 = -1LL;
    v10 = -1LL;
    if ( *(_BYTE *)(a2 + 116) )
    {
      v11 = 1;
      v8 = *(_QWORD *)(a2 + 96);
      v9 = v8;
      v10 = v8;
      v12 = *(_BYTE *)(a2 + 117);
      v7 = *(_QWORD *)(a2 + 104);
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
    if ( *(_BYTE *)(a2 + 236) )
    {
      if ( v12 <= *(_BYTE *)(a2 + 237) )
      {
        v12 = *(_BYTE *)(a2 + 237);
        v9 = v10;
      }
      v7 |= *(_QWORD *)(a2 + 224);
      v8 = v9 & *(_QWORD *)(a2 + 216);
    }
    else if ( !v11 )
    {
      v2 = 0;
      *(_DWORD *)(a1 + 116) = 0;
      v8 = 0LL;
      goto LABEL_11;
    }
    v2 = 1;
  }
LABEL_11:
  for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
  {
    v16 = *(_DWORD *)(a1 + 16LL * i + 132);
    if ( v16 >= 0 || v16 == 0x80000000 )
    {
      v17 = *(_DWORD *)(a1 + 16LL * i + 128);
      *(_QWORD *)&v21 = a1 + *(_QWORD *)(a1 + 16LL * i + 120);
      v6 = &v21;
      *((_QWORD *)&v21 + 1) = __PAIR64__(v16, v17);
      if ( *(__int16 *)(a1 + 78) < 0 && HIDWORD(v21) == 0x80000000 )
      {
        v18 = v21;
        v19 = 0;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_DWORD *)(v18 + 20) = 0;
        *(_DWORD *)(v18 + 16) = DWORD2(v21);
        while ( v19 < 4 )
        {
          if ( *(_BYTE *)(a2 + 24LL * v19 + 140)
            && *(unsigned __int8 *)(a2 + 24LL * v19 + 142) == (*(_WORD *)(a1 + 78) & 0x7FFF) )
          {
            *(_QWORD *)(v18 + 8) = 1LL << ((unsigned __int8)v19 + 32);
            break;
          }
          ++v19;
        }
        if ( v3 )
        {
          EtwpAcquireGuidEntryExclusive(v3);
          if ( *(_QWORD *)(v3 + 168) )
            RtlFreeHeap_0();
          Heap_0 = RtlAllocateHeap_0();
          *(_QWORD *)(v3 + 168) = Heap_0;
          if ( Heap_0 )
          {
            *(_DWORD *)(Heap_0 + 8) = DWORD2(v21);
            *(_DWORD *)(*(_QWORD *)(v3 + 168) + 12LL) = HIDWORD(v21);
            **(_QWORD **)(v3 + 168) = *(_QWORD *)(v3 + 168) + 16LL;
            memmove(**(void ***)(v3 + 168), (const void *)v21, DWORD2(v21));
          }
          *(_DWORD *)(v3 + 48) = 0;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 40));
        }
      }
      break;
    }
  }
  v14 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, __int128 *, _QWORD))(a2 + 48);
  if ( v14 )
    v14(a1 + 56, v2, v12, v7, v8, v6, *(_QWORD *)(a2 + 56));
  return 0LL;
}
