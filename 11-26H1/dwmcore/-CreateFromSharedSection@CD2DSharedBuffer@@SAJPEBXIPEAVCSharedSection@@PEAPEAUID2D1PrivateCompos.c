/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007A5B4
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18009D220 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x180079CA0 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        const void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new();
  v11 = v9;
  if ( v9 )
  {
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
      (__int64)v9,
      v10);
    v11[2] = a1;
    *v11 = &CD2DSharedBuffer::`vftable';
    *((_DWORD *)v11 + 6) = a2;
    v11[4] = a3;
    if ( a3 )
      CMILRefCountImpl::AddReference((struct CSharedSection *)((char *)a3 + 8));
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 1));
    *a4 = (struct ID2D1PrivateCompositorBuffer *)v11;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Eu, 0LL);
  }
  return v8;
}
