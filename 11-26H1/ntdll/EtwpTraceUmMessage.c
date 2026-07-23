/*
 * XREFs of EtwpTraceUmMessage @ 0x1800BB44C
 * Callers:
 *     EtwTraceMessage @ 0x1800BB270 (EtwTraceMessage.c)
 *     EtwTraceMessageVa @ 0x1800BB360 (EtwTraceMessageVa.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpReserveTraceBuffer @ 0x18005C960 (EtwpReserveTraceBuffer.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall EtwpTraceUmMessage(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, _QWORD *a5)
{
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // r8d
  char v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // r14
  _QWORD *i; // rcx
  __int64 v15; // rdi
  signed __int32 v16; // eax
  volatile signed __int32 *v17; // rcx
  signed __int32 *v18; // rdi
  struct _TEB *v19; // rcx
  _DWORD *v20; // rdi
  __int64 v21; // r14
  const void *v22; // rdx
  size_t v23; // rbx
  int v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+60h] [rbp-38h]
  unsigned int v30; // [rsp+A0h] [rbp+8h] BYREF
  __int16 v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v26 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v30 = a1 & 0x7FFF;
  if ( !EtwpLoggerArray )
    goto LABEL_5;
  if ( (a1 & 0x7FFFu) < 0x40 || (v9 = EtwpDemuxUmTraceHandle(a1, &v30)) == 0 )
  {
    v8 = 16LL * v30;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
    if ( (*(_QWORD *)(v8 + EtwpLoggerArray) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
LABEL_5:
      v9 = 4201;
      goto LABEL_6;
    }
    v7 = *(_QWORD *)(v8 + EtwpLoggerArray);
    v29 = v7;
    v9 = 0;
  }
LABEL_6:
  if ( !v9 )
  {
    v10 = a2 & 0x18;
    v25 = v10;
    v11 = a2 & 0xFE;
    if ( *(_QWORD *)(v7 + 384) )
      v11 = a2;
    v30 = v11 & 1;
    v12 = (v10 != 0 ? 8 : 0)
        + ((v11 & 2) != 0 ? 0x10 : 0)
        + ((v11 & 4) != 0 ? 4 : 0)
        + ((v11 & 0x20) != 0 ? 16 : 8)
        + 4 * v30;
    v13 = (__int64)a5;
    for ( i = a5; *i; v12 += *((_DWORD *)i - 2) )
    {
      i += 2;
      if ( v12 + *((_DWORD *)i - 2) < v12 )
        return 534LL;
    }
    v15 = EtwpReserveTraceBuffer(
            v7,
            v12,
            NtCurrentTeb()->CurrentIdealProcessor.Reserved,
            (LARGE_INTEGER *)((unsigned __int64)&v27 & -(__int64)(v10 != 0)),
            &v26);
    v16 = 0;
    v17 = *(volatile signed __int32 **)(v7 + 384);
    if ( v17 )
      v16 = _InterlockedIncrement(v17);
    if ( v15 )
    {
      *(_DWORD *)v15 = -1879048192;
      *(_WORD *)v15 = v12;
      *(_WORD *)(v15 + 6) = v11 & 0x3F | 0x80;
      *(_WORD *)(v15 + 4) = v31;
      v18 = (signed __int32 *)(v15 + 8);
      if ( v30 )
        *v18++ = v16;
      if ( (v11 & 4) != 0 )
      {
        *v18++ = *a3;
      }
      else if ( (v11 & 2) != 0 )
      {
        *(_OWORD *)v18 = *(_OWORD *)a3;
        v18 += 4;
      }
      if ( v25 )
      {
        *(_QWORD *)v18 = v27;
        v18 += 2;
      }
      if ( (v11 & 0x20) != 0 )
      {
        v19 = NtCurrentTeb();
        *v18 = (signed __int32)v19->ClientId.UniqueThread;
        v20 = v18 + 1;
        *v20 = v19->ClientId.UniqueProcess;
        v18 = v20 + 1;
      }
      v28 = v13;
      while ( 1 )
      {
        v21 = v13 + 8;
        v28 = v21;
        v22 = *(const void **)(v21 - 8);
        if ( !v22 )
          break;
        v13 = v21 + 8;
        v28 = v13;
        v23 = *(_QWORD *)(v13 - 8);
        memmove(v18, v22, v23);
        v18 = (signed __int32 *)((char *)v18 + v23);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
    }
    else if ( v12 > 0xFFF8 )
    {
      v9 = 534;
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 196) < v12 ? 234 : 8;
    }
    _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v7 + 20) + EtwpLoggerArray + 8));
  }
  return v9;
}
