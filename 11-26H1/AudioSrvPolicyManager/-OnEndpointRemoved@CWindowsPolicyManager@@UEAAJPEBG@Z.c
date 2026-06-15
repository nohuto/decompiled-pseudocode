/*
 * XREFs of ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x180027720
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z @ 0x180027768 (-HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnEndpointRemoved(CWindowsPolicyManager *this, const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const unsigned __int16 *v3; // rdx
  CApplicationManager *v4; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  CApplicationManager::HandleEndpointRemoved(v4, v3);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
