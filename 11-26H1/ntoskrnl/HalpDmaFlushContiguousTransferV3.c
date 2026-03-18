/*
 * XREFs of HalpDmaFlushContiguousTransferV3 @ 0x14043E23C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x14043EEB0 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14058BA00 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaNextContiguousPiece @ 0x14035BB44 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x14044011C (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaFlushContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  if ( (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, a5) != a5 || *(_BYTE *)(a3 + 64) )
  {
    if ( !a6 )
    {
      LODWORD(v15) = a5;
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v15, 0, 0, a7);
    }
    if ( a8 )
    {
      v13 = ((a4 & 0xFFF) + (unsigned __int64)a5 + 4095) >> 12;
      if ( (_DWORD)v13 )
      {
        v14 = (unsigned int)v13;
        do
        {
          a3 = *(_QWORD *)(a3 + 8);
          --v14;
        }
        while ( v14 );
      }
      *a8 = a3;
    }
  }
  else
  {
    if ( !a6 && !*(_BYTE *)(a1 + 445) )
    {
      LOBYTE(v16) = a7;
      LOBYTE(v15) = 0;
      HalpDmaFlushBuffer(v12, a2, a4, a5, v15, v16);
    }
    if ( a8 )
      *a8 = a3;
  }
}
