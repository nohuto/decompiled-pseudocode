/*
 * XREFs of InitAcpiCStates @ 0x140047B54
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     Display_CST @ 0x140029C88 (Display_CST.c)
 *     InitAcpi1CStates @ 0x14002E1B4 (InitAcpi1CStates.c)
 *     InitAcpi2CStates @ 0x14003FC68 (InitAcpi2CStates.c)
 */

__int64 __fastcall InitAcpiCStates(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  int inited; // ebp
  __int64 v5; // rdx
  struct _DEVICE_OBJECT *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r14

  v1 = a1 + 26;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v3 = a1[35];
  inited = -1073741823;
  if ( (v3 & 0x7F070) != 0 )
  {
    inited = InitAcpi2CStates((__int64)a1, a1 + 66);
    if ( inited >= 0 )
      goto LABEL_8;
    a1[35] &= 0xFFFFFFFFFFF80F8FuLL;
    v8 = a1 + 26;
    v3 = a1[35];
  }
  else
  {
    v8 = v1;
  }
  if ( (v3 & 7) != 0 )
  {
    inited = InitAcpi1CStates((__int64)a1);
    v1 = v8;
    if ( inited < 0 )
    {
      a1[35] &= 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_9;
    }
LABEL_8:
    inited = 0;
    Display_CST((int *)a1[66], v5, v6, v7);
  }
LABEL_9:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v1);
  return (unsigned int)inited;
}
