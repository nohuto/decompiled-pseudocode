/*
 * XREFs of NVMeDirectiveCompletion @ 0x140024B90
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeDirectiveCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r8
  unsigned __int8 v7; // dl

  result = GetSrbExtension(a2);
  v5 = result;
  if ( v6 )
  {
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        result = *(unsigned int *)(a2 + 52);
        v7 = *(_BYTE *)(result + a2 + 10);
      }
      else
      {
        v7 = *(_BYTE *)(a2 + 7);
      }
      if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        result = StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8LL * v7 + 1672), 0LL);
    }
    *(_BYTE *)(v5 + 4225) |= 8u;
  }
  return result;
}
