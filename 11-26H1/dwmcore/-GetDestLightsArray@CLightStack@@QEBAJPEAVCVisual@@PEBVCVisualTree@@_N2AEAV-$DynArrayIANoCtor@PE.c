/*
 * XREFs of ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCLight@@$02$0A@@@PEA_N@Z @ 0x180214D08
 * Callers:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800AB6E8 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  __int64 v11; // rsi
  unsigned int i; // ebp
  __int64 v13; // r8
  char v14; // r11
  __int64 j; // r9
  __int64 v16; // rdx
  unsigned int k; // ecx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = a6;
  for ( i = 0; i < *(_DWORD *)(a1 + 32); ++i )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = 1;
    if ( *(_DWORD *)(v13 + 16LL * i + 8) != 1 )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        v16 = *(_QWORD *)(a1 + 8);
        if ( (unsigned int)j >= *(_DWORD *)(v11 + 24) )
          break;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8 * j) == *(_QWORD *)(v13 + 16LL * i) )
        {
          v14 = 0;
          break;
        }
      }
      for ( k = i + 1; k < *(_DWORD *)(a1 + 32); ++k )
      {
        v16 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(v13 + 16LL * k + 8) == 1 && *(_QWORD *)(v13 + 16LL * i) == *(_QWORD *)(v13 + 16LL * k) )
          goto LABEL_29;
      }
      if ( v14 )
      {
        v18 = *(_QWORD *)(v16 + 16LL * i);
        v25 = v18;
        if ( !a5 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 2LL) )
            goto LABEL_27;
          v18 = v25;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 264LL))(v18)
          || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 256LL))(v25, a3, a2) )
        {
LABEL_27:
          if ( v7 )
            *v7 = 0;
          continue;
        }
        v19 = *(_DWORD *)(v11 + 24);
        v20 = v19 + 1;
        if ( v19 + 1 < v19 )
        {
          v21 = -2147024362;
          v22 = 183;
          goto LABEL_31;
        }
        if ( v20 > *(_DWORD *)(v11 + 20) )
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8, 1, &v25);
          if ( v21 < 0 )
          {
            v22 = 194;
LABEL_31:
            v23 = v21;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v22, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x11Au, 0LL);
            return v23;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v11 + 8LL * v19) = v25;
          *(_DWORD *)(v11 + 24) = v20;
        }
      }
    }
LABEL_29:
    ;
  }
  if ( *(_DWORD *)(v11 + 24) && v7 )
    *v7 = 1;
  return 0;
}
