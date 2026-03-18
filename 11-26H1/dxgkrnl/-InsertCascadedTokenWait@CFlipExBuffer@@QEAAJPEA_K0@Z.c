/*
 * XREFs of ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x14006C504
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x140021340 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::InsertCascadedTokenWait(
        CFlipExBuffer *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  result = 3221225473LL;
  if ( *((_BYTE *)this + 647) || (v7 = *((_QWORD *)this + 86)) == 0 )
  {
    *((_BYTE *)this + 647) = 0;
    return 3221226029LL;
  }
  else
  {
    v8 = *((unsigned int *)this + 167);
    if ( (_DWORD)v8 && *((_DWORD *)this + 170) )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 64LL))(
                 v7,
                 v8,
                 *((unsigned int *)this + 166),
                 *((_QWORD *)this + 88));
      v9 = ++*((_QWORD *)this + 88);
      if ( (int)result >= 0 )
      {
        v10 = *((_QWORD *)this + 87);
        ++*((_DWORD *)this + 163);
        *a2 = v10;
        *a3 = v9;
      }
    }
  }
  return result;
}
