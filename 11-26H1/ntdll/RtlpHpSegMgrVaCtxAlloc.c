/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x18006EC08
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrLock @ 0x18010F658 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(_RTL_SRWLOCK *a1, int a2, char a3)
{
  _RTL_SRWLOCK *v3; // r14
  __int64 v4; // rbx
  _RTL_SRWLOCK *v5; // rsi
  _QWORD *Value; // rdi
  unsigned int v10; // eax
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rdx

  v3 = a1 + 16;
  v4 = 0LL;
  v5 = a1 + 17;
  if ( a1[16].Value || v5->Value )
  {
    RtlpHpSegMgrLock();
    Value = (_QWORD *)v5->Value;
    if ( v5->Value || (a3 & 2) == 0 && (Value = (_QWORD *)v3->Value, v5 = v3, v3->Value) )
    {
      v10 = *((unsigned __int16 *)Value - 3);
      _BitScanForward((unsigned int *)&v11, v10);
      v12 = v10 ^ (1 << v11);
      *((_WORD *)Value - 3) = v12;
      if ( !(_WORD)v12 )
      {
        if ( v5->Value )
          v5->0 = *($2F38BEDF952D5DA5F266621B11247D04 *)v5->Value;
        *Value = 0LL;
      }
      RtlReleaseSRWLockExclusive(a1 + 15);
      v13 = qword_1801C71E0[6 * *((unsigned __int8 *)Value - 15)];
      return *(_QWORD *)(v13 + 8)
           + (unsigned int)(a2 * v11)
           + (((unsigned __int64)Value - *(_QWORD *)(v13 + 40) - 16) >> *(_DWORD *)(v13 + 24) << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a1 + 15);
    }
  }
  return v4;
}
