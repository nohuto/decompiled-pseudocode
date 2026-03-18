/*
 * XREFs of RtlLookupFunctionEntry @ 0x1402E92C0
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062118C (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062124C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BC154 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     KiInitDynamicTraceSupport @ 0x140CCBD70 (KiInitDynamicTraceSupport.c)
 *     RtlpInitMachineFrameEntries @ 0x140CDA094 (RtlpInitMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140CDA0E8 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

unsigned int *__fastcall RtlLookupFunctionEntry(unsigned __int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int128 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rbx
  int v13; // r10d
  int k; // r11d
  int v15; // edx
  unsigned __int64 v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int *result; // rax
  unsigned __int8 v20; // dl
  unsigned int i; // ecx
  unsigned int *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int j; // edx
  unsigned __int64 v28; // rbx
  unsigned int *v29; // rbp
  unsigned int ULongFromUser; // eax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !a3 )
    goto LABEL_2;
  if ( !*((_BYTE *)a3 + 7)
    || (*((_BYTE *)a3 + 7) = 0,
        v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201955 + 6],
        (result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201955 + 8]) == 0LL)
    || a1 < v31 + *result
    || a1 >= v31 + result[1] )
  {
    if ( *((_BYTE *)a3 + 6) )
    {
      if ( a1 < qword_141201960 && a1 >= qword_141201958 )
      {
        v20 = *((_BYTE *)a3 + 5);
        for ( i = v20; i < RtlpUnwindHistoryTable[0]; ++i )
        {
          v22 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * i + 8];
          v23 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * i + 6];
          if ( a1 >= v23 + *v22 && a1 < v23 + v22[1] )
          {
            result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * i + 8];
            *((_BYTE *)a3 + 5) = v20 + 1;
            *a2 = v23;
            return result;
          }
        }
      }
      if ( a1 >= *((_QWORD *)a3 + 1) && a1 < *((_QWORD *)a3 + 2) )
      {
        for ( j = *((unsigned __int8 *)a3 + 4); j < *a3; ++j )
        {
          v28 = *(_QWORD *)&a3[4 * j + 6];
          v29 = *(unsigned int **)&a3[4 * j + 8];
          if ( a1 >= v28 + *v29 && a1 < v28 + v29[1] )
          {
            ++*((_BYTE *)a3 + 4);
            *a2 = v28;
            if ( !v29 )
              return 0LL;
            if ( v28 < 0x7FFFFFFF0000LL )
              ULongFromUser = RtlReadULongFromUser(v29 + 2);
            else
              ULongFromUser = v29[2];
            if ( (ULongFromUser & 1) != 0 )
            {
              v29 = (unsigned int *)(v28 + ULongFromUser - 1LL);
              if ( v28 < 0x7FFFFFFF0000LL )
                ProbeForRead((volatile void *)(v28 + ULongFromUser - 1LL), 1uLL, 4u);
            }
            return v29;
          }
        }
      }
    }
LABEL_2:
    v33 = 0LL;
    v32 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
      || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v6 = RtlpxLookupFunctionTable(a1, &v32);
    }
    else
    {
      v6 = xmmword_141200030;
      v32 = xmmword_141200030;
      v33 = qword_141200040;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)&v32 + 1);
      v8 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *a2 = *((_QWORD *)&v32 + 1);
      v9 = *((_QWORD *)&v8 + 1) >> 3;
      if ( !(_DWORD)v9 )
        goto LABEL_21;
      v10 = a1 - v7;
      v11 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v9 - 1));
      v12 = (unsigned int *)(v6 + 12LL * (unsigned int)(v9 - 1));
      if ( v10 < v11 )
      {
        v13 = v9 - 2;
        for ( k = 0; v13 >= k; LODWORD(v11) = *(_DWORD *)(v6 + 12LL * v15) )
        {
          v15 = (k + v13) >> 1;
          v12 = (unsigned int *)(v6 + 12LL * v15);
          if ( v10 < *v12 )
          {
            v13 = v15 - 1;
          }
          else
          {
            LODWORD(v11) = *(_DWORD *)(v6 + 12LL * v15);
            if ( v10 < v12[3] )
              break;
            k = v15 + 1;
          }
        }
      }
      if ( v10 < (unsigned int)v11 || v10 >= v12[1] )
LABEL_21:
        v12 = 0LL;
      if ( v12 )
      {
        if ( a3 )
        {
          if ( !*((_BYTE *)a3 + 6) )
          {
            v24 = *a3;
            if ( (unsigned int)v24 < 0xC )
            {
              *a3 = v24 + 1;
              *(_QWORD *)&a3[4 * v24 + 6] = *a2;
              *(_QWORD *)&a3[4 * (unsigned int)v24 + 8] = v12;
              v25 = *a2 + *v12;
              v26 = *a2 + v12[1];
              if ( v25 < *((_QWORD *)a3 + 1) )
                *((_QWORD *)a3 + 1) = v25;
              if ( v26 > *((_QWORD *)a3 + 2) )
              {
                *((_QWORD *)a3 + 2) = v26;
                v17 = v12;
                v16 = *a2;
                goto LABEL_17;
              }
            }
          }
        }
      }
      v16 = *a2;
      v17 = v12;
      if ( v12 )
      {
LABEL_17:
        if ( v16 < 0x7FFFFFFF0000LL )
          v18 = RtlReadULongFromUser(v17 + 2);
        else
          v18 = v17[2];
        if ( (v18 & 1) != 0 )
        {
          v12 = (unsigned int *)(v16 + v18 - 1LL);
          if ( v16 < 0x7FFFFFFF0000LL )
            ProbeForRead((volatile void *)(v16 + v18 - 1LL), 1uLL, 4u);
        }
        return v12;
      }
    }
    return 0LL;
  }
  *a2 = v31;
  return result;
}
