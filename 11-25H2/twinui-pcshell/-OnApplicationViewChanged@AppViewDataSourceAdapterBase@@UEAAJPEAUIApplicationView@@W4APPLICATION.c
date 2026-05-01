/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017F950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v6; // r14
  const char *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _BYTE *Ptr; // rbx
  __int64 v11; // rbx
  __int64 result; // rax
  void (__fastcall *v13)(RTL_SRWLOCK *, unsigned __int64, __int64); // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = a1 + 14;
  AcquireSRWLockExclusive(a1 + 14);
  try
  {
    if ( a2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = (_QWORD *)*((_QWORD *)a1[12].Ptr + 1);
    v9 = 0LL;
    Ptr = a1[12].Ptr;
    while ( !*((_BYTE *)v8 + 25) )
    {
      if ( v8[4] < a2 )
      {
        v8 = (_QWORD *)v8[2];
      }
      else
      {
        Ptr = v8;
        v8 = (_QWORD *)*v8;
      }
    }
    if ( Ptr[25] || a2 < *((_QWORD *)Ptr + 4) )
      Ptr = a1[12].Ptr;
    if ( a2 )
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 0LL);
    if ( Ptr == a1[12].Ptr )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)Ptr + 5);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v9);
    }
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1u:
          goto LABEL_32;
        case 3u:
          v13 = (void (__fastcall *)(RTL_SRWLOCK *, unsigned __int64, __int64))*((_QWORD *)a1->Ptr + 9);
          goto LABEL_33;
        case 5u:
          v13 = (void (__fastcall *)(RTL_SRWLOCK *, unsigned __int64, __int64))*((_QWORD *)a1->Ptr + 7);
          goto LABEL_33;
        case 7u:
        case 9u:
          (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, unsigned __int64, __int64))a1->Ptr + 4))(a1, a3, a2, v11);
          goto LABEL_26;
      }
      if ( a3 != 10 )
      {
        if ( a3 != 11 )
        {
          if ( a3 != 12 )
          {
LABEL_26:
            if ( v11 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v9);
            if ( v6 )
              ReleaseSRWLockExclusive(v6);
            return 0LL;
          }
          v13 = (void (__fastcall *)(RTL_SRWLOCK *, unsigned __int64, __int64))*((_QWORD *)a1->Ptr + 8);
LABEL_33:
          v13(a1, a2, v11);
          goto LABEL_26;
        }
LABEL_32:
        v13 = (void (__fastcall *)(RTL_SRWLOCK *, unsigned __int64, __int64))*((_QWORD *)a1->Ptr + 6);
        goto LABEL_33;
      }
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, unsigned __int64, __int64))a1->Ptr + 5))(a1, a2, v11);
    goto LABEL_26;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x45,
                           (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}
