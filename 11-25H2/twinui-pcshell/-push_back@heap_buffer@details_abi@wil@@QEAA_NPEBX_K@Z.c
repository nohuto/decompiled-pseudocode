/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800747F4
 * Callers:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1802B5B10 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1802C34F0 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800730B8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

char __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *Src,
        size_t Size)
{
  size_t v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  char result; // al
  unsigned __int64 v11; // rdx

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( Size + *((_QWORD *)this + 1) - *(_QWORD *)this < v6 )
    goto LABEL_2;
  v11 = Size;
  if ( Size < 2 * v6 )
    v11 = 2 * v6;
  result = wil::details_abi::heap_buffer::reserve(this, v11);
  if ( result )
  {
LABEL_2:
    v7 = (void *)*((_QWORD *)this + 1);
    v8 = *((_QWORD *)this + 2) - (_QWORD)v7;
    v9 = v8 & -(__int64)((unsigned __int64)v7 < *((_QWORD *)this + 2));
    if ( Size )
    {
      if ( !v7 )
        goto LABEL_8;
      if ( Src && v9 >= Size )
      {
        memcpy_0(v7, Src, Size);
        goto LABEL_7;
      }
      memset_0(v7, 0, v8 & -(__int64)((unsigned __int64)v7 < *((_QWORD *)this + 2)));
      if ( Src )
      {
        if ( v9 >= Size )
          goto LABEL_7;
        *(_DWORD *)_o__errno(v7, Src, Size) = 34;
      }
      else
      {
LABEL_8:
        *(_DWORD *)_o__errno(v7, Src, Size) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_7:
    *((_QWORD *)this + 1) += Size;
    return 1;
  }
  return result;
}
