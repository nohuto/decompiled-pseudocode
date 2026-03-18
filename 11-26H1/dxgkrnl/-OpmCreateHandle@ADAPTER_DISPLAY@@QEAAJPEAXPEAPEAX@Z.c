/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x14040A434
 * Callers:
 *     DxgkOpmCreateHandle @ 0x14040A220 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     Feature_1691578680__private_IsEnabledDeviceUsageNoInline @ 0x1400706D4 (Feature_1691578680__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1401A3360 (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(ADAPTER_DISPLAY *this, void *a2, void **a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rsi
  char *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6781;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6781LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((ADAPTER_DISPLAY *)((char *)this + 376)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6782;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6782LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = operator new(0x28uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 3221225495LL;
  *(_BYTE *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 16) = a2;
  if ( !(unsigned int)Feature_1691578680__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (_QWORD *)((char *)this + 352);
    v13 = *((_QWORD *)this + 44);
    if ( *(ADAPTER_DISPLAY **)(v13 + 8) == (ADAPTER_DISPLAY *)((char *)this + 352) )
    {
      *v7 = v13;
      v7[1] = v12;
      *(_QWORD *)(v13 + 8) = v7;
      *v12 = v7;
      goto LABEL_15;
    }
LABEL_13:
    __fastfail(3u);
  }
  do
  {
    do
    {
      v9 = *((_QWORD *)this + 46);
      *((_QWORD *)this + 46) = v9 + 1;
    }
    while ( !v9 );
  }
  while ( ADAPTER_DISPLAY::FindOpmAdapterMapping(this, v9) );
  v10 = (char *)this + 352;
  v7[3] = v9;
  v11 = *(_QWORD *)v10;
  if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
    goto LABEL_13;
  *v7 = v11;
  v7[1] = v10;
  *(_QWORD *)(v11 + 8) = v7;
  *(_QWORD *)v10 = v7;
  v7 = (_QWORD *)v7[3];
LABEL_15:
  *a3 = v7;
  return 0LL;
}
