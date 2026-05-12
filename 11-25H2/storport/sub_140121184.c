/*
 * XREFs of sub_140121184 @ 0x140121184
 * Callers:
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 *     sub_14012BD90 @ 0x14012BD90 (sub_14012BD90.c)
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 * Callees:
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 */

char __fastcall sub_140121184(__int64 a1)
{
  _DWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi

  v1 = qword_140168E40;
  v2 = 0;
  if ( !*(_DWORD *)a1 && !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(v3 + 24);
    if ( *((_DWORD *)qword_140168E40 + 3) )
    {
      do
        LOBYTE(v3) = sub_1401190B0(*(_QWORD *)(v4 + 16), 0LL, v2++);
      while ( v2 < v1[3] );
    }
  }
  return v3;
}
