/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x180111700
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C (-NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011165C (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x180111824 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rax
  int v4; // esi
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // xmm0_8
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 116) )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        v8 = *(_DWORD *)(a1 + 76);
        if ( _bittest(&v8, a2) )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6384LL) + 72LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6384LL),
                  9LL);
          if ( v10 )
          {
            v11 = *(_QWORD *)(a1 + 56);
            if ( v11 )
              v12 = *(_DWORD *)(v11 + 116);
            else
              v12 = 0;
            v13 = *a3;
            v15[0] = v12;
            v15[1] = *(unsigned int *)(a1 + 72);
            v16 = v13;
            v14 = CoreUICallSend(v10, v15, 2LL, 9LL, 2, &unk_1802F5B2F, a2, &v16, v12);
            if ( v14 != -2018375675 )
              v4 = v14;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x125u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
