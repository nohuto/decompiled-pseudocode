/*
 * XREFs of HsaFlushTbInternal @ 0x140477D50
 * Callers:
 *     HsaFlushDomainTb @ 0x140477D10 (HsaFlushDomainTb.c)
 *     HsaAttachDeviceDomainInternal @ 0x1405AB798 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTb @ 0x1405AC010 (HsaFlushTb.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     HsaIommuWaitCommand @ 0x140477FD0 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 *     HalpIommuGetNextFlushDevice @ 0x14053165C (HalpIommuGetNextFlushDevice.c)
 */

void __fastcall HsaFlushTbInternal(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned __int64 v8; // r12
  _QWORD *v9; // r11
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // r14
  __int64 v14; // r13
  char v15; // cl
  __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rax
  _BYTE *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  char NextFlushDevice; // al
  char v26; // r13
  struct _EX_RUNDOWN_REF *v27; // rcx
  char v28; // [rsp+48h] [rbp-49h]
  char v29; // [rsp+49h] [rbp-48h] BYREF
  _BYTE v30[2]; // [rsp+4Ah] [rbp-47h] BYREF
  int v31; // [rsp+4Ch] [rbp-45h] BYREF
  int v32; // [rsp+50h] [rbp-41h]
  int v33; // [rsp+54h] [rbp-3Dh]
  _BYTE *v34; // [rsp+58h] [rbp-39h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+60h] [rbp-31h] BYREF
  __int64 v36; // [rsp+68h] [rbp-29h]
  __int64 v37; // [rsp+70h] [rbp-21h] BYREF
  __int64 v38; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-11h] BYREF
  __int64 v40; // [rsp+88h] [rbp-9h]
  unsigned __int64 v41; // [rsp+90h] [rbp-1h] BYREF
  __int64 v42; // [rsp+98h] [rbp+7h]
  unsigned __int64 v43; // [rsp+A0h] [rbp+Fh]

  v8 = 0LL;
  v9 = a1;
  RunRef = 0LL;
  v34 = 0LL;
  v10 = *a1;
  v32 = 0;
  v31 = 0;
  v37 = 0LL;
  if ( (*(_QWORD *)(v10 + 8224) & 0x10) == 0 )
    return;
  LOWORD(v11) = 2;
  v36 = 2LL;
  v39 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL;
  v43 = 0x4000000000000000LL;
  LOWORD(v12) = 0;
  v40 = 2LL;
  v42 = 0LL;
  if ( a4 )
    goto LABEL_4;
  if ( a2 != -1 )
  {
    LOWORD(v11) = 6;
    v36 = 6LL;
    v40 = 6LL;
    v39 = ((unsigned __int64)a3 << 32) | 0x3000000000000000LL | a2 & 0xFFFFF;
    LOWORD(v12) = 4;
    v42 = 4LL;
    v43 = ((unsigned __int16)a2 & 0xFF00 | ((a2 & 0xF0000 | ((unsigned __int64)(unsigned __int8)a2 << 8)) << 32) | 0x40000000000000LL) << 8;
LABEL_4:
    if ( a7 )
    {
      v13 = 1;
    }
    else
    {
      v11 = v11 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v12 = v12 & 0xFFE | 0x7FFFFFFFFFFFF001LL;
      v40 = v11;
      v42 = v12;
      v13 = 0;
      v36 = v11;
    }
    goto LABEL_6;
  }
  LOWORD(v11) = -4093;
  v13 = 0;
  v36 = 0x7FFFFFFFFFFFF003LL;
  v40 = 0x7FFFFFFFFFFFF003LL;
