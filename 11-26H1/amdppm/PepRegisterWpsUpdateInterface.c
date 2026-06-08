/*
 * XREFs of PepRegisterWpsUpdateInterface @ 0x14003B150
 * Callers:
 *     PepAllocateRegisterWpsInterface @ 0x14003ACF4 (PepAllocateRegisterWpsInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepRegisterWpsUpdateInterface(__int64 a1)
{
  qword_140015F58 = a1;
  qword_140015F98 = 0LL;
  qword_140015F60 = qword_140015FD0;
  dword_140015F68 = *(_DWORD *)qword_140015FC8;
  dword_140015F6C = 2;
  dword_140015F70 = 2;
  qword_140015F78 = qword_140015FD8;
  dword_140015F80 = *(_DWORD *)qword_140015FC8;
  qword_140015FA0 = (__int64)CheckWpsUpdateStateCallback;
  qword_140015FA8 = (__int64)AcknowledgeWpsUpdateCallback;
  dword_140015F84 = 12;
  if ( qword_1400159A0 )
    qword_1400159A0(&unk_140015F48, &qword_140015F58);
  return 0LL;
}
