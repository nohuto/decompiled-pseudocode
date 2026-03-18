/*
 * XREFs of ?OnMessage@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x180161B80
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180161C14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)this;
  v3 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
         &IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Type,
         &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_N9qnfjsF_duJu06w7x6f60H_t8I_BamoGroup$c84e9d1a,
         64LL);
  v4 = v3;
  if ( v3 == -2018375668 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
      -2018375668,
      0);
  }
  else if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C56,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3,
      v6);
  }
  return v4;
}
