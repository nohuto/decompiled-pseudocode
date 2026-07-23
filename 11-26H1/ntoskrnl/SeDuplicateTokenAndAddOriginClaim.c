/*
 * XREFs of SeDuplicateTokenAndAddOriginClaim @ 0x140B2A218
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x140B2A2F4 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(__int64 a1, __int64 a2, unsigned int a3, PVOID *a4)
{
  int v7; // ebx
  __int64 v8; // r9
  PVOID v9; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+68h] [rbp-18h]

  Object = 0LL;
  memset(&v12[1], 0, 24);
  v12[0] = 48LL;
  v13 = 0LL;
  v7 = SepDuplicateToken(a1, (int)v12, 0, 1, 0, 0, 0, (char **)&Object);
  if ( v7 < 0 )
  {
    v9 = 0LL;
    Object = 0LL;
  }
  else
  {
    LOBYTE(v8) = 1;
    v7 = SepAddTokenOriginClaim(a2, a3, Object, v8);
    if ( v7 >= 0 )
    {
      *a4 = Object;
      return (unsigned int)v7;
    }
    v9 = Object;
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)v7;
}
