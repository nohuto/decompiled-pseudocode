/*
 * XREFs of ?Thunk_CheckProtocol_59@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801D7390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_CheckProtocol_59(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v6 = *v5 - *v3;
  if ( *v5 == *v3 )
    v6 = v5[1] - v3[1];
  if ( v6 )
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(a1 + 24) + 32LL),
           0x87B2080C,
           0);
    v7 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BD0,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v9);
  }
  else
  {
    return 0;
  }
  return v7;
}
