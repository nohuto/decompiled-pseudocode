/*
 * XREFs of RtlpSetRvaListRvaStateBits @ 0x140A21070
 * Callers:
 *     RtlpCompressRvaList @ 0x140A20E50 (RtlpCompressRvaList.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpSetRvaListRvaStateBits(__int64 a1, int a2, signed __int32 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned int v5; // eax
  signed __int32 v6; // [rsp+18h] [rbp+18h] BYREF

  v6 = a3;
  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 > 1 )
    {
      v4 = a2 * v3;
      v5 = 0;
      do
      {
        if ( _bittest(&v6, v5) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + ((v4 + (unsigned __int64)v5) >> 3)) |= 1 << ((v4 + v5) & 7);
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 8) );
    }
  }
}
