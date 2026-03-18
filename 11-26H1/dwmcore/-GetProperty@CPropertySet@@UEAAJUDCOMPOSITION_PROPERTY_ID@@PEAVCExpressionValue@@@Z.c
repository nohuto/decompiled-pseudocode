/*
 * XREFs of ?GetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180169080
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertySet::GetProperty(__int64 a1, unsigned int a2, CExpressionValue *a3)
{
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // eax
  __int64 result; // rax
  int v8; // xmm6_4
  _QWORD *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  _OWORD *v12; // rbx
  _OWORD *Property; // rbx
  _OWORD *v14; // rbx
  char v15; // bl
  _OWORD *v16; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 >= *(_DWORD *)(a1 + 112) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xB6u, 0LL);
    return 2147942487LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = a1 + 88;
    v6 = *(_DWORD *)(v4 + 8LL * a2);
    if ( v6 != 18 )
    {
      switch ( v6 )
      {
        case 17:
          v15 = *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                            v5,
                            a2);
          CExpressionValue::DestroyCurrent(a3);
          *(_BYTE *)a3 = v15;
          result = 0LL;
          *((_DWORD *)a3 + 16) = 17;
          return result;
        case 35:
          v9 = (_QWORD *)(*(_QWORD *)(a1 + 120) + (*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF));
          if ( *((_DWORD *)a3 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
          *((_DWORD *)a3 + 16) = 35;
          result = 0LL;
          *(_QWORD *)a3 = *v9;
          return result;
        case 52:
          v10 = *(_QWORD *)(a1 + 120) + (*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF);
          if ( *((_DWORD *)a3 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
          *((_DWORD *)a3 + 16) = 52;
          *(_QWORD *)a3 = *(_QWORD *)v10;
          *((_DWORD *)a3 + 2) = *(_DWORD *)(v10 + 8);
          return 0LL;
        case 69:
          Property = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                                 v5,
                                 a2);
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 69;
          result = 0LL;
          *(_OWORD *)a3 = *Property;
          return result;
        case 70:
          v14 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                            v5,
                            a2);
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 70;
          result = 0LL;
          *(_OWORD *)a3 = *v14;
          return result;
        case 71:
          v16 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                            v5,
                            a2);
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 71;
          *(_OWORD *)a3 = *v16;
          return 0LL;
        case 104:
          v11 = *(_QWORD *)(a1 + 120) + (*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF);
          if ( *((_DWORD *)a3 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
          *((_DWORD *)a3 + 16) = 104;
          *(_OWORD *)a3 = *(_OWORD *)v11;
          result = 0LL;
          *((_QWORD *)a3 + 2) = *(_QWORD *)(v11 + 16);
          return result;
        case 265:
          v12 = (_OWORD *)(*(_QWORD *)(a1 + 120) + (*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF));
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 265;
          *(_OWORD *)a3 = *v12;
          *((_OWORD *)a3 + 1) = v12[1];
          *((_OWORD *)a3 + 2) = v12[2];
          result = 0LL;
          *((_OWORD *)a3 + 3) = v12[3];
          return result;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
    }
    v8 = *(_DWORD *)((*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 120));
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
    *(_DWORD *)a3 = v8;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
}
