/*
 * XREFs of sub_14012B700 @ 0x14012B700
 * Callers:
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     sub_1400C8D5C @ 0x1400C8D5C (sub_1400C8D5C.c)
 *     sub_14012BB98 @ 0x14012BB98 (sub_14012BB98.c)
 */

__int64 __fastcall sub_14012B700(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 result; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1[16] + 160LL);
  if ( *(_BYTE *)v3 == 1 )
  {
    if ( a2 && *(_DWORD *)(a2 + 24) == 4 )
    {
      if ( *(_QWORD *)a2 == 0x4B6D40E7FC95AF4DLL && *(_QWORD *)(a2 + 8) == 0xEC8DB31D1565A83LL )
      {
        *(_DWORD *)(v3 + 196) = **(_DWORD **)(a2 + 16);
        sub_14012BB98(a1);
        return 0LL;
      }
      if ( *(_QWORD *)a2 == 0x4345E56DD639518ALL && *(_QWORD *)(a2 + 8) == 0x961B22FF3B9F28ALL )
      {
        if ( *(_DWORD *)(a1[131] + 52LL) == -1 )
        {
          result = 0LL;
          *(_DWORD *)(v3 + 200) = **(_DWORD **)(a2 + 16);
          return result;
        }
      }
      else
      {
        if ( *(_QWORD *)a2 == 0x49E36DE9DBC9E238LL && *(_QWORD *)(a2 + 8) == 0x72B446492B8CCD92LL )
        {
          *(_DWORD *)(v3 + 204) = **(_DWORD **)(a2 + 16);
          sub_14012BB98(a1);
          return 0LL;
        }
        if ( *(_QWORD *)a2 == 0x424EC1FFD3D55EFDLL && *(_QWORD *)(a2 + 8) == 0x103083E71B44C39DLL )
        {
          result = 0LL;
          *(_DWORD *)(v3 + 208) = **(_DWORD **)(a2 + 16);
          return result;
        }
        if ( *(_QWORD *)a2 == 0x43EEAB2DFC7372B6LL && *(_QWORD *)(a2 + 8) == 0xCA2C1F84E9159787uLL )
        {
          sub_1400C8D5C(a1, **(_BYTE **)(a2 + 16));
          return 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v2;
}
