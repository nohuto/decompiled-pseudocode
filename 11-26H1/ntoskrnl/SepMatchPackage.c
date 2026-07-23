/*
 * XREFs of SepMatchPackage @ 0x1402FCF70
 * Callers:
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall SepMatchPackage(
        __int64 a1,
        int a2,
        _WORD *a3,
        int a4,
        _BYTE *a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int result; // eax
  int v13; // ecx
  int v14; // ebx
  _WORD *v15; // rcx

  result = (int)a3;
  if ( *((_DWORD *)a3 + 2) == 2 && *((_BYTE *)a3 + 1) == 2 )
  {
    v13 = *((_DWORD *)a3 + 3);
    if ( v13 == 1 )
    {
      v14 = a4 & a2;
      if ( !(unsigned __int8)SepCanTokenMatchAllPackageSid(a1) )
      {
        *a8 |= v14;
        result = (int)a9;
        *a9 = 1;
        return result;
      }
      goto LABEL_5;
    }
    if ( v13 == 2 )
    {
LABEL_13:
      v14 = a4 & a2;
LABEL_5:
      *a6 |= v14;
      result = (int)a5;
      *a5 = 1;
    }
  }
  else
  {
    *a7 = 1;
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    {
      v15 = *(_WORD **)(a1 + 784);
      if ( *v15 == *a3 )
      {
        result = memcmp(v15, a3, 4LL * HIBYTE(*v15) + 8);
        if ( !result )
          goto LABEL_13;
      }
    }
  }
  return result;
}
