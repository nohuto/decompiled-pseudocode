/*
 * XREFs of ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1802C7F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetViewStateData(
        ApplicationViewOperation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 124);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 140);
  *((_QWORD *)a2 + 4) = *(_QWORD *)((char *)this + 156);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 41);
  return *((_BYTE *)this + 120) == 0 ? 0x80070490 : 0;
}
