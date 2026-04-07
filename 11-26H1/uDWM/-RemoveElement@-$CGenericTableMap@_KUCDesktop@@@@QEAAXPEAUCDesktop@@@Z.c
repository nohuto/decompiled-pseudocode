/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAXPEAUCDesktop@@@Z @ 0x1800AC87C
 * Callers:
 *     ??1?$CGenericTableMap@_KUCDesktop@@@@QEAA@XZ @ 0x1800A9F94 (--1-$CGenericTableMap@_KUCDesktop@@@@QEAA@XZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800DF464 (--1CWindowList@@UEAA@XZ.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x1800E06C0 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned __int64,CDesktop>::RemoveElement(struct _RTL_GENERIC_TABLE *a1, _QWORD *a2)
{
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v3; // [rsp+30h] [rbp-58h]
  __int128 v4; // [rsp+40h] [rbp-48h]
  __int128 v5; // [rsp+50h] [rbp-38h]
  __int64 v6; // [rsp+60h] [rbp-28h]
  char v7; // [rsp+68h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-18h]

  Buffer[1] = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  v6 = -1LL;
  v7 = 0;
  Buffer[0] = *a2;
  if ( !RtlDeleteElementGenericTable(a1, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
