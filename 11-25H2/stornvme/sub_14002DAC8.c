/*
 * XREFs of sub_14002DAC8 @ 0x14002DAC8
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140023A4C @ 0x140023A4C (sub_140023A4C.c)
 */

void __fastcall sub_14002DAC8(__int64 a1, unsigned __int8 a2)
{
  int v4; // eax
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( (v4 & 8) == 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4056) = (*(_DWORD *)(a1 + 4056) | 2) ^ ((*(_BYTE *)(a1 + 4056) | 2) ^ (unsigned __int8)(4 * a2)) & 4;
      }
      else
      {
        v5 = sub_140023A4C(a1);
        v6 = v5;
        if ( v5 )
        {
          *(_BYTE *)(*((_QWORD *)v5 + 12) + 4225LL) |= 1u;
          *(_BYTE *)(*((_QWORD *)v5 + 12) + 4225LL) &= ~2u;
          *(_WORD *)(*((_QWORD *)v5 + 12) + 4212LL) = 0;
          v7 = *((_QWORD *)v5 + 12);
          v8 = *(_DWORD *)(v7 + 4140);
          *(_BYTE *)(v7 + 4096) = 9;
          *(_BYTE *)(v7 + 4136) = 17;
          *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ a2) & 1;
          *(_QWORD *)(*((_QWORD *)v6 + 12) + 4192LL) = sub_14002DD10;
          sub_1400092F0(a1, (__int64)(v6 + 8));
          LOBYTE(v9) = 1;
          sub_140008130(a1, (__int64)(v6 + 8), v9);
        }
      }
    }
  }
}
