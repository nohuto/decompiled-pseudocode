/*
 * XREFs of ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x14019CBA0
 * Callers:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019CB70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1400F1CA0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::Initialize(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0;
  *(_DWORD *)this = a2;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v2 = RtlULongLongMult(a2, 4uLL, &v13);
    if ( v2 >= 0 )
    {
      v5 = Win32AllocPoolWithQuotaImpl(v4, v13, 0x66664344u);
      *((_QWORD *)this + 2) = v5;
      if ( !v5 )
        return (unsigned int)-1073741801;
      for ( i = 0LL; i < *(unsigned int *)this; *(_DWORD *)(*((_QWORD *)this + 2) + 4 * i++) = 2 )
        ;
      **((_DWORD **)this + 2) = 0;
      v2 = RtlULongLongMult(*(unsigned int *)this, 0x10uLL, &v14);
      if ( v2 >= 0 )
      {
        v8 = Win32AllocPoolWithQuotaZInitImpl(v7, v14, 0x6A664344u);
        *((_QWORD *)this + 3) = v8;
        if ( !v8 )
          return (unsigned int)-1073741801;
        v2 = RtlULongLongMult(*(unsigned int *)this, 8uLL, &v15);
        if ( v2 >= 0 )
        {
          v10 = Win32AllocPoolWithQuotaZInitImpl(v9, v15, 0x69664344u);
          v11 = v2;
          *((_QWORD *)this + 1) = v10;
          if ( !v10 )
            return (unsigned int)-1073741801;
          return v11;
        }
      }
    }
  }
  return (unsigned int)v2;
}
