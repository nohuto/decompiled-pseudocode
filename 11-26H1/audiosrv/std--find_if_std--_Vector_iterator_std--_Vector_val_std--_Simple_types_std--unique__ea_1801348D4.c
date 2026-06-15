/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_fb834c165d35b95eaabc190aaac7af56___ @ 0x1801348D4
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800323FC (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics___________lambda_fb834c165d35b95eaabc190aaac7af56___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rdi
  signed int *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *result; // rax

  v5 = a2;
  if ( a2 != a3 )
  {
    v7 = (signed int *)a4[1];
    v8 = *a4;
    do
    {
      v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v8 + 216), 3uLL);
      v10 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, *v7);
      v11 = **(_QWORD **)v5 - *v10;
      if ( !v11 )
        v11 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) - v10[1];
      if ( !v11 )
        break;
      v5 += 8LL;
    }
    while ( v5 != a3 );
  }
  result = a1;
  *a1 = v5;
  return result;
}
