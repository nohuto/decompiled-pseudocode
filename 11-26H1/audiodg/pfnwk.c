/*
 * XREFs of pfnwk @ 0x140007280
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007360 @ 0x140007360 (sub_140007360.c)
 *     sub_140054C10 @ 0x140054C10 (sub_140054C10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall pfnwk(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rsi
  __int64 v6; // rcx

  v5 = Context[2];
  if ( Mtx_lock((_Mtx_t)(v5 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v5 + 164) == 0x7FFFFFFF )
  {
LABEL_8:
    *(_DWORD *)(v5 + 164) = 2147483646;
    std::_Throw_Cpp_error(6);
    goto LABEL_9;
  }
  if ( !(unsigned __int8)sub_140054C10(v5 + 80) )
  {
    v6 = *(_QWORD *)(*Context + 56LL);
    if ( v6 )
    {
      sub_1400B6010(v6);
      goto LABEL_6;
    }
LABEL_9:
    std::_Xbad_function_call();
    JUMPOUT(0x14000735ALL);
  }
LABEL_6:
  Mtx_unlock((_Mtx_t)(v5 + 88));
  sub_140007360(Context);
  CloseThreadpoolWork(Work);
}
