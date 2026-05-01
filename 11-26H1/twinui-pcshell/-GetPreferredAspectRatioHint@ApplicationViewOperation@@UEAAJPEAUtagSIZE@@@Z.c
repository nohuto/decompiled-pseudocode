/*
 * XREFs of ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x180320510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  *a2 = *(struct tagSIZE *)((char *)this + 232);
  return *((_BYTE *)this + 228) == 0 ? 0x80070490 : 0;
}
