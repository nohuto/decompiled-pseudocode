/*
 * XREFs of MiInitializeHardwareAccelerators @ 0x140D014CC
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140D01528 (MiRegisterForHardwareAcceleratorChanges.c)
 */

void __fastcall MiInitializeHardwareAccelerators(int a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  char *v3; // rcx

  if ( a1 == 1 )
  {
    v1 = 64LL;
    qword_140E36510 = (__int64)&P;
    P = &P;
    v2 = &unk_140E36100;
    v3 = (char *)&unk_140E36100;
    do
    {
      v2[1] = v3;
      *v2 = v3;
      v3 += 16;
      v2 += 2;
      --v1;
    }
    while ( v1 );
  }
  else if ( a1 == 2 )
  {
    MiRegisterForHardwareAcceleratorChanges();
  }
}
