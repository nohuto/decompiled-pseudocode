/*
 * XREFs of VidSchHasReadyPackets @ 0x1400068E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v5; // r8
  _QWORD *k; // r8
  __int64 *m; // rdx
  __int64 v8; // r9
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+40h] [rbp-18h]

  v11 = 0;
  v10[0] = a1 + 2016;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v10);
  if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 504, 0LL, *(unsigned int *)(a1 + 92)) )
  {
    v2 = (_QWORD **)(a1 + 360);
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 4); j != i - 4; j = (_QWORD *)*j )
      {
        v5 = j[81];
        if ( (_QWORD *)v5 != j + 81 && (*(_DWORD *)(v5 + 16) != 4 || (*(_DWORD *)(v5 + 248) & 1) != 0) )
          goto LABEL_18;
      }
      for ( k = (_QWORD *)*(i - 2); k != i - 2; k = (_QWORD *)*k )
      {
        for ( m = (__int64 *)k[4]; m != k + 4; m = (__int64 *)*m )
        {
          if ( *((_DWORD *)m + 36) )
            goto LABEL_18;
          v8 = m[19];
          if ( (__int64 *)v8 != m + 19 && (*(_DWORD *)(v8 + 16) != 4 || (*(_DWORD *)(v8 + 248) & 1) != 0) )
            goto LABEL_18;
        }
      }
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
    return 0;
  }
  else
  {
LABEL_18:
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
    return 1;
  }
}
