/*
 * XREFs of sub_14001C2E4 @ 0x14001C2E4
 * Callers:
 *     sub_14001BB08 @ 0x14001BB08 (sub_14001BB08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001C2E4(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v4 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v5, (APTTYPEQUALIFIER *)&v4) >= 0 )
  {
    v2 = v5;
  }
  else
  {
    v2 = 1;
    v5 = 1;
  }
  if ( v2 == 3 || !v2 )
  {
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    InitializeSRWLock((PSRWLOCK)(a1 + 8));
  }
  return a1;
}
