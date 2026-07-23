/*
 * XREFs of HalpHpetDiscover @ 0x14059B0A8
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalRegisterPermanentAddressUsage @ 0x14059A750 (HalRegisterPermanentAddressUsage.c)
 *     HalSocGetAcpiTable @ 0x14059A7D4 (HalSocGetAcpiTable.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpHpetDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rdx
  __int64 v2; // r14
  unsigned int *v3; // r15
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r12d
  int v8; // esi
  bool v9; // zf
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 v12; // rbx
  unsigned int *v13; // r15
  __int64 v14; // rdx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  char v19; // cl
  int v20; // r9d
  unsigned __int8 i; // dl
  signed __int32 v23[8]; // [rsp+8h] [rbp-100h] BYREF
  int v24; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+40h] [rbp-C8h]
  __int64 (*v28)(); // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall *v29)(__int64); // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall *v30)(__int64, int, unsigned __int64); // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall *v31)(); // [rsp+60h] [rbp-A8h]
  _OWORD *v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+9Ch] [rbp-6Ch]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+ACh] [rbp-5Ch]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  int v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+BCh] [rbp-4Ch]
  int v42; // [rsp+C0h] [rbp-48h]
  int v43; // [rsp+C4h] [rbp-44h]
  __int64 v44; // [rsp+C8h] [rbp-40h]
  unsigned int *v45; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-30h]
  _OWORD v47[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v48; // [rsp+100h] [rbp-8h]

  LOWORD(v24) = 0;
  memset(v47, 0, sizeof(v47));
  v48 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1413828680);
  v2 = AcpiTable;
  if ( AcpiTable )
  {
    if ( !*(_BYTE *)(AcpiTable + 40) && (int)HalSocRequestConfigurationData(1LL, v1, (char *)&v24 + 1) >= 0 )
    {
      IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias = *(_QWORD *)(v2 + 44);
      if ( !HIDWORD(IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias) || BYTE1(v24) )
      {
        v45 = (unsigned int *)HalMapIoSpace(
                                (LARGE_INTEGER)IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias,
                                0x400uLL,
                                MmNonCached);
        v3 = v45;
        if ( v45 )
        {
          if ( HalRegisterPermanentAddressUsage(
                 (LARGE_INTEGER)IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias,
                 0x400u) >= 0 )
          {
            v4 = *v3;
            v5 = HIWORD(*v3);
            if ( v5 )
            {
              if ( v5 != 0xFFFF )
              {
                HIDWORD(IommuInterfaceStateChangeCallbackPushLock.Teb) = 2;
                if ( RtlCompareMemory((const void *)(v2 + 10), "VMWARE", 6uLL) == 6 )
                  HIDWORD(IommuInterfaceStateChangeCallbackPushLock.Teb) = 1;
                if ( (v4 & 0x8000) != 0 )
                  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill5[48] = 1;
                v6 = (((unsigned __int64)v3[1] >> 1) + 1000000000000000LL) / v3[1];
                v46 = v6;
                if ( v5 == 4318 )
                {
                  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill5[48] = 0;
                  goto LABEL_42;
                }
                v7 = 1;
                v8 = (v4 >> 8) & 0x1F;
                v9 = v8 == -1;
                v10 = v8 + 1;
                v11 = 0;
                if ( !v9 )
                {
                  v12 = (unsigned int)v6;
                  v13 = v3 + 64;
                  v44 = (unsigned int)v6;
                  while ( 1 )
                  {
                    memset_0(&v26, 0, 0x90uLL);
                    v48 = 0LL;
                    v32 = v47;
                    v35 = v12;
                    v27 = HalpHpetInitialize;
                    memset((char *)v47 + 4, 0, 20);
                    v25 = v11 + 1;
                    v29 = HalpHpetAcknowledgeInterrupt;
                    v15 = 48;
                    v26 = 0x9000000001LL;
                    v30 = HalpHpetArmTimer;
                    v31 = HalpHpetStop;
                    v16 = (v11 + 1) | (*(unsigned __int8 *)(v2 + 52) << 16);
                    LODWORD(v47[0]) = v11;
                    v43 = v16;
                    *((_QWORD *)&v47[1] + 1) = IommuInterfaceStateChangeCallbackPushLock.RelativeTimerBias;
                    v17 = *v13 & 0xFFFFBFFB;
                    *v13 = v17;
                    v34 = 31;
                    v33 = 40;
                    v41 = 1;
                    v40 = 1;
                    v42 = 3;
                    v36 = 1;
                    v37 = 48;
                    _InterlockedOr(v23, 0);
                    if ( (v17 & 0x10) != 0 )
                    {
                      v15 = 112;
                      BYTE12(v47[0]) = 1;
                      v37 = 112;
                    }
                    if ( (v17 & 0x20) != 0 )
                    {
                      *v13 = v17 | 0x100;
                      _InterlockedOr(v23, 0);
                      v17 = *v13;
                      if ( (*v13 & 0x100) == 0 )
                        goto LABEL_40;
                    }
                    LODWORD(v48) = v17;
                    if ( IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill5[48] )
                    {
                      v18 = HalSocRequestConfigurationData(2LL, v14, &v24);
                      v19 = v24;
                      if ( v18 < 0 )
                        v19 = 0;
                      LOBYTE(v24) = v19;
                      if ( !v11 )
                      {
                        v15 |= 0x100u;
                        v38 = v19 == 0 ? 2 : 0;
                        v7 |= 4u;
                        goto LABEL_37;
                      }
                      if ( v11 == 1 )
                      {
                        v38 = 8;
                        v15 |= 0x100u;
                        v7 |= 0x100u;
LABEL_37:
                        v37 = v15;
LABEL_38:
                        if ( (v15 & 0xF00) != 0 )
                          HalpTimerRegister((__int64)&v26, 0LL);
                        goto LABEL_40;
                      }
                      if ( (v17 & 0x8000) != 0 )
                        goto LABEL_38;
                    }
                    else
                    {
                      v20 = ~v7 & v13[1];
                      if ( v20 )
                      {
                        for ( i = 0; i < 0x20u; ++i )
                        {
                          if ( ((1 << i) & v20) != 0 )
                          {
                            v15 |= 0x200u;
                            BYTE4(v47[0]) = i;
                            v39 = i + WORD1(IommuInterfaceStateChangeCallbackPushLock.Teb);
                            v7 |= 1 << i;
                            goto LABEL_37;
                          }
                        }
                        goto LABEL_38;
                      }
                    }
LABEL_40:
                    v11 = v25;
                    v13 += 8;
                    v12 = v44;
                    if ( v25 >= v10 )
                    {
                      v3 = v45;
                      break;
                    }
                  }
                }
LABEL_42:
                memset_0(&v26, 0, 0x90uLL);
                v26 = 0x9000000001LL;
                v48 = 0LL;
                v35 = (unsigned int)v46;
                memset(v47, 0, sizeof(v47));
                LODWORD(v47[0]) = -1;
                v32 = v47;
                v27 = HalpHpetInitialize;
                v28 = HalpHpetQueryCounter;
                v29 = HalpHpetAcknowledgeInterrupt;
                v30 = HalpHpetArmTimer;
                v43 = *(unsigned __int8 *)(v2 + 52) << 16;
                v34 = 32;
                v33 = 40;
                v42 = 3;
                v36 = 1;
                v37 = 2;
                HalpTimerRegister((__int64)&v26, 0LL);
              }
            }
          }
          HalpUnmapVirtualAddress((unsigned __int64)v3, 1LL, 0);
        }
      }
    }
  }
  return 0LL;
}
