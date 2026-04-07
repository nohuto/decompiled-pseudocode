/*
 * XREFs of ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800BE7CC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800BE2D4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetAdapterDisplayRect(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3,
        struct tagRECT *a4)
{
  DISPLAYCONFIG_MODE_INFO *v6; // rbx
  DISPLAYCONFIG_PATH_INFO *v7; // rbp
  LONG DisplayConfigBufferSizes; // eax
  unsigned int v10; // esi
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  signed __int64 i; // rdx
  LONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed int v16; // edi
  __int64 v17; // rcx
  LONG v18; // r8d
  LONG v19; // r9d
  int v20; // eax
  const struct std::nothrow_t *v21; // rdx
  UINT32 numModeInfoArrayElements[4]; // [rsp+30h] [rbp-38h] BYREF
  UINT32 numPathArrayElements; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]

  v25 = HIDWORD(this);
  v6 = 0LL;
  v7 = 0LL;
  numPathArrayElements = 0;
  numModeInfoArrayElements[0] = 0;
  *a4 = 0LL;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(1u, &numPathArrayElements, numModeInfoArrayElements);
  v10 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DisplayConfigBufferSizes, 0x16u, 0LL);
  }
  else
  {
    v7 = (DISPLAYCONFIG_PATH_INFO *)operator new(saturated_mul(numPathArrayElements, 0x48uLL));
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new(saturated_mul(numModeInfoArrayElements[0], 0x40uLL));
    v6 = modeInfoArray;
    if ( v7 )
    {
      if ( modeInfoArray )
      {
        v13 = QueryDisplayConfig(1u, &numPathArrayElements, v7, numModeInfoArrayElements, modeInfoArray, 0LL);
        v16 = v13;
        if ( v13 > 0 )
          v16 = (unsigned __int16)v13 | 0x80070000;
        if ( v16 < 0 )
        {
          WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(v15, v14);
          v10 = v16;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < numPathArrayElements; i = (unsigned int)(i + 1) )
          {
            v17 = i;
            if ( v7[i].sourceInfo.adapterId.LowPart == a2->LowPart
              && v7[i].sourceInfo.adapterId.HighPart == a2->HighPart
              && v7[i].sourceInfo.id == a3 )
            {
              _mm_lfence();
              i = (unsigned __int64)v7[i].sourceInfo.modeInfoIdx << 6;
              v18 = *(LONG *)((char *)&v6->sourceMode.position.x + i);
              a4->left = v18;
              v19 = *(LONG *)((char *)&v6->sourceMode.position.y + i);
              a4->top = v19;
              if ( ((v7[v17].targetInfo.rotation - 2) & 0xFFFFFFFD) != 0 )
              {
                a4->right = v18 + *(UINT32 *)((char *)&v6->sourceMode.width + i);
                v20 = *(LONG *)((char *)&v6->desktopImageInfo.PathSourceSize.y + i);
              }
              else
              {
                a4->right = v18 + *(UINT32 *)((char *)&v6->sourceMode.height + i);
                v20 = *(LONG *)((char *)&v6->desktopImageInfo.PathSourceSize.x + i);
              }
              a4->bottom = v19 + v20;
              v10 = 0;
              break;
            }
          }
        }
      }
      else
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Bu, 0LL);
      }
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Au, 0LL);
    }
  }
  CDisplayBlackCurtainAnimatedVisual::operator delete(v7, (const struct std::nothrow_t *)i);
  CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v21);
  return v10;
}
