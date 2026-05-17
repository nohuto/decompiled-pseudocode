/*
 * XREFs of RtlpFlsDataCleanup @ 0x180087C90
 * Callers:
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     RtlProcessFlsData @ 0x180087C60 (RtlProcessFlsData.c)
 *     RtlpHpEnvFlsCleanup @ 0x180108728 (RtlpHpEnvFlsCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x180087E10 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 *     RtlpFlsHeapFree @ 0x180087E9C (RtlpFlsHeapFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpFlsDataCleanup(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // ecx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rbp
  void (*v15)(void); // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v4 = a2;
  if ( (a3 & 1) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 88);
    if ( v6 )
    {
      v7 = v6;
      v8 = 17;
      do
      {
        _BitScanReverse(&v9, v8);
        a2 = v8 ^ (1 << v9);
        v10 = *(_QWORD *)(v4 + 8LL * (v9 - 4) + 16);
        if ( v10 )
        {
          v11 = (_QWORD *)(v10 + 8 * ((unsigned int)a2 + 1LL));
          if ( v11 )
          {
            if ( *v11 )
            {
              _BitScanReverse((unsigned int *)&v12, v8);
              v13 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v12 - 4) + 8);
              if ( v13 )
                v14 = v13 + 8 * ((v8 ^ (1 << v12)) + 2LL * (v8 ^ (1 << v12)) + 1);
              else
                v14 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v14);
              v15 = *(void (**)(void))(v14 + 8);
              if ( v15 && v15 != (void (*)(void))-1LL && *v11 )
              {
                if ( *(_QWORD *)(v14 + 16) )
                  v15();
                else
                  ((void (__fastcall *)(_QWORD))v15)(*v11);
                *v11 = 0LL;
                *(_DWORD *)(v4 + 80) &= ~1u;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v14);
            }
          }
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
    v16 = *(_QWORD *)v4;
    v17 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v17 != v4 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  if ( (a3 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(v4 + 16);
    RtlpFlsHeapFree(v4);
  }
}
