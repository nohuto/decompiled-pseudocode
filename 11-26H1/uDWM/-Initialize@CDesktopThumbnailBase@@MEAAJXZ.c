/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180066C00
 * Callers:
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800668CC (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800DE90C (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CDesktopManager *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // esi
  unsigned int v8; // eax
  struct CContainerVisualProxy **v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x21u, 0LL);
    return v3;
  }
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v10 = this;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 310);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v3 = -2147024362;
    v8 = 183;
    v7 = -2147024362;
    goto LABEL_9;
  }
  v7 = 0;
  if ( v6 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 309) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 1216, 8, 1, &v10);
    v3 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    v8 = 194;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x22u, 0LL);
    return v3;
  }
  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 152) + 8LL * v5) = this;
  *((_DWORD *)v4 + 310) = v6;
LABEL_6:
  *((_BYTE *)this + 36) |= 8u;
  return (unsigned int)v7;
}
