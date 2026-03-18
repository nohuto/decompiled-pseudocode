/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x1801D7A68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180125A30 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rcx
  int v13; // eax

  v5 = (_QWORD *)((char *)this + 208);
  *((_DWORD *)this + 58) = 0;
  v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 208, a4, a5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v10 )
      {
        (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
        return v8;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 72LL);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 40LL))(
              v12,
              *v5,
              *((unsigned int *)this + 58));
      v8 = v13;
      if ( v13 < 0 )
        break;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x29u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x22u, 0LL);
  }
  return v8;
}
