/*
 * XREFs of ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140243DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x14004926C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1400AE290 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetReferenceProperty(
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

  v6 = a3 - 18;
  if ( v6 )
  {
    v7 = v6 - 15;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 26;
              if ( v12 )
              {
                if ( v12 == 1 )
                  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                           a2,
                           (__int64 *)(a1 + 352),
                           (__int64)a4,
                           (__int64)a4,
                           34,
                           (int *)(a1 + 16),
                           0x10000000,
                           1,
                           a5);
                else
                  return 3221225485LL;
              }
              else
              {
                return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                         a2,
                         (__int64 *)(a1 + 344),
                         (__int64)a4,
                         (__int64)a4,
                         34,
                         (int *)(a1 + 16),
                         0x8000000,
                         1,
                         a5);
              }
            }
            else
            {
              return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                       a1,
                       a2,
                       (struct DirectComposition::CResourceMarshaler **)(a1 + 272),
                       a4,
                       1,
                       34,
                       (int *)(a1 + 16),
                       0x800000,
                       1,
                       a5);
            }
          }
          else
          {
            return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                     a1,
                     a2,
                     (struct DirectComposition::CResourceMarshaler **)(a1 + 264),
                     a4,
                     1,
                     34,
                     (int *)(a1 + 16),
                     0x400000,
                     1,
                     a5);
          }
        }
        else
        {
          return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                   a1,
                   a2,
                   (struct DirectComposition::CResourceMarshaler **)(a1 + 256),
                   a4,
                   1,
                   34,
                   (int *)(a1 + 16),
                   0x200000,
                   1,
                   a5);
        }
      }
      else
      {
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a1,
                 a2,
                 (struct DirectComposition::CResourceMarshaler **)(a1 + 248),
                 a4,
                 1,
                 34,
                 (int *)(a1 + 16),
                 0x100000,
                 1,
                 a5);
      }
    }
    else
    {
      result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 (__int64 *)(a1 + 240),
                 (__int64)a4,
                 (__int64)a4,
                 10,
                 (int *)(a1 + 16),
                 0x80000,
                 1,
                 a5);
      if ( (int)result >= 0 )
        *(_BYTE *)(a1 + 428) &= ~2u;
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
               (int *)(a1 + 16),
               2048,
               1,
               a5);
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 428) &= ~1u;
  }
  return result;
}
