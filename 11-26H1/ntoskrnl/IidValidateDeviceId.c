/*
 * XREFs of IidValidateDeviceId @ 0x140781B7C
 * Callers:
 *     PipIommuValidateDeviceId @ 0x140B21F68 (PipIommuValidateDeviceId.c)
 * Callees:
 *     IdpValidateAcpiName @ 0x14089BF9C (IdpValidateAcpiName.c)
 */

__int64 __fastcall IidValidateDeviceId(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  int v6; // r9d
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_DWORD *)a1;
  v3 = 0;
  if ( *(int *)a1 <= 0 || v2 >= 6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        return (unsigned int)IdpValidateAcpiName(a1, a2, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 && (v8 = *(unsigned __int16 *)(a1 + 14), (_WORD)v8) )
      {
        if ( v7 >= a1 + 24 )
          return a1 + a2 < v7 + v8 ? 0x80000005 : 0;
        else
          return (unsigned int)-1073741503;
      }
      else
      {
        return (unsigned int)-1073741306;
      }
    }
  }
  return v3;
}
