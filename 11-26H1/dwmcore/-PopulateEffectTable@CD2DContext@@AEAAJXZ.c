/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1801E01E0
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x180102DA0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1801369EC (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 i; // rdi
  int v5; // eax
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  for ( i = 0LL; (unsigned int)i < 7; i = (unsigned int)(i + 1) )
  {
    if ( *((_BYTE *)&unk_1802E4F60 + 16 * (unsigned int)i + 4) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 25) + 504LL))(
             *((_QWORD *)this + 25),
             *((_QWORD *)&unk_1802E4F60 + 2 * (unsigned int)i + 1),
             &v7);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x62Fu, 0LL);
        goto LABEL_9;
      }
      *((_QWORD *)this + i + 27) = v7;
      v2 = 0LL;
      v7 = 0LL;
    }
  }
  if ( v3 >= 0 )
    goto LABEL_10;
LABEL_9:
  CD2DContext::ReleaseEffectTable(this);
  v2 = v7;
LABEL_10:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v3;
}
