/*
 * XREFs of KiFlushRangeWorker @ 0x14032CFD0
 * Callers:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rdi
  unsigned __int64 v5; // r12
  int v6; // ebp
  unsigned __int64 v7; // rbx
  _KPROCESS *Process; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebp
  _KPROCESS *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h]

  v3 = *(void ***)a1;
  v5 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v6 = *(_DWORD *)(a1 + 12);
    v7 = (unsigned __int64)*v3;
    if ( KiFlushPcid )
    {
      if ( (unsigned int)(v6 - 1) <= 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v16 = 1LL;
            *((_QWORD *)&v16 + 1) = *v3;
            _EAX = 0;
            __asm { invpcid eax, [rsp+78h+var_58] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, a2, a3);
          }
        }
      }
    }
    __invlpg((void *)v7);
    LOBYTE(_RAX) = 8 * ((v7 >> 10) & 3);
    v11 = 4096LL << (9 * ((unsigned __int8)(v7 >> 10) & 3u));
    v12 = v7 & 0x3FF;
    if ( (v7 & 0x3FF) != 0 )
    {
      v13 = v6 - 1;
      do
      {
        v7 += v11;
        if ( KiFlushPcid )
        {
          if ( v13 <= 1 )
          {
            _RAX = KeGetCurrentThread();
            v14 = _RAX->ApcState.Process;
            if ( !v14->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v17 = 1LL;
                *((_QWORD *)&v17 + 1) = v7;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = KiSetUserTbFlushPending(v14, a2, a3);
              }
            }
          }
        }
        __invlpg((void *)v7);
        --v12;
      }
      while ( v12 );
    }
    ++v3;
  }
  while ( (unsigned __int64)v3 < v5 );
  return (char)_RAX;
}
