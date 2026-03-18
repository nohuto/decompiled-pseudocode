/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180163570 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E090 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180163170 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180163210 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z @ 0x180163A7C (--$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x180163BF0 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCChannelContext@@$00@@QEAAJI@Z @ 0x180164734 (-RemoveAt@-$DynArray@PEAVCChannelContext@@$00@@QEAAJI@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18022B478 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  __int64 v5; // r8
  unsigned int v6; // esi
  struct CChannelContext *v7; // rbx
  struct CComposition *v8; // rdx
  __int64 v9; // r8
  int v10; // edx
  struct CChannelContext *v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v12 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v12);
  v6 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AttachedChannel, 0x646u, 0LL);
  }
  else
  {
    v7 = v12;
    if ( *((_BYTE *)v12 + 16) )
      CComposition::UpdateDebugCounter(this, 0);
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 928, &v12, v5) )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v7);
    CResourceTable::ReleaseHandleTableEntries(*((CResourceTable **)v7 + 6), v8, v7);
    ReleaseInterfaceNoNULL<CChannelContext>(v7);
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v7);
    LOBYTE(v9) = 0;
    *(_QWORD *)(*((_QWORD *)this + 104) + 8 * v2) = 0LL;
    v10 = *((_DWORD *)this + 214);
    if ( v10 )
    {
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 104) + 8LL * (unsigned int)(*((_DWORD *)this + 214) - 1)) )
          break;
        DynArray<CChannelContext *,1>::RemoveAt((char *)this + 832, (unsigned int)(v10 - 1), v9);
        v10 = *((_DWORD *)this + 214);
        LOBYTE(v9) = 1;
      }
      while ( v10 );
      if ( (_BYTE)v9 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 832, 8u);
    }
  }
  return v6;
}
