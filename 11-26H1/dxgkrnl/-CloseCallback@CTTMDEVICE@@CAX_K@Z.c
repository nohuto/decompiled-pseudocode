/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1402025C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(void *a1)
{
  __int64 v2; // r8
  struct _KEVENT *v3; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6629;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6629LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 156, 1u) & 0x1F;
  *((_DWORD *)a1 + 2 * v2 + 157) = 1073741826;
  *((_DWORD *)a1 + 2 * v2 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)a1 + 913) )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 6);
    v3 = (struct _KEVENT *)*((_QWORD *)a1 + 7);
    if ( v3 )
    {
      KeSetEvent(v3, 0, 0);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
}
