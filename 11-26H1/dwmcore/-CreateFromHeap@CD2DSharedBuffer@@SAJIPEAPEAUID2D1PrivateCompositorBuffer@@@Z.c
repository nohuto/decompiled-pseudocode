/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802A4CD4
 * Callers:
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18027DA14 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x180079CA0 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x1801D7C30 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ??0CD2DSharedBuffer@@IEAA@PEAXI@Z @ 0x1802A4CA0 (--0CD2DSharedBuffer@@IEAA@PEAXI@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v2; // edi
  void *v4; // rbx
  CD2DSharedBuffer *v5; // rax
  volatile signed __int32 *v6; // rax
  struct ID2D1PrivateCompositorBuffer *v7; // rsi
  unsigned int v9; // [rsp+20h] [rbp-18h]
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = MIDL_user_allocate(a1);
  if ( v4 )
  {
    v5 = (CD2DSharedBuffer *)CD2DSharedBuffer::operator new();
    if ( v5 )
    {
      v6 = (volatile signed __int32 *)CD2DSharedBuffer::CD2DSharedBuffer(v5, (__int64)v4);
      v10 = v6;
      v7 = (struct ID2D1PrivateCompositorBuffer *)v6;
      if ( v6 )
      {
        v4 = 0LL;
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 2));
        *a2 = v7;
        v10 = 0LL;
        goto LABEL_8;
      }
    }
    v9 = 94;
  }
  else
  {
    v9 = 87;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v9, 0LL);
LABEL_8:
  ReleaseInterface<CD2DSharedBuffer>(&v10);
  if ( v4 )
    operator delete(v4);
  return v2;
}
