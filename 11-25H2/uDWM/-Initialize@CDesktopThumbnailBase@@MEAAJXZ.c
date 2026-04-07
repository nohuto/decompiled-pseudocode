/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180088E20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CDesktopManager *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // esi
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
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 318);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v3 = -2147024362;
    v7 = 179;
    v8 = -2147024362;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v7, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x22u, 0LL);
    return v3;
  }
  v8 = 0;
  if ( v6 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 317) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 1248, 8, 1, &v10);
    v3 = v8;
    if ( v8 < 0 )
    {
      v7 = 190;
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 156)
              + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 318)) = this;
    *((_DWORD *)v4 + 318) = v6;
  }
  *((_BYTE *)this + 36) |= 8u;
  return (unsigned int)v8;
}
