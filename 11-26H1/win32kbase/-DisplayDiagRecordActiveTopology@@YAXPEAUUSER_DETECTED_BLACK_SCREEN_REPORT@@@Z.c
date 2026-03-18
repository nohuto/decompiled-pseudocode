/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401D0BF8
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v2; // rbx
  int DisplayConfigBufferSizesInternal; // eax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = 0LL;
  DisplayConfigBufferSizesInternal = DrvGetDisplayConfigBufferSizesInternal(2u, &v9);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizesInternal;
  if ( DisplayConfigBufferSizesInternal >= 0 )
  {
    v4 = v9;
    *((_DWORD *)a1 + 5) = v9;
    if ( (_DWORD)v4 )
      v2 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Win32AllocPoolZInitImpl(256LL, 216 * v4, 0x69647355u);
    if ( v2 )
    {
      v5 = DrvQueryDisplayConfigInternal(2u, &v9, v2, 0LL);
      *((_DWORD *)a1 + 4) = v5;
      if ( v5 >= 0 )
      {
        *((_QWORD *)a1 + 3) = v2;
        v2 = 0LL;
      }
      if ( v2 )
        GreDeleteFastMutex((char *)v2, v6, v7, v8);
    }
    else
    {
      *((_DWORD *)a1 + 4) = -1073741801;
    }
  }
}
