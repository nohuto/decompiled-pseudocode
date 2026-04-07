/*
 * XREFs of ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18008B41C
 * Callers:
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800AD09C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x1800AD450 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWaitForService::Cleanup(SC_HANDLE *this)
{
  SC_HANDLE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseServiceHandle(v2);
    *this = 0LL;
  }
}
