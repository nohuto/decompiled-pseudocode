/*
 * XREFs of MiInitializeHardwareAccelerators @ 0x140D0786C
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiRegisterForHardwareAcceleratorChanges @ 0x140D078C8 (MiRegisterForHardwareAcceleratorChanges.c)
 */

void __fastcall MiInitializeHardwareAccelerators(int a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  char *v3; // rcx

  if ( a1 == 1 )
  {
    v1 = 64LL;
    qword_140E36690 = (__int64)&P;
    P = &P;
    v2 = &unk_140E36280;
    v3 = (char *)&unk_140E36280;
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
