/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x18016A32C
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x18016A2E0 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18016A468 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 72);
  v3 = *((_BYTE *)this + 293) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 15) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 16) && *((_DWORD *)this + 26) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CAnimation::EndAnimation(this);
  if ( *((_BYTE *)this + 293) && *((_DWORD *)this + 26) )
  {
    v7 = 0;
    do
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL * v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 26) );
    *((_DWORD *)this + 26) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 80, 0x10u);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 96);
    v9 = 0LL;
    for ( i = *(_QWORD *)(v6 + 72); (unsigned int)v9 < (unsigned int)v8; v9 = (unsigned int)(v9 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v9) )
        break;
    }
    if ( (unsigned int)v9 < (unsigned int)v8 )
    {
      if ( (unsigned int)v9 < (int)v8 - 1 )
      {
        do
        {
          v8 = (unsigned int)(v9 + 1);
          *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8 * v8);
          v9 = v8;
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v6 + 96) - 1 );
      }
      --*(_DWORD *)(v6 + 96);
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v8, v6, i);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 152);
  CBaseAnimation::~CBaseAnimation(this);
}
