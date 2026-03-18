/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401DC798
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1401DB584 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401DCC9C (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  DXGGLOBAL *v4; // rax
  unsigned int v5; // ebx

  if ( *(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = -1073741823LL;
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1289;
    return result;
  }
  v3 = (char *)operator new(0x4AB30uLL, 0x4B677844u, 64LL);
  if ( !v3 )
  {
    *(_QWORD *)&DXGGLOBAL::m_pGlobal = 0LL;
    goto LABEL_8;
  }
  v4 = DXGGLOBAL::DXGGLOBAL(v3);
  *(_QWORD *)&DXGGLOBAL::m_pGlobal = v4;
  if ( !v4 )
  {
LABEL_8:
    v5 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1301;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGGLOBAL returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v5;
  }
  result = DXGGLOBAL::Initialize(v4);
  v5 = result;
  if ( (int)result >= 0 )
    return result;
  DXGGLOBAL::DestroyGlobal();
  return v5;
}
