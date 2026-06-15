/*
 * XREFs of ?HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z @ 0x180027768
 * Callers:
 *     ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x180027720 (-OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::HandleEndpointRemoved(CApplicationManager *this, const unsigned __int16 *a2)
{
  CApplicationManager *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *i; // rax

  v2 = g_ApplicationManager;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
    for ( i = *(_QWORD **)(v5 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v5 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 32));
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
