/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800411F0
 * Callers:
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x18002CBB0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAt(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (_QWORD *)PickerHostContextManager::s_PickerHostContextList )
    PickerHostContextManager::s_PickerHostContextList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_180067E90 )
    qword_180067E90 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::FreeNode(
    (__int64)&PickerHostContextManager::s_PickerHostContextList,
    a2);
}
