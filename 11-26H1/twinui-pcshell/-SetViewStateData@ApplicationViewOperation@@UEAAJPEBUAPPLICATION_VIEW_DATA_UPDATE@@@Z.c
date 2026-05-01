/*
 * XREFs of ?SetViewStateData@ApplicationViewOperation@@UEAAJPEBUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180321490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetViewStateData(
        ApplicationViewOperation *this,
        const struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  __int64 result; // rax

  *(_OWORD *)((char *)this + 124) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 140) = *((_OWORD *)a2 + 1);
  *(_QWORD *)((char *)this + 156) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 10);
  result = 0LL;
  *((_BYTE *)this + 120) = 1;
  return result;
}
