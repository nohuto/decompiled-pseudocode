/*
 * XREFs of ?IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z @ 0x140202FF8
 * Callers:
 *     DxgkIncreaseAdapterUniquenessOnSession @ 0x140205118 (DxgkIncreaseAdapterUniquenessOnSession.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseAdapterUniquenessOnSession(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int i; // edx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  volatile signed __int32 *v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == 0x300000000LL )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( v2 == 0x100000000LL )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i);
      if ( v6 )
      {
        v7 = *(volatile signed __int32 **)(v6 + 18536);
        if ( v7 )
          _InterlockedIncrement(v7);
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    return 0LL;
  }
  if ( v2 == 0x200000000LL )
    LODWORD(v2) = *((_DWORD *)this + 36);
  if ( (unsigned int)v2 < *((_DWORD *)this + 20)
    && (v8 = (unsigned int)v2, v9 = 0, *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8))
    && (_mm_lfence(), (v10 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) + 18536LL)) != 0LL) )
  {
    _InterlockedIncrement(v10);
  }
  else
  {
    v9 = -1073741275;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return v9;
}
