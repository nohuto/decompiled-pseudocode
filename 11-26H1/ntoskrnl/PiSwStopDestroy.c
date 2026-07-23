/*
 * XREFs of PiSwStopDestroy @ 0x1409B2018
 * Callers:
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DEBD4 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405DECE8 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwCloseDevice @ 0x140A8C244 (PiSwCloseDevice.c)
 *     PiSwFindPdoAssociation @ 0x140A8C4E8 (PiSwFindPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2, __int64 a3)
{
  char v5; // r14
  __int64 v6; // r8
  char *v7; // rcx
  unsigned __int64 v8; // rax
  __int128 v9; // rcx
  int v10; // edi
  _QWORD *v11; // rsi
  _QWORD *v12; // rbp
  const wchar_t *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _OWORD Buffer[2]; // [rsp+50h] [rbp-48h] BYREF
  wchar_t *Str2; // [rsp+B8h] [rbp+20h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  v5 = 0;
  PiSwLock();
  RtlInitUnicodeString(&DestinationString, a2);
  memset(Buffer, 0, sizeof(Buffer));
  if ( DestinationString.Buffer )
  {
    Buffer[0] = DestinationString;
    v7 = (char *)RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, Buffer);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (unsigned __int64)(v7 + 16);
  v9 = -(__int128)(unsigned __int64)v7;
  *((_QWORD *)&v9 + 1) &= v8;
  if ( *((_QWORD *)&v9 + 1) )
  {
    if ( (byte_140EF412C & 0x40) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v9,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Start,
        v6,
        a2,
        L"DRIVERENUM",
        0LL);
    v5 = 1;
    v10 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2LL, L"SWD\\", L"DRIVERENUM");
    if ( v10 >= 0 )
    {
      v11 = (_QWORD *)**((_QWORD **)&v9 + 1);
      while ( v11 != *((_QWORD **)&v9 + 1) )
      {
        v12 = v11 - 12;
        v13 = (const wchar_t *)*(v11 - 11);
        v11 = (_QWORD *)*v11;
        if ( !wcsicmp(v13, Str2) && (*((_DWORD *)v12 + 1) & 1) == 0 )
        {
          LOBYTE(v14) = 1;
          if ( PiSwFindPdoAssociation(v12, a3, v14) )
            PiSwCloseDevice(v12);
        }
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v10 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v5 && (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v15,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Stop,
      v16,
      a2,
      L"DRIVERENUM",
      0LL,
      v10);
  return (unsigned int)v10;
}
