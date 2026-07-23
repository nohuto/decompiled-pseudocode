/*
 * XREFs of EtwpTraceUmEvent @ 0x18005C200
 * Callers:
 *     EtwLogTraceEvent @ 0x18005C190 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x180125E80 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpRelogEvent @ 0x18005C550 (EtwpRelogEvent.c)
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpReserveTraceBuffer @ 0x18005C960 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpTraceUmEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  size_t v4; // rbx
  unsigned int v6; // r14d
  _DWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // r13d
  unsigned int v13; // edi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int i; // edx
  unsigned int v17; // ecx
  struct _TEB *v18; // rax
  unsigned __int64 *v19; // r9
  char *v20; // rax
  const void *v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rbx
  char *v24; // rbx
  unsigned __int64 v25; // rax
  struct _TEB *v26; // rcx
  int v27; // eax
  unsigned int v29; // [rsp+30h] [rbp-198h] BYREF
  int v30; // [rsp+34h] [rbp-194h]
  unsigned int v31; // [rsp+38h] [rbp-190h]
  unsigned int v32; // [rsp+3Ch] [rbp-18Ch]
  unsigned __int64 v33; // [rsp+40h] [rbp-188h]
  int v34; // [rsp+48h] [rbp-180h]
  int v35; // [rsp+4Ch] [rbp-17Ch]
  void *v36; // [rsp+50h] [rbp-178h]
  __int64 v37; // [rsp+58h] [rbp-170h] BYREF
  void *v38; // [rsp+60h] [rbp-168h]
  unsigned __int64 v39; // [rsp+68h] [rbp-160h] BYREF
  _DWORD *v40; // [rsp+70h] [rbp-158h]
  void *Src[32]; // [rsp+80h] [rbp-148h] BYREF

  v35 = a4;
  v4 = a3;
  v6 = 0;
  v37 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  LODWORD(v33) = 0;
  v39 = 0LL;
  v8 = a1;
  LODWORD(v8) = a1 & 0x7FFF;
  v29 = v8;
  if ( !EtwpLoggerArray )
    goto LABEL_5;
  if ( (unsigned int)v8 >= 0x40 )
  {
    v10 = EtwpDemuxUmTraceHandle(a1, &v29);
    if ( v10 )
      goto LABEL_6;
    v8 = v29;
  }
  v9 = 16 * v8;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + EtwpLoggerArray + 8));
  if ( (*(_QWORD *)(v9 + EtwpLoggerArray) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v9 + EtwpLoggerArray + 8));
LABEL_5:
    v10 = 4201;
    goto LABEL_6;
  }
  v7 = *(_DWORD **)(v9 + EtwpLoggerArray);
  v40 = v7;
  v10 = 0;
LABEL_6:
  if ( !v10 )
  {
    v11 = *a2;
    v30 = v11;
    if ( v11 < (unsigned int)v4 )
    {
      v10 = 87;
      goto LABEL_46;
    }
    v12 = *((_DWORD *)a2 + 11);
    if ( (v12 & 0x200000) != 0 )
    {
      v10 = EtwpRelogEvent(v7, a2);
LABEL_46:
      _InterlockedDecrement((volatile signed __int32 *)(16LL * (unsigned int)v7[5] + EtwpLoggerArray + 8));
      return v10;
    }
    v29 = v12 & 0x100000;
    if ( (v12 & 0x100000) != 0 )
    {
      v31 = 0;
      v13 = v11 - v4;
      if ( v13 > 0x100 )
      {
        v10 = 13;
        goto LABEL_46;
      }
      memset_thunk_772440563353939046(Src, 0, 0x100uLL);
      v14 = v13;
      v33 = v13;
      if ( v13 )
      {
        memmove(Src, (char *)a2 + v4, v13);
        v14 = v33;
      }
      v11 = v4;
      v30 = v4;
      v15 = v14 >> 4;
      v33 = v15;
      for ( i = 0; ; ++i )
      {
        v31 = i;
        if ( i >= (unsigned int)v15 )
          break;
        v17 = (unsigned int)Src[2 * i + 1];
        v11 += v17;
        v30 = v11;
        if ( v11 < v17 )
        {
          v10 = 234;
          goto LABEL_46;
        }
        LODWORD(v15) = v33;
      }
    }
    v34 = v12 & 0x200;
    v18 = NtCurrentTeb();
    v19 = &v39;
    if ( (v12 & 0x200) != 0 )
      v19 = 0LL;
    v20 = (char *)EtwpReserveTraceBuffer(v7, v11, v18->CurrentIdealProcessor.Reserved, v19, &v37);
    v38 = v20;
    if ( v20 )
    {
      if ( v29 )
      {
        v32 = 0;
        v36 = &v20[v4];
        memmove(v20, a2, v4);
        while ( 1 )
        {
          v32 = v6;
          if ( v6 >= (unsigned int)v33 )
            break;
          v21 = Src[2 * v6];
          v22 = (unsigned int)Src[2 * v6 + 1];
          if ( v21 && v22 )
          {
            v23 = v22;
            memmove(v36, v21, v22);
            v36 = (char *)v36 + v23;
          }
          ++v6;
        }
        v24 = (char *)v38;
      }
      else
      {
        v24 = (char *)v38;
        memmove(v38, a2, v11);
      }
      if ( (v12 & 0x80000) != 0 )
        *(_OWORD *)(v24 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
      if ( !v34 )
      {
        v25 = v39;
        *((_QWORD *)v24 + 2) = v39;
        if ( v7[4] != 3 )
          v25 = __rdtsc();
        *((_QWORD *)v24 + 5) = v25;
      }
      *(_DWORD *)v24 = v35 | v11;
      v26 = NtCurrentTeb();
      *((_DWORD *)v24 + 2) = v26->ClientId.UniqueThread;
      *((_DWORD *)v24 + 3) = v26->ClientId.UniqueProcess;
      _InterlockedDecrement((volatile signed __int32 *)(v37 + 12));
    }
    else if ( v11 > 0xFFF8 )
    {
      v10 = 534;
    }
    else
    {
      v27 = 8;
      if ( v11 > v7[49] )
        v27 = 234;
      v10 = v27;
    }
    goto LABEL_46;
  }
  return v10;
}
