/*
 * XREFs of SeGetTrustLabelAce @ 0x1403AE560
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409467E0 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140A51E80 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140A5DC10 (SeShouldCheckForAccessRightsFromParent.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetTrustLabelAce(__int64 a1)
{
  __int16 v1; // r10
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int i; // edx

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    return 0LL;
LABEL_4:
  if ( v1 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v5 )
      return 0LL;
    v6 = a1 + v5;
  }
  if ( v6 )
  {
    result = v6 + 8;
    for ( i = 0; i < *(unsigned __int16 *)(v6 + 4); ++i )
    {
      if ( i >= v2 && *(_BYTE *)result == 20 )
      {
        if ( (*(_BYTE *)(result + 1) & 8) != 0 )
        {
          v2 = i + 1;
          if ( result )
            goto LABEL_4;
        }
        return result;
      }
      result += *(unsigned __int16 *)(result + 2);
    }
  }
  return 0LL;
}
