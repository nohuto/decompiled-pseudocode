/*
 * XREFs of RaProcessMFNDChildControllerEvent @ 0x140092038
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorLogMFNDCCAsyncEvent @ 0x140097770 (StorLogMFNDCCAsyncEvent.c)
 *     StorGetLogForMFNDChildControllerAsyncEvent @ 0x1400CA714 (StorGetLogForMFNDChildControllerAsyncEvent.c)
 */

void __fastcall RaProcessMFNDChildControllerEvent(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 Pool; // rax
  _WORD *v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 i; // r9
  __int16 v18; // ax
  unsigned int v19; // [rsp+30h] [rbp-20h]
  unsigned int v20; // [rsp+34h] [rbp-1Ch]
  unsigned int v21; // [rsp+38h] [rbp-18h]
  unsigned int v22; // [rsp+3Ch] [rbp-14h]
  unsigned int v23; // [rsp+A0h] [rbp+50h]
  unsigned int v24; // [rsp+A8h] [rbp+58h]

  if ( StorIsMFNDSupported(a1) )
  {
    if ( v2 )
    {
      if ( *(_WORD *)v2 == 1 && *(_DWORD *)(v2 + 4) >= 0x1010u && *(_DWORD *)(v2 + 12) >= 0x1000u )
      {
        v3 = (_BYTE *)(v2 + 16);
        v4 = *(unsigned __int8 *)(v2 + 16);
        if ( (_BYTE)v4 )
        {
          v5 = *(_QWORD *)(v2 + 4096) + 0x40CA5A0F674331E8LL;
          if ( *(_QWORD *)(v2 + 4096) == 0xBF35A5F098BCCE18uLL )
            v5 = *(_QWORD *)(v2 + 4104) + 0x639962DA8026BB5BLL;
          if ( !v5 )
          {
            Pool = RaidAllocatePool(64LL, 40 * v4, 1179476306LL, *(_QWORD *)(a1 + 8));
            v7 = (_WORD *)Pool;
            if ( Pool )
            {
              v8 = (unsigned __int8)*v3;
              v9 = 0;
              v10 = 0;
              v21 = 0;
              v11 = 0;
              v22 = 0;
              v24 = 0;
              v12 = Pool + 8 * v8;
              v19 = 0;
              v13 = v12 + 8 * v8;
              v20 = 0;
              v14 = v13 + 8 * v8;
              v15 = v14 + 8 * v8;
              while ( 1 )
              {
                v23 = v9;
                v16 = (unsigned __int8)*v3;
                if ( *v3 >= 0xFDu )
                  v16 = 253LL;
                if ( v9 >= v16 )
                  break;
                if ( (v3[16 * v9 + 17] & 0x1F) != 0 )
                {
                  for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
                  {
                    if ( v7[4 * i] == (unsigned __int8)v3[16 * v9 + 16] )
                      goto LABEL_28;
                  }
                  v7[4 * v9] = (unsigned __int8)v3[16 * v9 + 16];
                  ++v21;
                  if ( (v3[16 * v9 + 17] & 0x10) != 0 )
                  {
                    v18 = (unsigned __int8)v3[16 * v9 + 16];
                    *(_DWORD *)(v12 + 8LL * v9 + 4) |= 7u;
                    *(_WORD *)(v12 + 8LL * v9) = v18;
                    v22 = v10 + 1;
                    *(_WORD *)(v12 + 8LL * v9 + 5) = -11778;
                  }
                  if ( (v3[16 * v9 + 17] & 2) != 0 )
                  {
                    ++v24;
                    *(_WORD *)(v13 + 8LL * v9) = (unsigned __int8)v3[16 * v9 + 16];
                    *(_DWORD *)(v13 + 8LL * v9 + 4) = *(_DWORD *)&v3[16 * v9 + 20];
                  }
                  if ( (v3[16 * v9 + 17] & 4) != 0 )
                  {
                    ++v19;
                    *(_WORD *)(v14 + 8LL * v9) = (unsigned __int8)v3[16 * v9 + 16];
                    *(_DWORD *)(v14 + 8LL * v9 + 4) = *(_DWORD *)&v3[16 * v9 + 24];
                  }
                  if ( (v3[16 * v9 + 17] & 8) != 0 )
                  {
                    *(_WORD *)(v15 + 8LL * v9) = (unsigned __int8)v3[16 * v9 + 16];
                    *(_DWORD *)(v15 + 8LL * v9 + 4) = *(_DWORD *)&v3[16 * v9 + 28];
                    v20 = v11 + 1;
                  }
LABEL_28:
                  StorLogMFNDCCAsyncEvent(a1, v3, v9, v9);
                  v11 = v20;
                  v10 = v22;
                }
                v9 = v23 + 1;
              }
              if ( v10 && v12 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v10, v12);
              if ( v24 && v13 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v24, v13);
              if ( v19 && v14 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v19, v14);
              if ( v20 && v15 )
                StorGetLogForMFNDChildControllerAsyncEvent(a1, v20, v15);
              ExFreePoolWithTag(v7, 0x464D6152u);
            }
          }
        }
      }
    }
  }
}
