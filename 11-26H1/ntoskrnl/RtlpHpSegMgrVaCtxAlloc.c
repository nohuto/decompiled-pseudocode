/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x140351BC4
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x140351A94 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x1404BDE5C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1404C24DC (RtlpHpSegMgrUnlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rbx
  _QWORD **v5; // rdi
  char v9; // al
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // r14d
  int v14; // eax
  __int64 v15; // rdx

  v3 = (_QWORD **)(a1 + 128);
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 136);
  if ( *(_QWORD *)(a1 + 128) || *v5 )
  {
    v9 = RtlpHpSegMgrLock();
    v10 = *v5;
    LOBYTE(v11) = v9;
    if ( *v5 || (a3 & 2) == 0 && (v10 = *v3, v5 = v3, *v3) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward((unsigned int *)&v13, v12);
      v14 = v12 ^ (1 << v13);
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v10 = 0LL;
      }
      RtlpHpSegMgrUnlock(a1, v11);
      v15 = *((_QWORD *)&unk_140E68F60 + 6 * *((unsigned __int8 *)v10 - 15));
      return *(_QWORD *)(v15 + 8)
           + (unsigned int)(a2 * v13)
           + (((unsigned __int64)v10 - *(_QWORD *)(v15 + 40) - 16) >> *(_DWORD *)(v15 + 24) << 20);
    }
    else
    {
      RtlpHpSegMgrUnlock(a1, v11);
    }
  }
  return v4;
}
