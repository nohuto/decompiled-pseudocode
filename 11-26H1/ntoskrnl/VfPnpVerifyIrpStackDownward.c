/*
 * XREFs of VfPnpVerifyIrpStackDownward @ 0x140C40A60
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     VfGetPristineDriverInit @ 0x140C31EF4 (VfGetPristineDriverInit.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140C36FEC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140C37120 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C40ED0 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackDownward(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 result; // rax
  const void *v12; // rbp
  int v13; // esi
  __int64 v14; // rcx
  PDRIVER_INITIALIZE PristineDriverInit; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  int IsDeviceObjectMarked; // eax
  int v19; // r9d
  int v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]

  result = IovUtilIsWdmStack(a2);
  if ( (_DWORD)result )
  {
    v12 = (const void *)*a1;
    v20 = *(_DWORD *)(a5 + 96);
    v13 = *(_DWORD *)(*a1 + 48LL);
    v21 = a1[30];
    if ( *(_DWORD *)(v21 + 56) == 3 )
      ViErrorReport1(0x211u, a7, v12);
    v14 = a2[1];
    result = (__int64)IopInvalidDeviceRequest;
    if ( *(__int64 (__fastcall **)(__int64, IRP *))(v14 + 328) == IopInvalidDeviceRequest )
    {
      *(_DWORD *)(a5 + 4) |= 0x1000000u;
      PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v14);
      ViErrorReport1(0x21Fu, PristineDriverInit, v12);
      result = a6;
      *(_DWORD *)(a6 + 4) |= 0x80000000;
    }
    if ( a3 )
    {
      if ( v13 >= 0 )
        goto LABEL_15;
      if ( v13 == -1073741637 )
      {
        if ( v20 == -1073741637 || (*(_DWORD *)(a5 + 4) & 0x2000000) != 0 )
        {
LABEL_15:
          if ( *(_QWORD *)(v21 + 48) )
          {
            result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(v21 + 48), 2);
            if ( (_DWORD)result )
            {
              IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v17, 3);
              return ViPnpVerifyMinorWasProcessedProperly(
                       (_DWORD)v12,
                       a4,
                       IsDeviceObjectMarked == 0 ? 4 : 0,
                       v19,
                       (__int64)a7,
                       1);
            }
          }
          return result;
        }
        v16 = 534;
      }
      else
      {
        if ( (*(_DWORD *)(a5 + 4) & 0x2000000) != 0 )
          goto LABEL_15;
        v16 = 533;
      }
      result = ViErrorReport1(v16, a7, v12);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
      goto LABEL_15;
    }
  }
  return result;
}
