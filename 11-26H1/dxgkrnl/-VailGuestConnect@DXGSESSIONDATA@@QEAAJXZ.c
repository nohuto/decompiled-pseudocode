/*
 * XREFs of ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x14020EAEC
 * Callers:
 *     NtDxgkVailConnect @ 0x140210E60 (NtDxgkVailConnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x14020E2AC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x14020E778 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  int v2; // edi
  __int64 v3; // rax
  DXGVAILGUESTOBJECT *v4; // rdi
  __int64 v5; // rdx
  const struct _GUID *v6; // r8
  DXGVAILGUESTOBJECT *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( *((_QWORD *)this + 2372) )
  {
    ++*((_DWORD *)this + 4742);
  }
  else
  {
    v3 = operator new(0x60uLL, 0x4B677844u, 256LL);
    v4 = (DXGVAILGUESTOBJECT *)v3;
    if ( v3 )
    {
      *(_QWORD *)v3 = this;
      *(_DWORD *)(v3 + 8) = 1;
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_DWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 52) = -1;
      *(_DWORD *)(v3 + 56) = 69;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_QWORD *)(v3 + 88) = 0LL;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v3 + 64));
      *((_QWORD *)this + 2372) = v4;
      v2 = DXGVAILGUESTOBJECT::Initialize(v4, v5, v6);
      if ( v2 >= 0 )
      {
        *((_DWORD *)this + 4742) = 1;
      }
      else
      {
        WdLogSingleEntry1(3LL);
        v7 = (DXGVAILGUESTOBJECT *)*((_QWORD *)this + 2372);
        WdLogGlobalForLineNumber = 2214;
        DXGVAILGUESTOBJECT::ReleaseReference(v7);
        *((_QWORD *)this + 2372) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)this + 2372) = 0LL;
      v2 = -1073741801;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2228;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return (unsigned int)v2;
}
