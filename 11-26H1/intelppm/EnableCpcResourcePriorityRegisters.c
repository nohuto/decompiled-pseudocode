/*
 * XREFs of EnableCpcResourcePriorityRegisters @ 0x140008BE4
 * Callers:
 *     CpcReinitializeHandler @ 0x140008A80 (CpcReinitializeHandler.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 * Callees:
 *     ReadGenAddrMaybeHiddenEx @ 0x140001C64 (ReadGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1400057A0 (CpcRegisterIsSupportedEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall EnableCpcResourcePriorityRegisters(__int64 a1, unsigned int *a2)
{
  unsigned int i; // ebx
  char *v5; // rbp
  __int64 v6; // r8
  __int64 GenAddrMaybeHidden; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x32u) )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v5 = (char *)&a2[26 * i];
      if ( CpcRegisterIsSupportedEx((__int64)(v5 + 40)) )
      {
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (__int64)a2 + v6 + 16);
        WriteGenAddrMaybeHiddenEx(a1, v5 + 40, GenAddrMaybeHidden);
      }
    }
    if ( qword_140019418 )
      qword_140019418();
  }
}
