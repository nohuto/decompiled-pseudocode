/*
 * XREFs of HalpReadRtcStdPCAT @ 0x140449870
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpReadRtcStdPCAT(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  unsigned int v9; // r8d
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al

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
  while ( v3 < v4 )
  {
    v11 = v3++;
    __outbyte(0x70u, v11);
    v12 = __inbyte(0x71u);
    *(_BYTE *)(v7 + a2) = v12;
    v7 = (unsigned int)(v7 + 1);
  }
  HalpReleaseCmosSpinLock(v6, 113LL, v7);
  return v9;
}
