/*
 * XREFs of EtwpUnregisterPartitionPages @ 0x140488C0C
 * Callers:
 *     EtwpFreePartitionMemory @ 0x140488BA8 (EtwpFreePartitionMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUnregisterPartitionPages(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  KIRQL v6; // r11
  unsigned int v7; // eax
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned int v10; // ebx
  _QWORD **v11; // r9
  _QWORD *v12; // rax
  _QWORD *i; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h]
  __int64 v16; // [rsp+48h] [rbp+10h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&ExpSysDbgLock.UserWaitTime);
  v7 = *(&ExpSysDbgLock.ReservedPreviousReadyTimeValue + 1) >> 5;
  v8 = -1LL << (*(_BYTE *)(&ExpSysDbgLock.ReservedPreviousReadyTimeValue + 1) & 0x1F);
  v9 = a2 & v8;
  v15 = a2 & v8;
  if ( *(&ExpSysDbgLock.ReservedPreviousReadyTimeValue + 1) >> 5 )
  {
    v10 = v7 - 1;
    v11 = (_QWORD **)(ExpSysDbgLock.KernelWaitTime
                    + 8LL
                    * ((v7 - 1) & (HIBYTE(v15)
                                 - 877075889
                                 + 442596621 * (unsigned __int8)v9
                                 + 37
                                 * (BYTE6(v15)
                                  + 37
                                  * (BYTE5(v15)
                                   + 37 * (BYTE4(v15) + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * BYTE1(v15)))))))));
    while ( 1 )
    {
      v12 = *v11;
      v11 = (_QWORD **)v12;
      if ( ((unsigned __int8)v12 & 1) != 0 )
        break;
      if ( v9 == (v8 & v12[1]) )
      {
        if ( v12 )
        {
          v3 = v12[2];
          v4 = v12;
          if ( a1 )
            *a1 = v12[3];
          v16 = v8 & v12[1];
          for ( i = (_QWORD *)(ExpSysDbgLock.KernelWaitTime
                             + 8LL
                             * (v10 & (HIBYTE(v16)
                                     - 877075889
                                     + 442596621 * (unsigned __int8)v16
                                     + 37
                                     * (BYTE6(v16)
                                      + 37
                                      * (BYTE5(v16)
                                       + 37 * (BYTE4(v16) + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * BYTE1(v16)))))))));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( (_QWORD *)*i == v12 )
            {
              *i = *v12;
              --ExpSysDbgLock.ReservedPreviousReadyTimeValue;
              *v12 |= 0x8000000000000002uLL;
              goto LABEL_13;
            }
          }
        }
        break;
      }
    }
  }
LABEL_13:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&ExpSysDbgLock.UserWaitTime, v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4F777445u);
  return v3;
}
