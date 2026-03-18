/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x140254BB0
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiLdaPreStartChain @ 0x14009378C (DpiLdaPreStartChain.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  __int64 v10; // rsi
  int started; // ebx
  unsigned int v12; // r11d
  __int64 v13; // r10
  char v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  unsigned int i; // esi
  __int64 v18; // rbp
  struct _DEVICE_OBJECT *v19; // rcx

  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v7 + 508) == 1 )
  {
    v10 = *(_QWORD *)(v7 + 24);
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 2832);
    if ( !v10 )
    {
      started = 1075708986;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 745;
      return (unsigned int)started;
    }
    v7 = *(_QWORD *)(v10 + 64);
  }
  v12 = *(_DWORD *)(v7 + 2840);
  if ( v12 == *(_DWORD *)(v7 + 504) )
  {
    v13 = 0LL;
    *(_BYTE *)(v7 + 2844) = 0;
    v14 = 0;
    while ( (unsigned int)v13 < v12 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2832) + 8 * v13) + 64LL);
      if ( *(_BYTE *)(v15 + 232) == 1 )
      {
        started = -1071774669;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 798;
        return (unsigned int)started;
      }
      v16 = *(_DWORD *)(v15 + 236);
      if ( v16 != 1 && v16 != 2 )
      {
        started = 1075708986;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 809;
        return (unsigned int)started;
      }
      if ( v14 || *(_DWORD *)(v7 + 1124) != *(_DWORD *)(v15 + 1124) )
        v14 = 1;
      *(_BYTE *)(v7 + 2844) = v14;
      v13 = (unsigned int)(v13 + 1);
    }
    started = DpiLdaPreStartChain(v10);
    if ( started >= 0 )
    {
      for ( i = 1; i < *(_DWORD *)(v7 + 2840); ++i )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2832) + 8LL * i) + 64LL);
        if ( *(_DWORD *)(v18 + 236) == 1 )
        {
          started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v18 + 24), a2, a3, a4, a5, a6, 0LL);
          if ( started < 0 )
          {
            v19 = *(struct _DEVICE_OBJECT **)(v18 + 152);
            goto LABEL_29;
          }
        }
      }
      started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v7 + 24), a2, a3, a4, a5, a6, a7);
      if ( started >= 0 )
        return (unsigned int)started;
      v19 = *(struct _DEVICE_OBJECT **)(v7 + 152);
LABEL_29:
      IoInvalidateDeviceState(v19);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 836;
    }
  }
  else
  {
    started = 1075708986;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 766;
  }
  return (unsigned int)started;
}
