/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180078AFC
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800B50E8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rsi
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i);
    v12 = v7;
    if ( *(_BYTE *)(v7 + 289) )
    {
      v8 = *(_DWORD *)(a2 + 24);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v2 = -2147024362;
        v11 = 179;
        v10 = -2147024362;
        goto LABEL_10;
      }
      v10 = 0;
      if ( v9 <= *(_DWORD *)(a2 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 24)) = v7;
        *(_DWORD *)(a2 + 24) = v9;
      }
      else
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v12);
        v2 = v10;
        if ( v10 < 0 )
        {
          v11 = 190;
LABEL_10:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v11, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x135u, 0LL);
          return v2;
        }
      }
      v2 = v10;
    }
  }
  return v2;
}
