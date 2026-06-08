/*
 * XREFs of IsShortQosHysteresisTargetCpu @ 0x140006C00
 * Callers:
 *     GetHwpPerfControlHandler @ 0x14002AA80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 */

bool IsShortQosHysteresisTargetCpu()
{
  unsigned __int64 v0; // rcx
  int v1; // edx
  __int64 v2; // rax
  bool v3; // al
  char v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  GetCPUFamilyAndModel(&v6, &v5);
  if ( v6 > 0xFu )
    return 1;
  LOBYTE(v0) = v5;
  v3 = 1;
  if ( (unsigned __int8)(v5 - 125) > 0x1Du || (v1 = 604340227, !_bittest(&v1, v0 - 125)) )
  {
    if ( (unsigned __int8)(v5 + 89) > 0x38u || (v2 = 0x1000108C18941E9LL, LOBYTE(v0) = v5 + 89, !_bittest64(&v2, v0)) )
      v3 = 0;
  }
  return v6 == 6 && !v3;
}
