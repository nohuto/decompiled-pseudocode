/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x18008B7D0
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18008B664 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrLock @ 0x18010FAC8 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rbx
  _QWORD **v5; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rdx

  v3 = (_QWORD **)(a1 + 128);
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 136);
  if ( *(_QWORD *)(a1 + 128) || *v5 )
  {
    RtlpHpSegMgrLock();
    v9 = *v5;
    if ( *v5 || (a3 & 2) == 0 && (v9 = *v3, v5 = v3, *v3) )
    {
      v10 = *((unsigned __int16 *)v9 - 3);
      _BitScanForward((unsigned int *)&v11, v10);
      v12 = v10 ^ (1 << v11);
      *((_WORD *)v9 - 3) = v12;
      if ( !(_WORD)v12 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v9 = 0LL;
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 120));
      v13 = qword_1801C8190[6 * *((unsigned __int8 *)v9 - 15)];
      return *(_QWORD *)(v13 + 8)
           + (unsigned int)(a2 * v11)
           + (((unsigned __int64)v9 - *(_QWORD *)(v13 + 40) - 16) >> *(_DWORD *)(v13 + 24) << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 120));
    }
  }
  return v4;
}
