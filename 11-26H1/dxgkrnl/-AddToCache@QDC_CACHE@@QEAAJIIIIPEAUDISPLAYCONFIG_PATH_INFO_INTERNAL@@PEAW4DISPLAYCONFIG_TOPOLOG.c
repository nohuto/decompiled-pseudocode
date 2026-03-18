/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031BC9C
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031AA04 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 *     ?DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x140413E70 (-DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPL.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14031BF80 (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x14031DBB8 (-FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        QDC_CACHE *this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  __int64 v9; // rsi
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  QDC_CACHE *v15; // rcx
  unsigned int v16; // eax
  QDC_CACHE *i; // rbx
  __int64 result; // rax
  unsigned int j; // eax
  void *v20; // rax
  unsigned __int64 v21; // rax
  QDC_CACHE *v22; // rcx
  unsigned int v23; // ebx
  QDC_CACHE *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE v27[16]; // [rsp+50h] [rbp-28h] BYREF

  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 446;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
      return 0LL;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (QDC_CACHE *)((char *)this + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( !a5 )
    {
LABEL_12:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
      return 0LL;
    }
    if ( (_DWORD)v9 == *((_DWORD *)this + 158) )
    {
      v15 = (QDC_CACHE *)((char *)this + 56);
      v16 = 0;
      for ( i = (QDC_CACHE *)((char *)this + 56); ; i = (QDC_CACHE *)((char *)i + 32) )
      {
        if ( v16 >= 0x12 )
          goto LABEL_14;
        if ( *(_BYTE *)i && *((_DWORD *)i + 1) == a4 )
          break;
        ++v16;
      }
      if ( !i )
      {
LABEL_14:
        i = v15;
        for ( j = 0; j < 0x12; ++j )
        {
          if ( !*(_BYTE *)i )
          {
            if ( i )
              goto LABEL_18;
            break;
          }
          i = (QDC_CACHE *)((char *)i + 32);
        }
        WdLogNewEntry5_WdTrace(v15, v12);
        WdLogGlobalForLineNumber = 504;
        v23 = -1073741671;
        goto LABEL_28;
      }
      if ( QDC_CACHE::CompareEntry(v15, i, v14, a5, Src) )
        goto LABEL_12;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 492;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Paths being added is different to valid cached one",
        492LL,
        0LL,
        0LL,
        0LL,
        0LL);
      QDC_CACHE::FreeAllocationsForEntry(v24, i);
LABEL_18:
      if ( *((_DWORD *)i + 2) != a5 )
        QDC_CACHE::FreeAllocationsForEntry(v15, i);
      v20 = (void *)*((_QWORD *)i + 2);
      if ( !v20 )
      {
        v21 = 216LL * a5;
        if ( !is_mul_ok(a5, 0xD8uLL) )
          v21 = -1LL;
        v20 = (void *)operator new[](v21, 0x43434451u, 256LL);
        *((_QWORD *)i + 2) = v20;
        if ( !v20 )
        {
          QDC_CACHE::FreeAllocationsForEntry(v22, i);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 527;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate path or mode arrays for cache",
            527LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v23 = -1073741801;
          goto LABEL_28;
        }
      }
      memmove(v20, Src, 216LL * a5);
      if ( a7 )
        *((_DWORD *)i + 6) = *(_DWORD *)a7;
      *((_DWORD *)i + 7) = a3;
      *((_DWORD *)i + 2) = a5;
      *(_BYTE *)i = 1;
      *((_DWORD *)i + 1) = a4;
      goto LABEL_12;
    }
    v25 = WdLogNewEntry5_WdTrace(v13, v12);
    v26 = *((unsigned int *)this + 158);
    v23 = -1071774921;
    *(_QWORD *)(v25 + 24) = v26;
    *(_QWORD *)(v25 + 32) = v9;
    WdLogGlobalForLineNumber = 475;
LABEL_28:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    return v23;
  }
  return result;
}
