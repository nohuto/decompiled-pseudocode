/*
 * XREFs of VmpQueryAccessedState @ 0x14042B094
 * Callers:
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 * Callees:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14026FE58 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     VmpProcessContextLockShared @ 0x14042BCD8 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x14042BD24 (VmpProcessContextUnlockShared.c)
 *     VmpProcessAccessedBatch @ 0x14042C004 (VmpProcessAccessedBatch.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     VmpLogQueryAccessedState @ 0x14063FB10 (VmpLogQueryAccessedState.c)
 */

ULONG64 __fastcall VmpQueryAccessedState(__int64 SpinLock, _QWORD *a2, int a3, int a4)
{
  unsigned int v4; // esi
  _QWORD *v6; // rdi
  int v7; // ebx
  int v8; // r12d
  ULONG64 v9; // r13
  _QWORD *VmInternal; // r15
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rax
  bool v14; // zf
  ULONG64 result; // rax
  int v16; // ebx
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // r8
  int v20; // [rsp+38h] [rbp-59h]
  int v21; // [rsp+48h] [rbp-49h]
  int v22; // [rsp+4Ch] [rbp-45h]
  __int64 v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+60h] [rbp-31h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-29h]
  unsigned __int64 v27; // [rsp+70h] [rbp-21h]
  __int128 v28; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-9h] BYREF
  __int64 v30; // [rsp+90h] [rbp-1h]
  __int128 v31; // [rsp+98h] [rbp+7h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v33; // [rsp+100h] [rbp+6Fh] BYREF
  int v34; // [rsp+108h] [rbp+77h]
  int v35; // [rsp+110h] [rbp+7Fh]

  v35 = a4;
  v34 = a3;
  v4 = 0;
  v24 = 0;
  v22 = 1;
  v32 = 0LL;
  v27 = (unsigned __int64)&a2[a3];
  v6 = a2;
  v21 = 0;
  v7 = 0;
  v26 = 0LL;
  v8 = 0;
  v28 = 0LL;
  v31 = 0LL;
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && (*(_DWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 0x200LL) != 0
    && (*(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL) & 0x200LL) == *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider
                                                                                        + 24LL) )
  {
    v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v9 = 0LL;
  }
  QpcTimeStamp = v9;
  VmInternal = KeGetCurrentPrcb()->VmInternal;
  v11 = VmpProcessContextLockShared((PEX_SPIN_LOCK)SpinLock);
  v23 = v11;
  if ( (unsigned __int64)v6 < v27 )
  {
    v12 = 0;
    while ( 1 )
    {
      v29 = *v6 >> 12;
      v30 = 1LL;
      VmpConvertPortionVpnRangeToGpnRange(SpinLock, &v29, 0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v31, &v28, &v24, 0);
      if ( *((_QWORD *)&v28 + 1) )
      {
        if ( v4 )
        {
          if ( VmInternal[v4 - 1] != (_QWORD)v28 - 1LL )
          {
            v12 = 0;
            v22 = 0;
          }
        }
        else
        {
          v26 = v6;
          v12 = 1;
        }
        v13 = v4++;
        v14 = v30 == 0;
        VmInternal[v13] = v28;
        if ( !v14 )
        {
          --v6;
LABEL_27:
          v17 = *(_QWORD *)(SpinLock + 72);
          VmpProcessContextUnlockShared(SpinLock, v23);
          VmpProcessAccessedBatch(SpinLock, (_DWORD)VmInternal, v4, (_DWORD)v26, (__int64)(VmInternal + 512), v35, v12);
          v4 = 0;
          v11 = VmpProcessContextLockShared((PEX_SPIN_LOCK)SpinLock);
          v23 = v11;
          if ( v17 != *(_QWORD *)(SpinLock + 72) )
          {
            v31 = 0LL;
            v32 = 0LL;
          }
          ++v8;
          goto LABEL_12;
        }
        if ( v4 == 512 )
          goto LABEL_27;
      }
      else
      {
        *v6 |= 6uLL;
        ++v21;
        if ( v4 )
          goto LABEL_27;
      }
      v11 = v23;
LABEL_12:
      if ( (unsigned __int64)++v6 >= v27 )
      {
        LODWORD(v33) = v12;
        v9 = QpcTimeStamp;
        v7 = v33;
        break;
      }
    }
  }
  result = VmpProcessContextUnlockShared(SpinLock, v11);
  if ( v4 )
  {
    v20 = v7;
    v16 = v35;
    result = VmpProcessAccessedBatch(
               SpinLock,
               (_DWORD)VmInternal,
               v4,
               (unsigned int)v6 - 8 * v4,
               (__int64)(VmInternal + 512),
               v35,
               v20);
    ++v8;
  }
  else
  {
    v16 = v35;
  }
  if ( v9 )
  {
    result = KeQueryUnbiasedInterruptTimePrecise(&v33);
    if ( *(_QWORD *)&VmpTraceLoggingProvider )
    {
      if ( **(_DWORD **)&VmpTraceLoggingProvider )
      {
        result = tlgKeywordOn(*(_QWORD *)&VmpTraceLoggingProvider, 512LL);
        if ( (_BYTE)result )
          return VmpLogQueryAccessedState(v18, v34, v16, v21, v8, v22, v19, *(_QWORD *)(SpinLock + 104));
      }
    }
  }
  return result;
}
