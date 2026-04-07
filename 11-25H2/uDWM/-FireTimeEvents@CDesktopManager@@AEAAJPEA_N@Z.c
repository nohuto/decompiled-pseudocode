/*
 * XREFs of ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180008F20
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x180008B30 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18005751C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::FireTimeEvents(CDesktopManager *this, bool *a2)
{
  unsigned int v3; // edi
  _BYTE *v4; // r9
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 i; // rbx
  int v8; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // eax
  _QWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-64h]
  unsigned int v17; // [rsp+48h] [rbp-60h]
  char v18[80]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0;
  if ( !*((_DWORD *)this + 136) )
  {
LABEL_10:
    if ( *((_BYTE *)this + 24) )
    {
      v14 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                               + 28));
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x798u, 0LL);
    }
    return v3;
  }
  DynArrayImpl<0>::DynArrayImpl<0>(v15, v18, 10LL);
  *v4 = 1;
  v5 = *((unsigned int *)this + 136);
  v6 = v5 + v17;
  if ( (unsigned int)v5 + v17 < v17 )
  {
    v3 = -2147024362;
    v11 = -2147024362;
    v12 = -2147024362;
    v13 = 179;
  }
  else
  {
    if ( v6 <= v16 )
    {
      memcpy_0((void *)(v15[0] + 8LL * v17), *((const void **)this + 65), 8 * v5);
      v17 = v6;
      goto LABEL_5;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8, v5, *((_QWORD *)this + 65));
    v3 = v10;
    v11 = v10;
    if ( v10 >= 0 )
    {
LABEL_5:
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v17 )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>(v15);
          goto LABEL_10;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15[0] + 8 * i) + 128LL))(*(_QWORD *)(v15[0] + 8 * i));
        v3 = v8;
        if ( v8 < 0 )
          break;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x792u, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>(v15);
      return v3;
    }
    v12 = v10;
    v13 = 190;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x78Eu, 0LL);
  DynArrayImpl<0>::~DynArrayImpl<0>(v15);
  return v11;
}
