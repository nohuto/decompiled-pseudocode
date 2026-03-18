/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14003B0E4
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x14003B230 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x14003B290 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CTokenManager *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 Win32kImportTable; // rax
  int v7; // eax
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // r8
  void *v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  LONG PreviousState; // [rsp+48h] [rbp+10h] BYREF

  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
  v2 = CTokenManager::EnsureCurrentLegacyTokenBuffer(this);
  if ( v2 >= 0 )
  {
    v3 = *((_QWORD *)this + 23);
    v2 = 0;
    if ( *(_DWORD *)(v3 + 2104) < 0x280u )
      v2 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 23));
    v4 = *(_QWORD *)(v3 + 2096);
    v5 = *(_DWORD *)(v3 + 2104);
    if ( v2 >= 0 )
    {
      v13 = 0;
      Win32kImportTable = DxgkGetWin32kImportTable();
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(Win32kImportTable + 472))(v5, &v13, v4);
      v8 = *((_QWORD *)this + 23);
      v9 = 0;
      v10 = (unsigned int)(40 * v13);
      *(_DWORD *)(*(_QWORD *)(v8 + 2088) + 16LL) += v13;
      *(_DWORD *)(*(_QWORD *)(v8 + 2088) + 2068LL) += v10;
      *(_QWORD *)(v8 + 2096) += v10;
      *(_DWORD *)(v8 + 2104) -= v10;
      if ( v7 != -1073741789 )
        v9 = v7;
      v2 = v9;
      if ( v9 >= 0 && v13 )
      {
        v11 = (void *)*((_QWORD *)this + 8);
        PreviousState = 0;
        ZwSetEvent(v11, &PreviousState);
      }
    }
  }
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  return (unsigned int)v2;
}
