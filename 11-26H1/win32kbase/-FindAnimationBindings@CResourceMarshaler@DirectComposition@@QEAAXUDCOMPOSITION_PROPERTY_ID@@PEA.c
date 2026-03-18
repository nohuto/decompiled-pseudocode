/*
 * XREFs of ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXUDCOMPOSITION_PROPERTY_ID@@PEAPEAVCAnimationBinding@2@11@Z @ 0x14018C8D0
 * Callers:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSI.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DirectComposition::CResourceMarshaler::FindAnimationBindings(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  _QWORD *result; // rax
  int v10; // ecx
  bool v11; // zf

  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  while ( v5 )
  {
    if ( *(_DWORD *)(v5 + 12) != a2 )
      goto LABEL_11;
    v10 = *(_DWORD *)(v5 + 8);
    if ( (v10 & 1) != 0 )
    {
      v6 = v5;
      break;
    }
    if ( (v10 & 2) != 0 )
    {
      v7 = v5;
      v11 = v8 == 0;
    }
    else
    {
      if ( (v10 & 4) == 0 )
        goto LABEL_11;
      v8 = v5;
      v11 = v7 == 0;
    }
    if ( !v11 )
      break;
LABEL_11:
    v5 = *(_QWORD *)(v5 + 32);
  }
  result = a5;
  *a3 = v6;
  *a4 = v7;
  *a5 = v8;
  return result;
}
