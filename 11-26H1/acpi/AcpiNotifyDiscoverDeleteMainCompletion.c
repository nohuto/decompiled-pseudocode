/*
 * XREFs of AcpiNotifyDiscoverDeleteMainCompletion @ 0x1400660C0
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1400661C8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall AcpiNotifyDiscoverDeleteMainCompletion(char *P)
{
  unsigned int *v2; // rbx
  char *v3; // rax
  _BYTE *v4; // rsi
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD); // rax

  while ( 1 )
  {
    v2 = *(unsigned int **)P;
    if ( *(char **)P == P )
      break;
    if ( *((char **)v2 + 1) != P || (v3 = *(char **)v2, *(unsigned int **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)P = v3;
    v4 = P + 16;
    *((_QWORD *)v3 + 1) = P;
    v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v2 + 5);
    if ( P[16] )
    {
      if ( v5 )
        v5(*((_QWORD *)v2 + 6), v2[6], *((_QWORD *)v2 + 4));
      if ( (v2[6] & 0x80000000) != 0 )
      {
        AMLIDereferenceHandleEx(*((_QWORD *)v2 + 2));
        v4 = P + 16;
      }
    }
    else
    {
      if ( v5 )
        v5(*((_QWORD *)v2 + 6), v2[6], 0LL);
      AMLIDereferenceHandleEx(*((_QWORD *)v2 + 2));
    }
    if ( *v4 )
      ExFreePoolWithTag(*((PVOID *)v2 + 8), 0x53706341u);
    ExFreePoolWithTag(v2, 0x4E706341u);
  }
  ExFreePoolWithTag(P, 0x4E706341u);
}
