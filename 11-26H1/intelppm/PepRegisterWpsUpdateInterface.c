/*
 * XREFs of PepRegisterWpsUpdateInterface @ 0x14003C414
 * Callers:
 *     PepAllocateRegisterWpsInterface @ 0x14003BFB8 (PepAllocateRegisterWpsInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepRegisterWpsUpdateInterface(__int64 a1)
{
  qword_140019B28 = a1;
  qword_140019B68 = 0LL;
  qword_140019B30 = qword_140019BA0;
  dword_140019B38 = *(_DWORD *)qword_140019B98;
  dword_140019B3C = 2;
  dword_140019B40 = 2;
  qword_140019B48 = qword_140019BA8;
  dword_140019B50 = *(_DWORD *)qword_140019B98;
  qword_140019B70 = (__int64)CheckWpsUpdateStateCallback;
  qword_140019B78 = (__int64)AcknowledgeWpsUpdateCallback;
  dword_140019B54 = 12;
  if ( qword_140019570 )
    qword_140019570(&dword_140019B18, &qword_140019B28);
  return 0LL;
}
