/*
 * XREFs of sub_140083B90 @ 0x140083B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001FBD0 @ 0x14001FBD0 (sub_14001FBD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140083B90(__int64 a1, int a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rax

  if ( a2 )
  {
    v3 = *(_QWORD **)(a1 + 1048);
    if ( v3[8] )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        v8 = (_QWORD *)v3[12];
        while ( v8 )
        {
          v9 = v8[2];
          v8 = (_QWORD *)*v8;
          sub_1400B6010(*(_QWORD *)(v9 + 136));
        }
      }
      else
      {
        v4 = (_QWORD *)v3[6];
        while ( v4 )
        {
          v5 = v4[2];
          v4 = (_QWORD *)*v4;
          sub_1400B6010(*(_QWORD *)(v5 + 128));
        }
        v6 = (_QWORD *)v3[12];
        while ( v6 )
        {
          v7 = v6[2];
          v6 = (_QWORD *)*v6;
          if ( *(_QWORD *)(v7 + 144) )
            sub_1400B6010(*(_QWORD *)(v7 + 136));
        }
      }
    }
  }
  sub_14001FBD0(a1 + 384);
  *(_QWORD *)(a1 + 1048) = 0LL;
  _InterlockedExchange64((volatile __int64 *)(a1 + 952), *(_QWORD *)(a1 + 960));
  *(_QWORD *)(a1 + 960) = 0LL;
  WakeByAddressAll((PVOID)(a1 + 952));
  *(_QWORD *)(a1 + 1056) = 0LL;
}
