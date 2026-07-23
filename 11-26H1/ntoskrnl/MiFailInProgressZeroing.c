/*
 * XREFs of MiFailInProgressZeroing @ 0x140713090
 * Callers:
 *     <none>
 * Callees:
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 */

void __fastcall MiFailInProgressZeroing(__int64 a1)
{
  unsigned int i; // edx
  __int64 v3; // r11
  _QWORD *v4; // r9
  __int64 v5; // rbx
  _QWORD *j; // r10
  __int64 ZeroingContext; // rax
  _QWORD *v8; // r10
  _QWORD *k; // r8

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = *(_QWORD *)(56320LL * i + *(_QWORD *)(a1 + 16) + 14192);
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 400);
      v5 = 3LL;
      do
      {
        if ( *((_BYTE *)v4 - 134) )
        {
          for ( j = (_QWORD *)*v4; j != v4; j = (_QWORD *)*v8 )
          {
            ZeroingContext = MiGetZeroingContext((__int64)(j - 20));
            if ( (*(_QWORD *)(ZeroingContext + 24) & 0xA) == 8 )
              *(_QWORD *)(ZeroingContext + 24) |= 2uLL;
          }
          for ( k = *(_QWORD **)(v3 + 32); k != (_QWORD *)(v3 + 32); k = (_QWORD *)*k )
          {
            if ( (*(k - 6) & 0xA) == 8 )
              *(k - 6) |= 2uLL;
          }
        }
        v4 += 63;
        --v5;
      }
      while ( v5 );
    }
  }
}
