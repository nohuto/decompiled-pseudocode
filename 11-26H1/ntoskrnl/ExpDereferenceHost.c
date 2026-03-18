/*
 * XREFs of ExpDereferenceHost @ 0x140840D58
 * Callers:
 *     ExRegisterExtension @ 0x140840790 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140840A68 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140840C20 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
