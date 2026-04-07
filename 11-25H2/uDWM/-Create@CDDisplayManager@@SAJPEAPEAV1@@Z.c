/*
 * XREFs of ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180084194
 * Callers:
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180057984 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x1800714A8 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDDisplayManager::Create(struct CDDisplayManager **a1)
{
  CBaseObject *v2; // rax
  CBaseObject *v3; // rdi
  CBaseObject *v4; // rbx
  unsigned int v5; // esi
  int v7; // eax

  v2 = (CBaseObject *)DefaultHeap::AllocClear(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    CBaseObject::CBaseObject(v2);
    *(_QWORD *)v3 = &CDDisplayManager::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    v4 = v3;
    v7 = CDDisplayManager::Initialize(v3);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x10u, 0LL);
    }
    else
    {
      v4 = 0LL;
      *a1 = v3;
    }
  }
  else
  {
    v4 = 0LL;
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFu, 0LL);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v5;
}
