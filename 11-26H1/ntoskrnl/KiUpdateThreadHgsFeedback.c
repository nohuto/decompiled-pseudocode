/*
 * XREFs of KiUpdateThreadHgsFeedback @ 0x140226C00
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021B160 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndIdleCycleAccumulation @ 0x140224900 (KiEndIdleCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140225DC0 (KiEndThreadAccountingPeriodEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402261A0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     EtwTraceWorkloadClassUpdate @ 0x14052D120 (EtwTraceWorkloadClassUpdate.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall KiUpdateThreadHgsFeedback(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  char v23; // al
  __int64 v24; // r8
  int v25; // edx
  char v26; // r9
  char v27; // al
  _QWORD v28[3]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v29[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-38h]

  if ( !KiHgsPlusEnabled || a2 && *(_UNKNOWN **)(a2 + 544) == &unk_140FC8F40 )
    return;
  v7 = *(_QWORD *)(a2 + 1072);
  *(_QWORD *)(v7 + 8) += a3;
  v8 = *(_QWORD *)(v7 + 8);
  v9 = __rdtsc() - *(_QWORD *)v7;
  if ( v9 <= qword_140FBE3F8 && !a4 )
    return;
  v10 = __rdtsc();
  v11 = *(_QWORD *)(a2 + 1072);
  *(_QWORD *)v11 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
  *(_QWORD *)(*(_QWORD *)(a2 + 1072) + 8LL) = 0LL;
  if ( v9 <= qword_140FBE3F8 || v8 <= qword_140FBE408 )
    return;
  v12 = a1[141];
  v13 = 0LL;
  LOBYTE(v14) = 0;
  v15 = 0;
  if ( v12 == 2 )
  {
    v11 = 6098LL;
    v16 = __readmsr(0x17D2u);
    v15 = v16;
    v14 = (unsigned __int64)v16 >> 63;
LABEL_9:
    v13 = v16;
    goto LABEL_15;
  }
  if ( v12 == 1 )
  {
    v11 = 3221226753LL;
    v16 = __readmsr(0xC0000501);
    v15 = v16 & 7;
    LOBYTE(v14) = v16 < 0;
    goto LABEL_9;
  }
LABEL_15:
  if ( SBYTE4(xmmword_140FBFC10) < 0 )
  {
    v29[0] = *(_DWORD *)(a2 + 1296);
    v30 = v13;
    v29[1] = KeGetCurrentPrcb()->Number;
    v28[0] = v29;
    v28[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v28, 1, -1610612608, 3960, 514);
  }
  if ( (_BYTE)v14 && v15 < (unsigned int)KiHgsPlusConfiguration )
  {
    *(_DWORD *)(v7 + 16) = 0;
    v17 = *(unsigned __int8 *)(a2 + 517);
    v11 = *(_QWORD *)(a2 + 1072);
    if ( (_BYTE)v17 == v15 )
    {
      *(_QWORD *)(v11 + 20) = 0LL;
      return;
    }
    v13 = *((unsigned __int16 *)&KiHgsPlusConfiguration + v17 + 38);
    v18 = *((_WORD *)&KiHgsPlusConfiguration + v15 + 38);
    if ( v18 >= (unsigned __int16)v13 )
    {
      *(_DWORD *)(v11 + 20) = 0;
      if ( v18 <= (unsigned __int16)v13 )
      {
        v20 = 2LL;
      }
      else
      {
        v22 = *(_DWORD *)(v11 + 24) + 1;
        *(_DWORD *)(v11 + 24) = v22;
        if ( v22 < dword_140FBE420 )
          return;
        v20 = 4LL;
      }
      *(_DWORD *)(v11 + 24) = 0;
    }
    else
    {
      v19 = *(_DWORD *)(v11 + 20) + 1;
      *(_QWORD *)(v11 + 20) = v19;
      if ( v19 < dword_140FBE41C )
        return;
      *(_DWORD *)(v11 + 20) = 0;
      v20 = 8LL;
    }
    *(_BYTE *)(a2 + 517) = v15;
    if ( (WORD2(xmmword_140FBFC10) & 0x100) == 0 )
      goto LABEL_27;
    v21 = v15;
  }
  else
  {
    if ( ++*(_DWORD *)(v7 + 16) < (unsigned int)dword_140FBE410 )
      return;
    if ( dword_140FBE418 )
      v27 = dword_140FBE414;
    else
      v27 = byte_140FBE45C;
    *(_BYTE *)(a2 + 517) = v27;
    *(_QWORD *)(v7 + 20) = 0LL;
    *(_DWORD *)(v7 + 16) = 0;
    if ( (WORD2(xmmword_140FBFC10) & 0x100) == 0 )
      goto LABEL_27;
    v21 = *(unsigned __int8 *)(a2 + 517);
    v20 = 16LL;
  }
  EtwTraceWorkloadClassUpdate(a2, v21, v20);
LABEL_27:
  if ( !a4 )
  {
    a1[14521] = 1;
    if ( a1[32] )
    {
      a1[6] = 1;
    }
    else
    {
      *(_OWORD *)((char *)v28 + 4) = 0LL;
      if ( (KiTrapFeatures & 0x10) != 0 )
      {
        v23 = HalpDisableInterrupts(v11, v13, KeGetCurrentPrcb());
        v25 = *(_DWORD *)(v24 + 168);
        v26 = v23;
        *(_DWORD *)(v24 + 168) = v25 | 4;
        if ( !v25 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v26 )
          _enable();
      }
      LODWORD(v28[0]) = 5;
      HalpInterruptSendIpi(v28, 47LL);
    }
  }
}
