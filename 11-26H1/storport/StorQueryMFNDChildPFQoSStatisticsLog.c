/*
 * XREFs of StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C9BB8 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     StorLogMFNDQueryCCQoSStatisticsLog @ 0x1400CAF1C (StorLogMFNDQueryCCQoSStatisticsLog.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFQoSStatisticsLog(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int16 v4; // di
  _WORD *v5; // rsi
  unsigned __int64 v7; // r14
  _WORD *v8; // r15
  unsigned __int16 v9; // r12
  __int16 v10; // ax
  _QWORD *Pool; // r14
  int v12; // ebx
  unsigned int v13; // r12d
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // r8d
  unsigned __int64 Size; // [rsp+60h] [rbp-39h]
  _BYTE v23[112]; // [rsp+80h] [rbp-19h] BYREF
  int v24; // [rsp+108h] [rbp+6Fh] BYREF
  _QWORD *v25; // [rsp+110h] [rbp+77h]
  int v26; // [rsp+118h] [rbp+7Fh]

  v25 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v5 = *(_WORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  Size = v7;
  v8 = 0LL;
  memset_0(v23, 0, 0x40uLL);
  v9 = 0;
  v26 = 0;
  *v25 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v24 = -1073741637;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) != 1 )
  {
    v24 = -1073741436;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v3 + 16) < 0x10u )
  {
    v24 = -1073741585;
    goto LABEL_32;
  }
  v8 = v5 + 4;
  if ( v5[4] != 1 || *((_DWORD *)v5 + 3) < 0x10u || (v10 = v5[10]) == 0 || v10 == -1 )
  {
    v12 = -1073741811;
    goto LABEL_30;
  }
  if ( v5 && v7 >= 0x28 )
  {
    Pool = (_QWORD *)RaidAllocatePool(64LL, 0x2000LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v12 = -1073741670;
LABEL_30:
      v24 = v12;
LABEL_31:
      if ( v12 >= 0 )
        goto LABEL_34;
      goto LABEL_32;
    }
    StorBuildMFNDGetSingleCCLogPageCommand(
      (__int64)v23,
      v5[10],
      209,
      *((_DWORD *)v5 + 4) & 1,
      (*((_DWORD *)v5 + 4) & 2) == 0,
      0x2000u);
    v24 = StorSendMFNDCommand(a1, (_DWORD)Pool, 0, 0x2000, (__int64)v23);
    v12 = v24;
    if ( v24 >= 0 )
    {
      v13 = 8 * *((unsigned __int16 *)Pool + 1) + 28;
      memset_0(v5, 0, Size);
      *v5 = 1;
      if ( Size >= v13 )
      {
        if ( *(_BYTE *)Pool == 1 )
        {
          v15 = Pool[1022] - 0x464406529CB5FA26LL;
          if ( Pool[1022] == 0x464406529CB5FA26LL )
            v15 = Pool[1023] - 0xF5F578400403E87LL;
          if ( !v15 )
          {
            v16 = 0;
            v5[2] = *((_WORD *)Pool + 2);
            v5[3] = *((_WORD *)Pool + 3);
            *(_BYTE *)v8 = *(_BYTE *)Pool;
            *((_BYTE *)v5 + 9) = *((_BYTE *)Pool + 1);
            *((_QWORD *)v5 + 2) = Pool[1];
            LOWORD(v17) = *((_WORD *)Pool + 1);
            if ( (_WORD)v17 )
            {
              do
              {
                v18 = v16++;
                *(_DWORD *)&v5[4 * v18 + 14] = 1048577;
                LOBYTE(v5[4 * v18 + 16]) = *((_BYTE *)Pool + 4 * v18 + 32);
                HIBYTE(v5[4 * v18 + 16]) = *((_BYTE *)Pool + 4 * v18 + 33);
                LOBYTE(v5[4 * v18 + 17]) = *((_BYTE *)Pool + 4 * v18 + 34);
                HIBYTE(v5[4 * v18 + 17]) = *((_BYTE *)Pool + 4 * v18 + 35);
                v17 = *((unsigned __int16 *)Pool + 1);
              }
              while ( v16 < v17 );
            }
            v19 = v25;
            *((_DWORD *)v5 + 6) = (unsigned __int16)v17;
            v5[1] = v13;
            *v19 = (unsigned __int16)v13;
            goto LABEL_27;
          }
        }
        v12 = -1073741668;
      }
      else
      {
        v14 = v25;
        v12 = -2147483643;
        v5[1] = v13;
        *v14 = 4LL;
      }
      v24 = v12;
    }
LABEL_27:
    ExFreePoolWithTag(Pool, 0x464D6152u);
    v9 = v26;
    goto LABEL_31;
  }
  v24 = -1073741820;
LABEL_32:
  StorMapMFNDErrorToNtStatus(v9, &v24);
  v12 = v24;
  if ( v24 < 0 )
    v5 = 0LL;
LABEL_34:
  if ( v8 )
  {
    v20 = *((_DWORD *)v8 + 2);
    v4 = v8[6];
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  StorLogMFNDQueryCCQoSStatisticsLog(a1, v4, v20, (__int64)v5, v9, v12);
  return (unsigned int)v12;
}
