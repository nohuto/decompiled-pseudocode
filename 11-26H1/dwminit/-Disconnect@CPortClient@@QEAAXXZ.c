/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FD10
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000F480 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F740 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000F9DC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000FBB0 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  HANDLE *v1; // rbx

  v1 = (HANDLE *)((char *)this + 16);
  if ( *((_QWORD *)this + 4) )
    NtAlpcDeletePortSection(*v1, 0LL);
  if ( *((_BYTE *)this + 24) && *v1 )
  {
    CloseHandle(*v1);
    *((_BYTE *)this + 24) = 0;
  }
  *v1 = 0LL;
  *((_DWORD *)this + 2) = 0;
}
