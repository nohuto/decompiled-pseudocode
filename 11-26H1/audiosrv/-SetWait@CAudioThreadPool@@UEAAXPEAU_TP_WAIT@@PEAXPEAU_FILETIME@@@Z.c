/*
 * XREFs of ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180124150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetWait(CAudioThreadPool *this, struct _TP_WAIT *a2, void *a3, struct _FILETIME *a4)
{
  SetThreadpoolWait(a2, a3, a4);
}
