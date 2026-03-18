/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCResourceMarshaler@1@PEAV21@1@Z @ 0x140021DB0 (--$ReplaceResource@VCResourceMarshaler@DirectComposition@@@CApplicationChannel@DirectComposition.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x14005A074 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // ebx
  unsigned int v10; // r9d
  __int64 i; // rax
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  struct DirectComposition::CResourceMarshaler *v18; // r8
  unsigned __int64 v19; // rbp
  struct DirectComposition::CResourceMarshaler *v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax

  v5 = 0;
  if ( (a3 & 0xC0000000) != 0x80000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1
        && (!a4
         || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4 + 9),
                               (unsigned int)(a3 + 122))) )
      {
        if ( a4 != this[10] )
        {
          v5 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
                 a2,
                 this + 10,
                 a4,
                 0LL);
          if ( v5 < 0 )
            return (unsigned int)v5;
        }
        *((_DWORD *)this + 4) |= 0x40u;
        goto LABEL_33;
      }
    }
    else if ( !a4
           || (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 120LL))(a4)
           && (!a4
            || (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                  *((unsigned int *)a4 + 9),
                                  28LL)) )
    {
      if ( a4 != this[9] )
      {
        v5 = DirectComposition::CApplicationChannel::ReplaceResource<DirectComposition::CResourceMarshaler>(
               a2,
               this + 9,
               a4,
               0LL);
        if ( v5 < 0 )
          return (unsigned int)v5;
      }
      *((_DWORD *)this + 4) |= 0x20u;
LABEL_33:
      *a5 = 1;
      return (unsigned int)v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 )
  {
    v10 = *((_DWORD *)a4 + 9);
    for ( i = v10; (unsigned int)i < 0xC0; LODWORD(i) = dword_140274520[i] )
    {
      if ( (_DWORD)i == 167 )
        goto LABEL_21;
    }
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 22LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 9LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v13, 15LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v14, 112LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v15, 72LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v16, 189LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v17, 56LL) )
    {
      return (unsigned int)-1073741811;
    }
  }
LABEL_21:
  v18 = this[11];
  if ( !v18 )
  {
    v21 = this[9];
    if ( v21 )
    {
      v22 = *((unsigned int *)v21 + 20);
      if ( is_mul_ok(v22, 8uLL) )
      {
        v23 = Win32AllocPoolWithQuotaZInitImpl(v22, 8 * v22, 0x69664344u);
        this[11] = (struct DirectComposition::CResourceMarshaler *)v23;
        v18 = (struct DirectComposition::CResourceMarshaler *)v23;
        if ( v23 )
          *((_DWORD *)this + 24) = *((_DWORD *)this[9] + 20);
        else
          v5 = -1073741801;
      }
      else
      {
        v5 = -1073741675;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  v19 = a3 & 0x3FFFFFFF;
  if ( v5 >= 0 )
  {
    if ( v19 < *((unsigned int *)this + 24) )
      return (unsigned int)DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
                             this,
                             a2,
                             (char *)v18 + 8 * v19,
                             a4);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
