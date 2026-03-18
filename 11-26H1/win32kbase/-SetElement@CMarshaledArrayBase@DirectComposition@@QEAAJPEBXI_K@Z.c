/*
 * XREFs of ?SetElement@CMarshaledArrayBase@DirectComposition@@QEAAJPEBXI_K@Z @ 0x14023E00C
 * Callers:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 *     ?SetElement@?$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAAJPEBMI@Z @ 0x140236870 (-SetElement@-$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAAJPEBMI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::SetElement(
        DirectComposition::CMarshaledArrayBase *this,
        _DWORD *a2,
        unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 1) <= (unsigned __int64)a3 )
    return 3221225485LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL * a3) = *a2;
  if ( *((_QWORD *)this + 2) )
    *((_QWORD *)this + 2) = -1LL;
  return result;
}
