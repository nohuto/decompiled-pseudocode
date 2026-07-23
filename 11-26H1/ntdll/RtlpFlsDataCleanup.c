/*
 * XREFs of RtlpFlsDataCleanup @ 0x18007F010
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     RtlProcessFlsData @ 0x18007EFE0 (RtlProcessFlsData.c)
 *     RtlpHpEnvFlsCleanup @ 0x18007FF10 (RtlpHpEnvFlsCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18007F190 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 *     RtlpFlsHeapFree @ 0x18007F21C (RtlpFlsHeapFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpFlsDataCleanup(PRTL_SRWLOCK SRWLock, _QWORD *a2, char a3)
{
  unsigned int Value; // eax
  __int64 v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // r8
  _RTL_SRWLOCK *v15; // rbp
  void (*v16)(void); // rax
  _QWORD *v17; // rcx
  void **v18; // rax

  if ( (a3 & 1) != 0 )
  {
    Value = SRWLock[11].Value;
    if ( Value )
    {
      v7 = Value;
      v8 = 17;
      do
      {
        _BitScanReverse(&v9, v8);
        v10 = v8 ^ (1 << v9);
        v11 = a2[v9 - 2];
        if ( v11 )
        {
          v12 = (_QWORD *)(v11 + 8 * (v10 + 1LL));
          if ( v12 )
          {
            if ( *v12 )
            {
              _BitScanReverse((unsigned int *)&v13, v8);
              v14 = SRWLock[(unsigned int)(v13 - 4) + 1].Value;
              if ( v14 )
                v15 = (_RTL_SRWLOCK *)(v14 + 8 * ((v8 ^ (1 << v13)) + 2LL * (v8 ^ (1 << v13)) + 1));
              else
                v15 = 0LL;
              RtlAcquireSRWLockShared(v15);
              v16 = (void (*)(void))v15[1].Value;
              if ( v16 && v16 != (void (*)(void))-1LL && *v12 )
              {
                if ( v15[2].Value )
                  v16();
                else
                  ((void (__fastcall *)(_QWORD))v16)(*v12);
                *v12 = 0LL;
                *((_DWORD *)a2 + 20) &= ~1u;
              }
              RtlReleaseSRWLockShared(v15);
            }
          }
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive(SRWLock);
    v17 = (_QWORD *)*a2;
    v18 = (void **)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || *v18 != a2 )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = v18;
    RtlReleaseSRWLockExclusive(SRWLock);
  }
  if ( (a3 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(a2 + 2);
    RtlpFlsHeapFree(a2);
  }
}
