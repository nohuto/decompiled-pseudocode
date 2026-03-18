/*
 * XREFs of sub_14001B0C8 @ 0x14001B0C8
 * Callers:
 *     sub_14001B094 @ 0x14001B094 (sub_14001B094.c)
 *     sub_14001B378 @ 0x14001B378 (sub_14001B378.c)
 * Callees:
 *     sub_14001B23C @ 0x14001B23C (sub_14001B23C.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14001B0C8(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  signed __int32 v5; // edi
  __int16 v7; // bx
  signed __int32 v8; // eax
  char i; // cl
  unsigned int v10; // esi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v12 = 0;
  v13 = a2;
  v5 = a2;
  if ( qword_1400421F8 )
    v3 = qword_1400421F8();
  v7 = sub_14001B23C(a3, &v12);
  if ( !*(_BYTE *)(a3 + 28) )
    v12 = v3 != 0 ? v12 : 0;
  v8 = v5;
  for ( i = v5; ; i = v8 )
  {
    v10 = v8;
    LODWORD(v13) = v8;
    if ( v12 )
    {
      LODWORD(v13) = v8;
      if ( (i & 2) == 0 )
      {
        v10 = v7 & 0x9C1 | v8 & 0xFFFFF63E | 2;
        LODWORD(v13) = v10;
      }
    }
    if ( (v5 & 4) == 0 )
    {
      v10 = v10 & 0xFFFFFBFF | v7 & 0x400 | 4;
      LODWORD(v13) = v10;
    }
    v8 = _InterlockedCompareExchange(a1, v10, v5);
    if ( v5 == v8 )
      break;
    v5 = v8;
  }
  if ( (v5 & 4) == 0 && qword_140042140 )
    qword_140042140(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v12 )
    LODWORD(v13) = v10 & 0xFFFFF63E | v7 & 0x9C1;
  return v13;
}
