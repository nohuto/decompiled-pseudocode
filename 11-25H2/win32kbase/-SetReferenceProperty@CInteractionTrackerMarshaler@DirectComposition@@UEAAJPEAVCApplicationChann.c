/*
 * XREFs of ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14012A100
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140021E48 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x14004A344 (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r8d
  __int64 result; // rax
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d

  v6 = a3 - 18;
  if ( v6 )
  {
    v8 = v6 - 15;
    if ( v8 )
    {
      v9 = v8 - 4;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 27;
              if ( v13 )
              {
                if ( v13 == 1 )
                  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                           a2,
                           (struct DirectComposition::CWeakReferenceBase **)this + 42,
                           (__int64)a4,
                           (__int64)a4,
                           44,
                           (int *)this + 4,
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
                         (struct DirectComposition::CWeakReferenceBase **)this + 41,
                         (__int64)a4,
                         (__int64)a4,
                         44,
                         (int *)this + 4,
                         0x8000000,
                         1,
                         a5);
              }
            }
            else
            {
              return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                       (__int64)this,
                       (DirectComposition::CApplicationChannel *)a2,
                       (struct DirectComposition::CResourceMarshaler **)this + 32,
                       (unsigned int *)a4,
                       1,
                       44,
                       (int *)this + 4,
                       0x400000,
                       1,
                       a5);
            }
          }
          else
          {
            return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                     (__int64)this,
                     (DirectComposition::CApplicationChannel *)a2,
                     (struct DirectComposition::CResourceMarshaler **)this + 31,
                     (unsigned int *)a4,
                     1,
                     44,
                     (int *)this + 4,
                     0x200000,
                     1,
                     a5);
          }
        }
        else
        {
          return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                   (__int64)this,
                   (DirectComposition::CApplicationChannel *)a2,
                   (struct DirectComposition::CResourceMarshaler **)this + 30,
                   (unsigned int *)a4,
                   1,
                   44,
                   (int *)this + 4,
                   0x100000,
                   1,
                   a5);
        }
      }
      else
      {
        return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 (__int64)this,
                 (DirectComposition::CApplicationChannel *)a2,
                 (struct DirectComposition::CResourceMarshaler **)this + 29,
                 (unsigned int *)a4,
                 1,
                 44,
                 (int *)this + 4,
                 0x80000,
                 1,
                 a5);
      }
    }
    else
    {
      result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
                 a2,
                 (struct DirectComposition::CWeakReferenceBase **)this + 28,
                 (__int64)a4,
                 (__int64)a4,
                 11,
                 (int *)this + 4,
                 0x40000,
                 1,
                 a5);
      if ( (int)result >= 0 )
        *((_BYTE *)this + 456) &= ~2u;
    }
  }
  else
  {
    result = DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CWeakReferenceBase **)this + 27,
               (__int64)a4,
               (__int64)a4,
               11,
               (int *)this + 4,
               1024,
               1,
               a5);
    if ( (int)result >= 0 )
      *((_BYTE *)this + 456) &= ~1u;
  }
  return result;
}
