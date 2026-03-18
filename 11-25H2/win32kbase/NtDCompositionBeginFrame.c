/*
 * XREFs of NtDCompositionBeginFrame @ 0x1401978D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BDC4C (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1400ED220 (EtwTraceDCompBeginFrameEvent.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x140197B80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(struct HDCOMPOSITIONCONNECTION__ *a1, void *Src, void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rdx
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct DirectComposition::CConnection *v16; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int64 Srca[4]; // [rsp+30h] [rbp-188h] BYREF
  _OWORD v18[10]; // [rsp+50h] [rbp-168h] BYREF
  _OWORD v19[10]; // [rsp+F0h] [rbp-C8h] BYREF

  Srca[1] = (unsigned __int64)a1;
  Srca[2] = (unsigned __int64)a3;
  v16 = 0LL;
  memset(v19, 0, sizeof(v19));
  Srca[0] = 0LL;
  if ( !UserIsCurrentProcessDwm(v7, v6) )
    return 3221225506LL;
  if ( Src )
  {
    memset(v18, 0, sizeof(v18));
    RtlCopyFromUser(v18, Src, 0xA0uLL);
    v19[0] = v18[0];
    v19[1] = v18[1];
    v19[2] = v18[2];
    v19[3] = v18[3];
    v19[4] = v18[4];
    v19[5] = v18[5];
    v19[6] = v18[6];
    v19[7] = v18[7];
    v19[8] = v18[8];
    v19[9] = v18[9];
    v9 = 0;
    if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline(v19) )
    {
      if ( *(_QWORD *)&v19[9] )
      {
        v10 = 8LL * DWORD2(v19[9]);
        Srca[3] = v10;
        v11 = 0xFFFFFFFFLL;
        if ( v10 <= 0xFFFFFFFF )
          v11 = (unsigned int)v10;
        v9 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v10 <= 0xFFFFFFFF && (_DWORD)v11 )
        {
          if ( (v19[9] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = *(_QWORD *)&v19[9] + v11;
          if ( v12 > MmUserProbeAddress || v12 < *(_QWORD *)&v19[9] )
            v9 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
      }
      else if ( DWORD2(v19[9]) )
      {
        v9 = -1073741811;
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v9 >= 0 )
  {
    v9 = DirectComposition::CConnection::ReferenceHandle(a1, &v16);
    if ( v9 >= 0 )
    {
      EtwTraceDCompBeginFrameEvent((__int64)a1, *((__int64 *)&v19[0] + 1), v14);
      v9 = DirectComposition::CConnection::BeginFrame(v16, (const struct COMPOSITION_FRAME_INFO *)v19, Srca);
    }
  }
  if ( a3 )
    RtlCopyToUser(a3, Srca, 8uLL);
  else
    v9 = -1073741811;
  if ( v9 < 0 )
  {
    v13 = Srca[0];
    if ( Srca[0] )
    {
      v15 = *((_QWORD *)v16 + 24);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
    }
  }
  if ( v16 )
    DirectComposition::CConnection::Release(v16, v13);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
