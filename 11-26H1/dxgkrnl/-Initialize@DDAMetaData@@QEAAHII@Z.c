/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1401939C0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x140406CCC (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v2 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v2, 0x124u, 0);
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 4) = v3;
  if ( !v3 || !*v3 )
    return 0LL;
  v4 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, 0x60u, 0);
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 6) = v5;
  if ( !v5 || !*v5 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 262;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get Win32k functions!!",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  return 1LL;
}
