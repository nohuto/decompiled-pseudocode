/*
 * XREFs of ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800C3CA4
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800C07AC (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
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
  unsigned __int128 v11; // rax
  unsigned __int128 v12; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  signed __int64 i; // rdx
  LONG v15; // eax
  __int64 v16; // rcx
  signed int v17; // edi
  __int64 v18; // rcx
  LONG v19; // r8d
  LONG v20; // r9d
  int v21; // eax
  const struct std::nothrow_t *v22; // rdx
  UINT32 numModeInfoArrayElements[4]; // [rsp+30h] [rbp-38h] BYREF
  UINT32 numPathArrayElements; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+74h] [rbp+Ch]

  v26 = HIDWORD(this);
  v6 = 0LL;
  numPathArrayElements = 0;
  v7 = 0LL;
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
    v11 = numPathArrayElements * (unsigned __int128)0x48u;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      *(_QWORD *)&v11 = -1LL;
    v7 = (DISPLAYCONFIG_PATH_INFO *)operator new[](v11, *((const struct std::nothrow_t **)&v11 + 1));
    v12 = numModeInfoArrayElements[0] * (unsigned __int128)0x40u;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      *(_QWORD *)&v12 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](v12, *((const struct std::nothrow_t **)&v12 + 1));
    v6 = modeInfoArray;
    if ( v7 )
    {
      if ( modeInfoArray )
      {
        v15 = QueryDisplayConfig(1u, &numPathArrayElements, v7, numModeInfoArrayElements, modeInfoArray, 0LL);
        v17 = v15;
        if ( v15 > 0 )
          v17 = (unsigned __int16)v15 | 0x80070000;
        if ( v17 < 0 )
        {
          WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(v16);
          v10 = v17;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < numPathArrayElements; i = (unsigned int)(i + 1) )
          {
            v18 = i;
            if ( v7[i].sourceInfo.adapterId.LowPart == a2->LowPart
              && v7[i].sourceInfo.adapterId.HighPart == a2->HighPart
              && v7[i].sourceInfo.id == a3 )
            {
              _mm_lfence();
              i = (unsigned __int64)v7[i].sourceInfo.modeInfoIdx << 6;
              v19 = *(LONG *)((char *)&v6->sourceMode.position.x + i);
              a4->left = v19;
              v20 = *(LONG *)((char *)&v6->sourceMode.position.y + i);
              a4->top = v20;
              if ( ((v7[v18].targetInfo.rotation - 2) & 0xFFFFFFFD) != 0 )
              {
                a4->right = v19 + *(UINT32 *)((char *)&v6->sourceMode.width + i);
                v21 = *(LONG *)((char *)&v6->desktopImageInfo.PathSourceSize.y + i);
              }
              else
              {
                a4->right = v19 + *(UINT32 *)((char *)&v6->sourceMode.height + i);
                v21 = *(LONG *)((char *)&v6->desktopImageInfo.PathSourceSize.x + i);
              }
              a4->bottom = v20 + v21;
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
  CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v22);
  return v10;
}
