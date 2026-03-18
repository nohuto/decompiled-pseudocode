/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1403B3D88
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140419E20 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1403B3E1C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1403B4088 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403B4760 (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-24h]
  void *v4; // [rsp+28h] [rbp-20h]
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  PDOBaseEnum::PDOBaseEnum((PDOBaseEnum *)v2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 2280));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 2280),
    *((_QWORD *)this + 270),
    v3,
    (unsigned __int64 *)v4);
  *((_DWORD *)this + 526) = 0;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
}
