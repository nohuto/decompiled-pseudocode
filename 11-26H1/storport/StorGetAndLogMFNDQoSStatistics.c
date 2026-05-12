/*
 * XREFs of StorGetAndLogMFNDQoSStatistics @ 0x1400C9C9C
 * Callers:
 *     StorGetAndLogMFNDQoSStatisticsWorkRoutine @ 0x1400C9F40 (StorGetAndLogMFNDQoSStatisticsWorkRoutine.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C9BB8 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400CACBC (StorLogMFNDCCQoSStatisticsInfo.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

void __fastcall StorGetAndLogMFNDQoSStatistics(__int64 a1, int a2, char a3, unsigned int a4, unsigned __int16 *a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int16 *Pool; // rbx
  int v11; // r13d
  void *v12; // r15
  unsigned __int16 *v13; // rdi
  __int64 v14; // r12
  unsigned __int16 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 i; // rdx
  unsigned __int64 v22; // rcx
  _DWORD v23[15]; // [rsp+78h] [rbp-21h] BYREF
  int v24; // [rsp+B4h] [rbp+1Bh]
  int v25; // [rsp+F8h] [rbp+5Fh]

  v6 = a4;
  memset_0(v23, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 6216);
  if ( v7 )
    v8 = *(unsigned __int16 *)(v7 + 8) - 1;
  else
    v8 = 255;
  v9 = (v8 << 8) + 8;
  Pool = (unsigned __int16 *)RaidAllocatePool(64LL, v9, 1179476306LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    LOBYTE(v24) = 2;
    v24 |= 0xFFFF00u;
    v23[10] = v9 >> 2;
    v23[0] = 210;
    v25 = StorSendMFNDCommand(a1, (_DWORD)Pool, 0, v9, (__int64)v23);
    v11 = v25;
    v12 = (void *)RaidAllocatePool(64LL, 0x2000LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( v12 )
    {
      if ( (_DWORD)v6 )
      {
        v13 = a5;
        v14 = v6;
        do
        {
          v15 = *v13;
          if ( (unsigned __int16)(*v13 - 1) <= 0xFFFDu )
          {
            memset_0(v23, 0, 0x40uLL);
            StorBuildMFNDGetSingleCCLogPageCommand((__int64)v23, v15, 209, (a3 & 2) != 0, a3 & 1, 0x2000u);
            v16 = 0LL;
            if ( (int)StorSendMFNDCommand(a1, (_DWORD)v12, 0, 0x2000, (__int64)v23) >= 0 )
            {
              v17 = 0LL;
              v18 = 1;
              v19 = 0LL;
              v20 = 0LL;
              if ( v11 >= 0 )
              {
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v18 = 1;
                  if ( (unsigned int)i >= *Pool )
                    break;
                  v22 = (unsigned __int64)(unsigned int)i << 8;
                  if ( *(unsigned __int16 *)((char *)Pool + v22 + 8) == a5[i] )
                  {
                    v17 = *(_QWORD *)((char *)Pool + v22 + 80);
                    v18 = 0;
                    v19 = *(_QWORD *)((char *)Pool + v22 + 88);
                    v20 = *(_QWORD *)((char *)Pool + v22 + 96);
                    v16 = *(_QWORD *)((char *)Pool + v22 + 104);
                    break;
                  }
                }
                v11 = v25;
              }
              StorLogMFNDCCQoSStatisticsInfo(a1, *v13, a2, v18, (__int64)v12, v17, v19, v20, v16);
            }
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      ExFreePoolWithTag(v12, 0x464D6152u);
    }
    ExFreePoolWithTag(Pool, 0x464D6152u);
  }
}
