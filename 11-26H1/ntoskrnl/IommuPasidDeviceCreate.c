/*
 * XREFs of IommuPasidDeviceCreate @ 0x140789BA0
 * Callers:
 *     <none>
 * Callees:
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 *     ExFreeAsid @ 0x1406D5168 (ExFreeAsid.c)
 *     ExpAllocateAsid @ 0x1406D546C (ExpAllocateAsid.c)
 */

__int64 __fastcall IommuPasidDeviceCreate(__int64 a1, __int64 *a2, int *a3)
{
  bool v5; // zf
  unsigned int Asid; // eax
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = -1;
  *a2 = 0LL;
  v5 = *(_BYTE *)(a1 + 265) == 0;
  v12 = 0LL;
  if ( v5 || (*(_DWORD *)(a1 + 376) & 4) == 0 )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    Asid = ExpAllocateAsid(a1, 0LL);
    v8 = Asid;
    if ( Asid - 1 > 0xFFFFFFFD )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v9 = IommupPasidDeviceCreate(a1, Asid, &v12);
      if ( v9 < 0 )
      {
        ExFreeAsid(v8);
      }
      else
      {
        v10 = v12;
        *a3 = v8;
        *a2 = v10;
      }
    }
  }
  return (unsigned int)v9;
}
