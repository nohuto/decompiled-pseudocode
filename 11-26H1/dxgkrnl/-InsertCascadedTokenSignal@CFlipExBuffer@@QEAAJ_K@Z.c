/*
 * XREFs of ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x14006C5B0
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::InsertCascadedTokenSignal(CFlipExBuffer *this, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = -1073741823;
  if ( *((_QWORD *)this + 82) )
  {
    v9 = 0LL;
    if ( (int)DxgkGetSessionTokenManager(&v9) < 0 )
      return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 82), a2);
    v5 = v9;
    v6 = *((_QWORD *)this + 47);
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 120LL))(v9, v6, &v8);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 16LL))(
             v8,
             *((_QWORD *)this + 82),
             a2,
             0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v4 < 0 )
      return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 82), a2);
  }
  return (unsigned int)v4;
}
