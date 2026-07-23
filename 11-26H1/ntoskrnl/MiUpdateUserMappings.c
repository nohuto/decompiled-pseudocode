/*
 * XREFs of MiUpdateUserMappings @ 0x140C0C830
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiMakeQuasiPte @ 0x140447BE0 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x140448330 (MiRevertQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  __int64 *v0; // r10
  unsigned __int64 v1; // r11
  __int64 PteShadow; // rax
  unsigned __int64 result; // rax
  unsigned __int64 QuasiPte; // rax
  int v5; // edx
  unsigned __int64 v6; // [rsp+38h] [rbp+10h]

  v0 = (__int64 *)0xFFFFF6FB7DBED000LL;
  v1 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    PteShadow = *v0;
    if ( (unsigned __int64)v0 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v0 <= v1 )
      PteShadow = MiReadPteShadow((unsigned __int64)v0, *v0);
    if ( (PteShadow & 1) != 0 )
    {
      QuasiPte = MiMakeQuasiPte(PteShadow);
    }
    else
    {
      if ( (PteShadow & 0x400) == 0 )
        goto LABEL_5;
      QuasiPte = MiRevertQuasiPte(PteShadow);
    }
    v5 = 0;
    v6 = QuasiPte;
    if ( (unsigned __int64)v0 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v0 <= v1 )
    {
      v5 = MiSanitizeShadowPxe();
      QuasiPte = v6;
    }
    *v0 = QuasiPte;
    if ( v5 )
      MiWritePteShadow();
LABEL_5:
    ++v0;
    result = v1;
  }
  while ( (unsigned __int64)v0 <= v1 );
  return result;
}
