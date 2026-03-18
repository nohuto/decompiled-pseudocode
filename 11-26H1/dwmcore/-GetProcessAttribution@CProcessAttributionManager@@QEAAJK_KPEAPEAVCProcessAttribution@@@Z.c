/*
 * XREFs of ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18016426C
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x180163D70 (-Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z @ 0x180163EE4 (-SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180164054 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x180164480 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     ??0Record@CProcessAttributionManager@@QEAA@K_KH@Z @ 0x1801644F8 (--0Record@CProcessAttributionManager@@QEAA@K_KH@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        __int64 **this,
        unsigned int a2,
        unsigned __int64 a3,
        struct CProcessAttribution **a4)
{
  __int64 *v4; // r14
  unsigned int v5; // edi
  __int64 v8; // rsi
  unsigned int v9; // ebp
  const struct CProcessAttributionManager::ProcessAttributionRecord **v11; // r12
  const struct CProcessAttributionManager::ProcessAttributionRecord *v12; // rsi
  __int64 v13; // rcx
  CProcessAttributionManager::Record *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r9d
  __int64 *v19; // rcx
  int ProcessAttribution; // eax
  unsigned int v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v4 = *this;
  v5 = 0;
  v8 = this[1] - *this;
  v9 = a2;
  if ( v8 > 0 )
  {
    do
    {
      v11 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v4[(unsigned __int64)v8 >> 1];
      if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v11, a3) )
      {
        v4 = (__int64 *)(v11 + 1);
        v8 += -1LL - ((unsigned __int64)v8 >> 1);
      }
      else
      {
        v8 = (unsigned __int64)v8 >> 1;
      }
    }
    while ( v8 > 0 );
    v9 = v23;
  }
  if ( v4 == this[1]
    || (v12 = (const struct CProcessAttributionManager::ProcessAttributionRecord *)*v4, *(_QWORD *)*v4 != a3) )
  {
    v15 = (CProcessAttributionManager::Record *)MIDL_user_allocate(0xA8uLL);
    if ( !v15
      || (v16 = CProcessAttributionManager::Record::Record(v15, v9, a3, this[4] - this[3]), v22 = v16, (v17 = v16) == 0) )
    {
      v5 = -2147024882;
      v18 = -2147024882;
      v21 = 229;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v21, 0LL);
      return v5;
    }
    v19 = this[1];
    if ( v19 == this[2] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        this,
        (__int64)v4,
        &v22);
      v17 = v22;
    }
    else if ( v4 == v19 )
    {
      *v19 = v16;
      ++this[1];
    }
    else
    {
      *v19 = *(v19 - 1);
      ++this[1];
      memmove_0(v4 + 1, v4, (char *)(v19 - 1) - (char *)v4);
      *v4 = v17;
    }
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           (CProcessAttributionManager *)this,
                           v9,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v17,
                           1,
                           a4);
    v5 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *(_QWORD *)(v17 + 112) = *a4;
      *(_DWORD *)(v17 + 160) = this[4] - this[3];
      return v5;
    }
    v21 = 236;
LABEL_26:
    v18 = ProcessAttribution;
    goto LABEL_15;
  }
  v13 = *((_QWORD *)v12 + 14);
  if ( !v13 )
  {
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           (CProcessAttributionManager *)this,
                           v9,
                           v12,
                           1,
                           a4);
    v5 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v12 + 14) = *a4;
      *((_DWORD *)v12 + 40) = this[4] - this[3];
      return v5;
    }
    v21 = 217;
    goto LABEL_26;
  }
  *a4 = (struct CProcessAttribution *)v13;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
  return v5;
}
