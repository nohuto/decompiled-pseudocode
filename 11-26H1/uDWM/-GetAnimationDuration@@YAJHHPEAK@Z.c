/*
 * XREFs of ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x18003F384
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18003F114 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x180099C3C (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall GetAnimationDuration(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  CDesktopManager *v3; // rax
  __int64 v7; // r14
  int ThemeAnimationProperty; // ebx
  unsigned int v9; // edi
  unsigned int v10; // esi
  _DWORD *v11; // rbp
  const struct std::nothrow_t *v12; // rdx
  _DWORD v14[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+20h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = 0;
  v7 = *((_QWORD *)v3 + 139);
  if ( v7 )
  {
    v16 = 0;
    v14[0] = 0;
    ThemeAnimationProperty = GetThemeAnimationProperty(v7, a1, a2, 1LL, &v16, 4, v14);
    if ( ThemeAnimationProperty >= 0 )
    {
      v9 = 0;
      v10 = 0;
      if ( v16 )
      {
        while ( ThemeAnimationProperty >= 0 )
        {
          LODWORD(v15) = 0;
          ThemeAnimationProperty = GetThemeAnimationTransform(v7, a1, a2, v10, 0LL, 0, &v15);
          if ( ThemeAnimationProperty == -2147024662 )
          {
            v11 = operator new((unsigned int)v15);
            if ( v11 )
            {
              ThemeAnimationProperty = GetThemeAnimationTransform(v7, a1, a2, v10, v11, v15, &v15);
              if ( ThemeAnimationProperty >= 0 )
              {
                if ( v10 )
                {
                  if ( v9 <= v11[2] + v11[3] )
                    v9 = v11[2] + v11[3];
                }
                else
                {
                  v9 = v11[2] + v11[3];
                }
              }
              CDisplayBlackCurtainAnimatedVisual::operator delete(v11, v12);
            }
            else
            {
              ThemeAnimationProperty = -2147024882;
            }
          }
          if ( ++v10 >= v16 )
          {
            if ( ThemeAnimationProperty < 0 )
              return (unsigned int)ThemeAnimationProperty;
            goto LABEL_14;
          }
        }
      }
      else
      {
LABEL_14:
        *a3 = v9;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)ThemeAnimationProperty;
}
