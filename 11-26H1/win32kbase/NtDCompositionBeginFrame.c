/*
 * XREFs of NtDCompositionBeginFrame @ 0x1401B2540
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400FEAA0 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x140133A60 (EtwTraceDCompBeginFrameEvent.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(struct HDCOMPOSITIONCONNECTION__ *a1, void *Src, void *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  signed int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct DirectComposition::CConnection *v15; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int64 Srca[4]; // [rsp+30h] [rbp-188h] BYREF
  _OWORD v17[10]; // [rsp+50h] [rbp-168h] BYREF
  _OWORD v18[10]; // [rsp+F0h] [rbp-C8h] BYREF

  Srca[1] = (unsigned __int64)a1;
  Srca[2] = (unsigned __int64)a3;
  v15 = 0LL;
  memset(v18, 0, 0x98uLL);
  Srca[0] = 0LL;
  if ( !UserIsCurrentProcessDwm(v7, v6, v8) )
    return 3221225506LL;
  if ( Src )
  {
    memset(v17, 0, 0x98uLL);
    RtlCopyFromUser(v17, Src, 0x98uLL);
    v18[0] = v17[0];
    v18[1] = v17[1];
    v18[2] = v17[2];
    v18[3] = v17[3];
    v18[4] = v17[4];
    v18[5] = v17[5];
    v18[6] = v17[6];
    v18[7] = v17[7];
    v18[8] = v17[8];
    *(_QWORD *)&v18[9] = *(_QWORD *)&v17[9];
    v10 = 0;
    if ( *((_QWORD *)&v17[8] + 1) )
    {
      v11 = 8LL * LODWORD(v17[9]);
      Srca[3] = v11;
      v12 = -1;
      if ( v11 <= 0xFFFFFFFF )
        v12 = 8 * LODWORD(v17[9]);
      v10 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
        ProbeForRead(*((volatile void **)&v17[8] + 1), v12, 8u);
    }
    else if ( LODWORD(v17[9]) )
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v10 >= 0 )
  {
    v10 = DirectComposition::CConnection::ReferenceHandle(a1, &v15);
    if ( v10 >= 0 )
    {
      EtwTraceDCompBeginFrameEvent((__int64)a1, *(__int64 *)&v18[2], v13);
      v10 = DirectComposition::CConnection::BeginFrame(v15, (const struct COMPOSITION_FRAME_INFO *)v18, Srca);
    }
  }
  if ( a3 )
    RtlCopyToUser(a3, Srca, 8uLL);
  else
    v10 = -1073741811;
  if ( v10 < 0 )
  {
    if ( Srca[0] )
    {
      v14 = *((_QWORD *)v15 + 24);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
    }
  }
  if ( v15 )
    DirectComposition::CConnection::Release(v15);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
