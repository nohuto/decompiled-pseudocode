/*
 * XREFs of ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ACBEC
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015AFE0 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x180027D80 (-GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x1800998D0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180099A90 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180119A40 (-GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180159A70 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180159AB0 (-GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AEA24 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x1801AEB14 (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801AEB5C (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1801AEBD0 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AEC38 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AECC4 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyConnection::RegisterControllerClient(
        EdgyConnection *this,
        const unsigned __int16 *a2,
        struct EdgyControllerClientProxy *a3)
{
  Edges *v3; // rbp
  int v5; // eax
  unsigned int v6; // edi
  const struct D2D_VECTOR_2F *ContainerId; // rax
  unsigned int Routing; // eax
  unsigned int RunState; // eax
  const struct D2D_VECTOR_2F *Type; // rax
  const struct D2D_VECTOR_2F *Data; // rax
  unsigned int GestureDistance; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (EdgyConnection *)((char *)this + 72);
  v5 = Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2, a3);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v5,
      v14);
  ContainerId = (const struct D2D_VECTOR_2F *)BamoContainerInfoInputObjectProxy::GetContainerId((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDirectionChanged(v3, a3, ContainerId);
  Routing = BamoEdgyControllerClientProxy::GetRouting((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRoutingChanged(v3, a3, Routing);
  RunState = BamoEdgyControllerClientProxy::GetRunState((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRunStateChanged(v3, a3, RunState);
  Type = (const struct D2D_VECTOR_2F *)BamoDragSourceClientProxy::GetType((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex0Changed(v3, a3, Type);
  Data = (const struct D2D_VECTOR_2F *)BamoAnimationTargetClientProxy::GetData((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex1Changed(v3, a3, Data);
  GestureDistance = BamoEdgyControllerClientProxy::GetGestureDistance((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDistanceChanged(v3, a3, GestureDistance);
  return v6;
}
