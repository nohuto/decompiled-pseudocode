/*
 * XREFs of MiKcsanPopulateHierarchy @ 0x1406FA224
 * Callers:
 *     KcsanInitSystem @ 0x1405E59E0 (KcsanInitSystem.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 */

__int64 __fastcall MiKcsanPopulateHierarchy(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r11
  unsigned __int64 i; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v8, 0, sizeof(v8));
  MiFillPteHierarchy(a2, (unsigned __int64 *)v7);
  MiFillPteHierarchy(v3, (unsigned __int64 *)v8);
  for ( i = 0LL; i < 0x20; i += 8LL )
  {
    *a1 = *(_QWORD *)((char *)v7 + i);
    a1 += 2;
    v5 = *(_QWORD *)((char *)v8 + i);
    result = v5 + 8;
    *(a1 - 1) = result;
  }
  return result;
}