LABEL_6:
  v14 = a5;
  if ( a5 || (v15 = 0, a6) )
    v15 = 1;
  v16 = 0LL;
  v28 = v15;
  v33 = 0;
  v30[0] = 0;
  v32 = 0;
  while ( 1 )
  {
    if ( v13 )
    {
      v18 = *(_QWORD *)(a8 + 8 * v16);
      v8 = v18 >> 12;
      LODWORD(v19) = 9 * ((v18 >> 10) & 3);
      v20 = v18 & 0x3FF;
      if ( v20 )
      {
        _BitScanReverse64((unsigned __int64 *)&v19, v8 ^ (v8 + v20 * (1LL << v19)));
        LODWORD(v19) = v19 + 1;
        v8 &= ~((1LL << v19) - 1);
      }
      v32 = v19;
      if ( (_DWORD)v19 )
      {
        v17 = 1;
        v8 |= (1LL << ((unsigned __int8)v19 - 1)) - 1;
      }
      else
      {
        v17 = 0;
      }
      v32 = v17;
      v40 = (v8 << 12) | v11 & 0xFFE | v17 & 1;
    }
    else if ( (_DWORD)v16 )
    {
      goto LABEL_19;
    }
    HsaIommuSendCommand(v9, &v39);
    LOWORD(v11) = v40;
    LODWORD(v16) = v33;
    v15 = v28;
    v36 = v40;
LABEL_19:
    if ( v15 && (v13 || !(_DWORD)v16) )
    {
      v38 = a6;
      if ( v14 )
      {
        v21 = *(_QWORD *)(v14 + 48);
        v22 = v30;
        v34 = v30;
        v23 = *(_QWORD *)(v21 + 8);
        v31 = *(_DWORD *)(v14 + 60);
        RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
        v24 = *(_QWORD *)(v14 + 88);
        v37 = v23;
        NextFlushDevice = *(_BYTE *)(v24 + 48) & 1;
      }
      else
      {
        NextFlushDevice = HalpIommuGetNextFlushDevice(
                            a6,
                            (unsigned int)&v38,
                            (unsigned int)&v37,
                            (unsigned int)&v31,
                            (__int64)&v29,
                            (__int64)&RunRef,
                            (__int64)&v34);
        v22 = v34;
      }
      if ( NextFlushDevice )
      {
        v26 = v32;
        v11 = v43;
        while ( 1 )
        {
          if ( !*v22 )
          {
            if ( !ExAcquireRundownProtection_0(RunRef) )
              goto LABEL_46;
            *v22 = 1;
          }
          v41 = (unsigned __int16)v37 | v11 & 0xFFFF000000FF0000uLL | ((((unsigned __int64)(unsigned __int16)v37 << 8) | (unsigned __int8)v31) << 24);
          if ( v13 )
            v42 = (v8 << 12) | v12 & 0xFFE | v26 & 1;
          HsaIommuSendCommand(a1, &v41);
          LOWORD(v12) = v42;
          v11 = v41;
LABEL_46:
          if ( !a6
            || !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                   a6,
                                   (unsigned int)&v38,
                                   (unsigned int)&v37,
                                   (unsigned int)&v31,
                                   (__int64)&v29,
                                   (__int64)&RunRef,
                                   (__int64)&v34) )
          {
            v14 = a5;
            v43 = v11;
            LOWORD(v11) = v36;
            break;
          }
          v22 = v34;
        }
      }
      v15 = v28;
      LODWORD(v16) = v33;
    }
    v16 = (unsigned int)(v16 + 1);
    v33 = v16;
    if ( (unsigned int)v16 >= a7 )
      break;
    v9 = a1;
  }
  HsaIommuWaitCommand(a1, 0LL);
  if ( v30[0] )
  {
    RunRef = (PEX_RUNDOWN_REF)(v14 + 64);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v14 + 64));
  }
  if ( a6 )
  {
    v38 = a6;
    while ( (unsigned __int8)HalpIommuGetNextFlushDevice(
                               a6,
                               (unsigned int)&v38,
                               (unsigned int)&v37,
                               (unsigned int)&v31,
                               (__int64)&v29,
                               (__int64)&RunRef,
                               (__int64)&v34) )
    {
      if ( *v34 )
      {
        v27 = RunRef;
        *v34 = 0;
        ExReleaseRundownProtection_0(v27);
      }
    }
  }
}
