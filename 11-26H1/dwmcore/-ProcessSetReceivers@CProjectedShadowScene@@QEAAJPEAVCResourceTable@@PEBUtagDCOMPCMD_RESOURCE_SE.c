/*
 * XREFs of ?ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E458
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249830 (-ProcessAppendReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x1800D7DE0 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180190DE8 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180190FBC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     ??$emplace_back@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUReceiverEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18027E1A0 (--$emplace_back@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        unsigned int *a4,
        unsigned int a5,
        bool a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  CProjectedShadowReceiver **i; // rbx
  CProjectedShadowReceiver *v11; // r14
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-30h]
  CProjectedShadowScene *v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  CProjectedShadowReceiver *v19; // [rsp+70h] [rbp+20h] BYREF

  v19 = a3;
  v17 = 0LL;
  v16 = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, 0x61u, (__int64)a2, v14, (__int64)&v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( !a6 )
      CProjectedShadowScene::ClearReceivers(this);
    for ( i = (CProjectedShadowReceiver **)v16; i != *((CProjectedShadowReceiver ***)&v16 + 1); ++i )
    {
      v19 = *i;
      if ( !CProjectedShadowScene::FindReceiverEntry(this, v19) )
      {
        std::list<CProjectedShadowScene::ReceiverEntry>::emplace_back<CProjectedShadowReceiver * &>(
          (__int64 *)this + 11,
          (__int64 *)&v19);
        v11 = v19;
        v15 = this;
        v12 = (_QWORD *)((char *)v19 + 80);
        v13 = (_QWORD *)*((_QWORD *)v19 + 11);
        if ( v13 == *((_QWORD **)v19 + 12) )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            v12,
            (__int64)v13,
            (__int64 *)&v15);
        }
        else
        {
          *v13 = this;
          v12[1] += 8LL;
        }
        CProjectedShadowReceiver::RequestRedraw(v11);
      }
    }
    if ( (_QWORD)v16 )
      std::_Deallocate<16>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v7);
    if ( (_QWORD)v16 )
      std::_Deallocate<16>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
    return v8;
  }
}
