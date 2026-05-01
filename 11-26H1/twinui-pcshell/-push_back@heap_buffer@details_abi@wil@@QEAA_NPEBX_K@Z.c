/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180143760
 * Callers:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1802ACE4C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1802BA970 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18006E050 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *Src,
        size_t Size)
{
  size_t v6; // rcx
  void **v7; // r15
  _QWORD *v8; // rbx
  void *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  bool result; // al
  unsigned __int64 v13; // rdx

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  v7 = (void **)((char *)this + 8);
  if ( Size + *((_QWORD *)this + 1) - *(_QWORD *)this < v6 )
  {
    v8 = (_QWORD *)((char *)this + 8);
    goto LABEL_3;
  }
  v13 = Size;
  if ( Size < 2 * v6 )
    v13 = 2 * v6;
  if ( wil::details_abi::heap_buffer::reserve(this, v13) )
  {
    v8 = (_QWORD *)((char *)this + 8);
LABEL_3:
    v9 = *v7;
    v10 = *((_QWORD *)this + 2) - (_QWORD)*v7;
    v11 = v10 & -(__int64)((unsigned __int64)*v7 < *((_QWORD *)this + 2));
    if ( Size )
    {
      if ( !v9 )
        goto LABEL_9;
      if ( Src )
      {
        if ( v11 >= Size )
        {
          memcpy_0(v9, Src, Size);
          goto LABEL_8;
        }
        v8 = (_QWORD *)((char *)this + 8);
      }
      memset_0(v9, 0, v10 & -(__int64)((unsigned __int64)*v7 < *((_QWORD *)this + 2)));
      if ( Src )
      {
        if ( v11 >= Size )
          goto LABEL_8;
        *(_DWORD *)_o__errno(v9, Src, Size) = 34;
      }
      else
      {
LABEL_9:
        *(_DWORD *)_o__errno(v9, Src, Size) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_8:
    result = 1;
    *v8 = Size + *((_QWORD *)this + 1);
    return result;
  }
  return 0;
}
