/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180064524
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800B4AD8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z @ 0x180064640 (-AddMultipleAndSet@-$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rdi
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i);
    if ( *(_BYTE *)(v8 + 289) )
    {
      v7 = DynArray<CDWMDisplay *,0>::AddMultipleAndSet(a2, &v8);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x130u, 0LL);
        return v2;
      }
    }
  }
  return v2;
}
