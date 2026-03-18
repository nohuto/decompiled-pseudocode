/*
 * XREFs of CmosConfigSpaceHandlerWorker @ 0x14003FE24
 * Callers:
 *     CmosConfigSpaceHandler @ 0x14001BEA0 (CmosConfigSpaceHandler.c)
 *     CmosTranslatePNPIDToEnum @ 0x14003FD90 (CmosTranslatePNPIDToEnum.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmosConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi
  void *v6; // rcx

  v5 = 259;
  if ( *(_DWORD *)a4 )
  {
    if ( *(_DWORD *)a4 == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiWriteCmosRoutine)(
        (unsigned int)CmosDeviceType,
        *((unsigned int *)a4 + 4),
        a4[3],
        *((unsigned int *)a4 + 5));
    else
      v5 = -1073741822;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiReadCmosRoutine)(
      (unsigned int)CmosDeviceType,
      *((unsigned int *)a4 + 4),
      a4[3],
      *((unsigned int *)a4 + 5));
  }
  ((void (__fastcall *)(_QWORD))a4[5])(a4[6]);
  AMLIDereferenceHandleEx(a4[1]);
  AMLIDereferenceHandleEx(a4[7]);
  v6 = (void *)a4[8];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  ExFreePoolWithTag(a4, 0);
  return v5;
}
