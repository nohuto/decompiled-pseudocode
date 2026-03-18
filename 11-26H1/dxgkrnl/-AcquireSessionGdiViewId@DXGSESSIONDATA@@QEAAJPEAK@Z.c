/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x140202270
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x140204BA0 (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  signed __int32 v4; // ecx
  signed __int32 v5; // r15d
  signed __int32 v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rbp
  const void *v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-58h]
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    v5 = v4;
    if ( v4 == -2 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4865;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Exceeded the maximun GDI view ID, returning 0x%I64x.",
        -1073741756LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225540LL;
    }
    v6 = v4 + 1;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v4 + 1, v4);
  }
  while ( v4 + 1 != v6 );
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v7 = *((_DWORD *)this + 4794);
  v8 = (_DWORD *)((char *)this + 19172);
  if ( *((_DWORD *)this + 4792) + *((_DWORD *)this + 4793) < v7 )
  {
    v15 = (_DWORD *)((char *)this + 19172);
  }
  else
  {
    if ( v7 )
      v9 = 2 * v7;
    else
      v9 = 16LL;
    *((_DWORD *)this + 4794) = v9;
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    v11 = (void *)operator new[](v10, 0x4B677844u, 256LL);
    v12 = v11;
    if ( !v11 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v5, v6);
      WdLogSingleEntry1(6LL);
      v16 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 4900;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Unable to allocate GDI View ID buffer for session 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
      return 3221225495LL;
    }
    v14 = (const void *)*((_QWORD *)this + 2398);
    if ( v14 )
    {
      memmove(v11, v14, 4LL * (unsigned int)(*v8 + *((_DWORD *)this + 4792)));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2398));
    }
    *((_QWORD *)this + 2398) = v12;
    v15 = (_DWORD *)((char *)this + 19172);
  }
  *(_DWORD *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(*v8 + *((_DWORD *)this + 4792))) = v6;
  ++*v15;
  *a2 = v6;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return 0LL;
}
