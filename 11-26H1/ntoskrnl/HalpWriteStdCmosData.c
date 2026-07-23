/*
 * XREFs of HalpWriteStdCmosData @ 0x1404492E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpWriteStdCmosData(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  unsigned int v10; // r8d

  v3 = a1;
  v4 = a1 + a3;
  HalpAcquireCmosSpinLock(0LL);
  v8 = 0LL;
  while ( v3 < v4 )
  {
    v9 = v3++;
    __outbyte(0x70u, v9);
    v6 = 113LL;
    __outbyte(0x71u, *(_BYTE *)(v8 + a2));
    v8 = (unsigned int)(v8 + 1);
  }
  HalpReleaseCmosSpinLock(v7, v6, v8);
  return v10;
}
