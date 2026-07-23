/*
 * XREFs of HalpInterruptRemap @ 0x14057E274
 * Callers:
 *     HalpInterruptConnect @ 0x14057DE80 (HalpInterruptConnect.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14058E40C (HalpIommuConfigureInterrupt.c)
 *     HaliAddInterruptRemapping @ 0x140783CA0 (HaliAddInterruptRemapping.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140435084 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptFindBestRouting @ 0x1404357AC (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRemapUpdateDeliveryMode @ 0x1404DE8E4 (HalpInterruptRemapUpdateDeliveryMode.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpPopulateMsiMessages @ 0x14057E794 (HalpPopulateMsiMessages.c)
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1407875AC (HalpIrtFreeIndex.c)
 *     HalpHvMapDeviceMsiRange @ 0x140BF0A94 (HalpHvMapDeviceMsiRange.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140BF0BC4 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 __fastcall HalpInterruptRemap(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // rsi
  unsigned int v7; // r10d
  char v8; // al
  unsigned int *v9; // r15
  unsigned int *v10; // r14
  unsigned __int64 v11; // rdx
  unsigned int v12; // r11d
  char v13; // r12
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // edi
  int BestRouting; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // r12d
  int *v25; // rbx
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG_PTR *v32; // r13
  unsigned int v33; // edx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+28h] [rbp-79h]
  int v37; // [rsp+48h] [rbp-59h] BYREF
  int v38; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v39[12]; // [rsp+54h] [rbp-4Dh]
  unsigned int *v40; // [rsp+60h] [rbp-41h]
  __int128 v41; // [rsp+68h] [rbp-39h] BYREF
  __int128 v42; // [rsp+78h] [rbp-29h] BYREF
  __int128 v43; // [rsp+88h] [rbp-19h]
  __int64 v44; // [rsp+98h] [rbp-9h]
  __int64 v47; // [rsp+108h] [rbp+67h]

  v47 = a3;
  v6 = a5;
  v41 = 0LL;
  v38 = 1;
  v7 = a2;
  *(_QWORD *)v39 = 0LL;
  v8 = *((_BYTE *)a5 + 8);
  v9 = a5 + 10;
  v10 = a5 + 6;
  v11 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v12 = a1;
  v40 = a5 + 10;
  v42 = 0LL;
  v13 = a4;
  *(_QWORD *)&v39[4] = a5 + 6;
  *((_BYTE *)&HalpHwToSwIrqlMap + v11) = v8;
  v14 = -1;
  v37 = -1;
  v44 = 0LL;
  v15 = 1LL;
  v16 = -1;
  LODWORD(v41) = v6[3];
  BestRouting = -1073741823;
  DWORD2(v41) = v6[4];
  LODWORD(v44) = v6[1];
  v18 = *v6;
  HIDWORD(v41) = 16;
  *(_QWORD *)&v42 = 0x1FFFFFFFFLL;
  v43 = 0LL;
  if ( !v18 )
  {
    v30 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v30, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides((int *)&a5, &v41, (_DWORD *)&v41 + 2);
      if ( (_DWORD)v41 == 3 )
      {
        BYTE4(v41) = 1;
        DWORD2(v41) = 0;
        LODWORD(v41) = 2;
      }
      else if ( (_DWORD)v41 == 4 )
      {
        BYTE4(v41) = 1;
        DWORD2(v41) = 0;
        LODWORD(v41) = 1;
      }
      else
      {
        BYTE4(v41) = 0;
      }
      v32 = HalpInterruptLookupController((int)a5);
      if ( v32 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v31, (__int64)&v38, (_DWORD *)&v42 + 2);
        if ( BestRouting < 0 )
        {
          v36 = 2894;
          goto LABEL_17;
        }
        BestRouting = HalpInterruptFindBestRouting((int *)&a5, v42);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v41);
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          v33 = *v9;
          if ( (*v9 & 0x40000000) == 0 )
          {
            v34 = HalpIrtAllocateIndex(&v37, 1LL, a1, a2, v47, v13, v6);
            BestRouting = v34;
            if ( v34 < 0 )
            {
              HalpInterruptSetProblemEx(
                0LL,
                31,
                v34,
                (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                0xB77u);
              goto LABEL_8;
            }
            v16 = v37;
            v33 = *v9 & 0xC0000000 | v37 & 0x3FFFFFFF;
            *v9 = v33;
          }
          HalpIommuUpdateRemappingTableEntry(0, v33 & 0x3FFFFFFF);
          v35 = *v9 & 0x3FFFFFFF;
          DWORD2(v42) = 7;
          LODWORD(v43) = v35;
          v10 = v6 + 6;
        }
        if ( qword_140FBB408 )
        {
          v28 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v32 + 64), &v41, v10);
          BestRouting = v28;
          if ( v28 < 0 )
          {
            v36 = 2965;
            goto LABEL_26;
          }
        }
        HIDWORD(v41) &= ~0x10u;
        v29 = HalpInterruptSetRemappedLineStateInternal(v32, &a5, &v41);
        goto LABEL_52;
      }
      HalpInterruptSetProblemEx(0LL, 17, 1, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xB3Fu);
    }
    else
    {
      HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xB12u);
    }
    return (unsigned int)-1073741811;
  }
  if ( v18 != 3 )
  {
    HalpInterruptSetProblemEx(0LL, 19, 2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xBAEu);
    return (unsigned int)BestRouting;
  }
  v19 = a6;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0 )
  {
LABEL_23:
    if ( qword_140FBB408 )
    {
      LOBYTE(v14) = v13;
      v28 = HalpHvMapDeviceMsiRange(v12, v7, a3, v14, (__int64)v6, v19);
      BestRouting = v28;
      if ( v28 < 0 )
      {
        v36 = 2791;
LABEL_26:
        v23 = v28;
        v22 = 31;
        goto LABEL_18;
      }
      return 0;
    }
    v29 = HalpPopulateMsiMessages(&v38, v6, v19);
LABEL_52:
    BestRouting = v29;
    if ( v29 < 0 )
      goto LABEL_9;
    return 0;
  }
  if ( (*v9 & 0x40000000) != 0 )
  {
    v16 = *v9 & 0x3FFFFFFF;
    goto LABEL_15;
  }
  v20 = HalpIrtAllocateIndex(&v37, a6, v12, v7, a3, v13, v6);
  BestRouting = v20;
  if ( v20 >= 0 )
  {
    v16 = v37;
LABEL_15:
    BestRouting = HalpInterruptDestinationToTarget(v15, (__int64)&v38, (_DWORD *)&v42 + 2);
    if ( BestRouting < 0 )
    {
      v36 = 2758;
LABEL_17:
      v22 = 19;
      v23 = 1;
LABEL_18:
      HalpInterruptSetProblemEx(0LL, v22, v23, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v36);
      goto LABEL_9;
    }
    HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v41);
    v24 = 0;
    if ( v19 )
    {
      v25 = (int *)v9;
      do
      {
        v26 = *v25 ^ (*v25 ^ (v24 + v16)) & 0x3FFFFFFF;
        v27 = *(v25 - 9);
        *v25 = v26;
        LODWORD(v44) = v27;
        HalpIommuUpdateRemappingTableEntry(1, v26 & 0x3FFFFFFF);
        ++v24;
        v25 += 22;
      }
      while ( v24 < v19 );
    }
    v12 = a1;
    v7 = a2;
    LODWORD(a3) = v47;
    v13 = a4;
    goto LABEL_23;
  }
  HalpInterruptSetProblemEx(0LL, 31, v20, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xAB6u);
LABEL_8:
  v16 = v37;
LABEL_9:
  if ( v16 != -1 && (*v9 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v16, a6, *v6);
  return (unsigned int)BestRouting;
}
