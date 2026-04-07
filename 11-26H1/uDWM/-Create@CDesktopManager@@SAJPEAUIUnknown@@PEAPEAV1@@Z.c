/*
 * XREFs of ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180071E9C
 * Callers:
 *     ?DwmClientStartup@@YAJPEAUIUnknown@@@Z @ 0x180071E50 (-DwmClientStartup@@YAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180071F78 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::Create(struct IUnknown *a1, struct CDesktopManager **a2)
{
  CDesktopManager *v3; // rax
  CDesktopManager *v4; // rax
  struct CDesktopManager *v5; // rbx
  int v6; // edi
  unsigned int v8; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (CDesktopManager *)DefaultHeap::AllocClear(0x500uLL);
  if ( !v3 )
  {
    v5 = 0LL;
    goto LABEL_7;
  }
  v4 = CDesktopManager::CDesktopManager(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_7:
    v6 = -2147024882;
    v8 = 1580;
    goto LABEL_8;
  }
  v6 = CDesktopManager::Initialize(v4, a1);
  if ( v6 >= 0 )
  {
    g_pdmInstance = v5;
    goto LABEL_5;
  }
  v8 = 1584;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F6BD0, 1LL, v6, v8, 0LL);
  if ( v5 )
    CBaseObject::Release(v5);
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
