/*
 * XREFs of ?SetReferenceProperty@CInteractionTracker2Marshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140237EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x14004926C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CInteractionTracker2Marshaler::SetReferenceProperty(
        __int64 a1,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  __int64 result; // rax

  *a5 = 0;
  v6 = a3 - 16;
  if ( v6 )
  {
    v7 = v6 - 12;
    if ( v7 )
    {
      v8 = v7 - 10;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 3;
            if ( v11 )
            {
              v12 = v11 - 3;
              if ( v12 )
              {
                if ( v12 != 3 )
                  return 3221225485LL;
                result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                           a1,
                           a2,
                           (struct DirectComposition::CResourceMarshaler **)(a1 + 416),
                           a4,
                           1,
                           34,
                           (int *)(a1 + 84),
                           0x4000,
                           0,
                           a5);
              }
              else
              {
                result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                           a1,
                           a2,
                           (struct DirectComposition::CResourceMarshaler **)(a1 + 376),
                           a4,
                           1,
                           34,
                           (int *)(a1 + 84),
                           4096,
                           0,
                           a5);
              }
            }
            else
            {
              result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                         a1,
                         a2,
                         (struct DirectComposition::CResourceMarshaler **)(a1 + 336),
                         a4,
                         1,
                         34,
                         (int *)(a1 + 84),
                         1024,
                         0,
                         a5);
            }
          }
          else
          {
            result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                       a1,
                       a2,
                       (struct DirectComposition::CResourceMarshaler **)(a1 + 296),
                       a4,
                       1,
                       34,
                       (int *)(a1 + 84),
                       256,
                       0,
                       a5);
          }
        }
        else
        {
          result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                     a1,
                     a2,
                     (struct DirectComposition::CResourceMarshaler **)(a1 + 288),
                     a4,
                     1,
                     34,
                     (int *)(a1 + 84),
                     128,
                     0,
                     a5);
        }
      }
      else
      {
        result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                   a1,
                   a2,
                   (struct DirectComposition::CResourceMarshaler **)(a1 + 280),
                   a4,
                   1,
                   34,
                   (int *)(a1 + 84),
                   64,
                   0,
                   a5);
      }
    }
    else
    {
      result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 (__int64 *)(a1 + 232),
                 (__int64)a4,
                 (__int64)a4,
                 10,
                 (int *)(a1 + 80),
                 0x10000000,
                 0,
                 a5);
    }
  }
  else
  {
    result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (__int64 *)(a1 + 176),
               (__int64)a4,
               (__int64)a4,
               10,
               (int *)(a1 + 80),
               0x10000,
               0,
               a5);
  }
  if ( (int)result >= 0 )
  {
    if ( *a5 )
      *(_DWORD *)(a1 + 16) &= ~0x20u;
  }
  return result;
}
