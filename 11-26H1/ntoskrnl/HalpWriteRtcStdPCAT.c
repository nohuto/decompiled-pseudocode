/*
 * XREFs of HalpWriteRtcStdPCAT @ 0x1404498F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpWriteRtcStdPCAT(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned int v12; // r8d
  unsigned __int8 v14; // al

  v3 = a1;
  v4 = a1 + a3;
  HalpAcquireCmosSpinLock(0LL);
  v7 = 0LL;
  do
  {
    __outbyte(0x70u, 0xAu);
    v8 = __inbyte(0x71u);
  }
  while ( v8 < 0 );
  __outbyte(0x70u, 0xBu);
  v9 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  v10 = v9 | 0x80;
  while ( 1 )
  {
    __outbyte(0x71u, v10);
    if ( v3 >= v4 )
      break;
    v14 = v3++;
    __outbyte(0x70u, v14);
    v10 = *(_BYTE *)(v7 + a2);
    v7 = (unsigned int)(v7 + 1);
  }
  __outbyte(0x70u, 0xBu);
  v11 = __inbyte(0x71u);
  LOBYTE(v6) = v11 & 0x7F;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v11 & 0x7F);
  HalpReleaseCmosSpinLock(v6, 113LL, v7);
  return v12;
}
