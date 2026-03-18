/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DMatrix@@@Z @ 0x1801A41F0
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C (-NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // rax
  int v4; // esi
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF

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
            v14 = a3[1];
            v18[0] = v12;
            v18[1] = *(unsigned int *)(a1 + 72);
            v19[0] = v13;
            v15 = a3[2];
            v19[1] = v14;
            v16 = a3[3];
            v19[2] = v15;
            v19[3] = v16;
            v17 = CoreUICallSend(v10, v18, 2LL, 9LL, 8, &unk_1802F5B53, a2, v19, v12);
            if ( v17 != -2018375675 )
              v4 = v17;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x242u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
