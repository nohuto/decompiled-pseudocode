/*
 * XREFs of ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800501E4
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18004FF74 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A72C4 (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GetAnimationDuration(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  CDesktopManager *v3; // rax
  __int64 v7; // r14
  int ThemeAnimationProperty; // ebx
  unsigned int v9; // edi
  unsigned int v10; // esi
  const struct std::nothrow_t *v11; // rdx
  _DWORD *v12; // rbp
  const struct std::nothrow_t *v13; // rdx
  _DWORD v15[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+20h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = 0;
  v7 = *((_QWORD *)v3 + 138);
  if ( v7 )
  {
    v17 = 0;
    v15[0] = 0;
    ThemeAnimationProperty = GetThemeAnimationProperty(v7, a1, a2, 1LL, &v17, 4, v15);
    if ( ThemeAnimationProperty >= 0 )
    {
      v9 = 0;
      v10 = 0;
      if ( v17 )
      {
        while ( ThemeAnimationProperty >= 0 )
        {
          LODWORD(v16) = 0;
          ThemeAnimationProperty = GetThemeAnimationTransform(v7, a1, a2, v10, 0LL, 0, &v16);
          if ( ThemeAnimationProperty == -2147024662 )
          {
            v12 = operator new[]((unsigned int)v16, v11);
            if ( v12 )
            {
              ThemeAnimationProperty = GetThemeAnimationTransform(v7, a1, a2, v10, v12, v16, &v16);
              if ( ThemeAnimationProperty >= 0 )
              {
                if ( v10 )
                {
                  if ( v9 <= v12[2] + v12[3] )
                    v9 = v12[2] + v12[3];
                }
                else
                {
                  v9 = v12[2] + v12[3];
                }
              }
              CDisplayBlackCurtainAnimatedVisual::operator delete(v12, v13);
            }
            else
            {
              ThemeAnimationProperty = -2147024882;
            }
          }
          if ( ++v10 >= v17 )
          {
            if ( ThemeAnimationProperty >= 0 )
              goto LABEL_14;
            return (unsigned int)ThemeAnimationProperty;
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
