/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1801A27F4
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18007B830 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1801A28C0 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        bool a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v8; // ebx
  char *v9; // rax
  CHwLightCollectionBuffer *v10; // rdi

  v8 = 0;
  v9 = (char *)MIDL_user_allocate(0x208uLL);
  v10 = (CHwLightCollectionBuffer *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CHwLightCollectionBuffer::`vftable';
    *((_DWORD *)v9 + 4) = -1;
    memset_0(v9 + 20, 0, 0x1F4uLL);
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v10)(v10);
    CHwLightCollectionBuffer::UpdateLightInfo(v10, a1, a2, a3);
    *a4 = v10;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  return v8;
}
